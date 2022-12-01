#include "book.hpp"
#include "dictionary.hpp"
#include <iostream>
#include<string>
#include <list>
using namespace std;
void Menudisplay(){
  cout << "Welcome to the Library!\n";
  cout << "Please Select an option.\n";
  cout << "1. Add a book\n";
  cout << "2. View books by Title\n";
  cout << "3. View books by Author Name\n";
  cout << "4. Edit a book\n"; 
  cout << "5. Delete a book\n";
  cout << "6. Find a book\n";
  cout << "7. Exit Application\n";
  
}
//Faith Olajide

void addBook(string title, string author, string ISBN, dictionary dic){
  book bk = book(title, author, ISBN);
  if(dic.insert(bk)){
    cout<<"Added Successfully!\n";
  }
  else{
    cout<<"The Book was not Added Successfully!\n";
  }
}
//doesn't work
void update(string title,string author,string ISBN, dictionary dic ){
  book bk  = dic.search(ISBN);
  bk.setName(title);
  bk.setAuthor(author);
  dic.emplace(bk.getName(), bk.getAuthor(), bk.getISBN());
  cout<<"Book successfully Updated\n";
  
  
};

void removeBook(string ISBN,dictionary dic){
  if(dic.remove(ISBN) ==true){
    cout<<"The Book has successfully Been removed!\n";
  }
  else{
    cout<<"The Book was not Removed!\n";
  }
  
}

void searchBook(string ISBN, dictionary dic){
  book bk = dic.search(ISBN);
  cout<<"Book Title: "<<bk.getName()<<"\nAuthor: "<<bk.getAuthor()<<"\n ISBN: "<<ISBN <<"\n";
}


int main(){
  dictionary dic;
     int opp;
    int choi;
    string title;
    string author;
    string ISBN;
    book bk = book("Hello Dear", "Shirdora Ashe", "14562");
    dic.insert(bk);
      dic.viewAll(); //doesnt work either
      while(opp!=7){
        Menudisplay();
        cin>>opp;

        switch(opp){
            deafult:
              cout<<"Please Enter a Valid Option!";
             break;
            case 1: //Add Book
              cout<<"Enter the Book's Title: ";
              cin.ignore();
              getline(cin,title);
              cout<<"Enter the Book's Author: ";
              cin.ignore();
              getline(cin,author);
              cout<<"Enter the Book's ISBN: ";
              cin>>ISBN;
               addBook(title, author, ISBN,dic);
              break;
          case 2: //View by Title
             
            break;
          case 3: //view by author Name
            
            break;
          case 4: //edit book
            cout<<"Enter the ISBN for the Book you would like to edit: ";
              cin>>ISBN;
              //Update Both 
                  cout<<"Enter the New Book Title: ";
                  cin.ignore();
                  getline(cin,title);
                  cout<<"Enter the New Author: ";
                  cin.ignore();
                  getline(cin,author);
                  //update();
                  update(title, author,ISBN, dic);
                 cout<<"Doesn't work\n";
            break;
          case 5://delete the book
            cout<<"Enter the ISBN for the book to be deleted: ";
              cin>>ISBN;
              removeBook(ISBN,dic);
              
            break;
          case 6: //find book
            cout<<"Enter the ISBN of the book to find: ";
            cin>>ISBN;
            searchBook(ISBN, dic);
          break;
          case 7:
          cout<<"Enjoy The Library!"<<endl;
        }
       
      }
  

}