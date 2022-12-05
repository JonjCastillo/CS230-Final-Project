// Ian & Logan

#include "dictionary.hpp"

//Inserts a book to the dictionary. Will return false if book is already present
bool dictionary::insert(book b) {
  for (list<pair<string, book>> t = dic; !t.empty(); t.pop_front()){
    if (t.front().first == b.getISBN()) return false;
  }
  
  dic.push_front(pair<string, book>(b.getISBN(), b));
  return true;
}


/*Searches for a book by its isbn and replaces its name and author as needed
  If the book is not found, will insert new book instead*/
void dictionary::emplace(string n, string a, string i){
  //Deconstruct dic and search for book to replace
  list<pair<string, book>> t;
  for (; !dic.empty(); dic.pop_front()){
    if (t.front().first == i){
      t.front().second = book(n, a, i);
      break;
    }
    else t.push_front(dic.front());
  }

  //If book isn't found, push new book to list
  if (dic.empty()) dic.push_front(pair<string, book>(i, book(n, a, i)));

  //Repopulate dictionary
  for (; !t.empty(); t.pop_front()){
    dic.push_front(t.front());
  }
}

/*Will attempt to remove a book by ISBN from the dictionary.
  If the book could not be found, will be deleted.*/
bool dictionary::remove(string i) {
  list<pair<string, book>> t;
  bool removed = false;
  // populate the temp list with the same elements as dictionary
  for (; !dic.empty(); dic.pop_front()) {
    // exclude the element user wants removed
    if (dic.front().first != i) {
      t.push_back(dic.front());
    }
    else removed = true;
  }

  // Repopulate Dictionary
  dic = t;
  return removed;
}

// Sort dictionary smallest to largest
void dictionary::sort() {
  // Init sorted list and buffer
  list<pair<string, book>> tsort, t;
  tsort.push_front(dic.front());
  dic.pop_front();

  // Iterate dictionary until all elements are sorted
  while (!dic.empty()) {
    bool elemPushed = false;
    while (!elemPushed) {
      // Push element in back or middle of list
      if (tsort.back().second < dic.front().second) {
        tsort.push_back(dic.front());
        dic.pop_front();
        elemPushed = true;
      }

      // Element is smallest, must be pushed to front
      else if (dic.front().second < tsort.back().second) {
        tsort.push_front(dic.front());
        dic.pop_front();
        elemPushed = true;
      }

      // Element couldn't be sorted at position, move to next
      else {
        t.push_front(tsort.back());
        tsort.pop_back();
      }
    }

    // Insert elements from buffer back into sorted list and run again
    for (; !t.empty(); t.pop_front())
      tsort.push_back(t.front());
  }

  dic = tsort;
}

/*Outputs a string ideal for viewing the dictionary.
  Does not print to console, only returns string*/
string dictionary::viewAll() {
  string b = "";
  for (list<pair<string, book>> t = dic; !t.empty(); t.pop_front()) {
    b += "Key: " + t.front().first + "\t| ";
    b += "BOOK:: Name: " + t.front().second.getName() + "\t| ";
    b += "Author: " + t.front().second.getAuthor() + "\t| ";
    b += "ISBN: " + t.front().second.getISBN() + "\n";
  }
  return b;
}

string dictionary::viewAuthors(string a) {
  string b = "";
  for (list<pair<string, book>> t = dic; !t.empty(); t.pop_front()) {
    if (t.front().second.getAuthor() == a){
      b += "Key: " + t.front().first + "\t| ";
      b += "BOOK:: Name: " + t.front().second.getName() + "\t| ";
      b += "Author: " + t.front().second.getAuthor() + "\t| ";
      b += "ISBN: " + t.front().second.getISBN() + "\n";
    }
  }
  return b;
}

/*Searches for a book by ISBN, and returns it.
  If the book could not be found, will return a book will NULL name and author, and 0 ISBN*/
book dictionary::search(string i) {
  for (list<pair<string, book>> t = dic; !t.empty(); t.pop_front()) {
    if (t.front().first == i)
      return t.front().second;
  }
  return book("NULL", "NULL", "0");
}
