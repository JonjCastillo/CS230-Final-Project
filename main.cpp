/*Group Members: Faith Olajide, Shirdora Ashe, Logan Brewer, Nadeem Ameen, Ian Davis, Sean Harris and Johnathan Casillo*/
#include "book.cpp"
#include "dictionary.cpp"

#include <iostream>
#include <string>
#include <list>

using namespace std;
void Menudisplay(){
  cout << "Welcome to the Library!\n";
  cout << "Please Select an option.\n";
  cout << "1. Add a book\n";
  cout << "2. View Books\n";
  cout << "3. View Authors\n";
  cout << "4. Edit a book\n"; 
  cout << "5. Delete a book\n";
  cout << "6. Find a book\n";
  cout << "7. Exit Application\n";
}
//Faith Olajide

void addBook(string title, string author, string ISBN, dictionary &dic){
  book bk = book(title, author, ISBN);
  if(dic.insert(bk)){
    cout<<"Added Successfully!\n";
  }
  else{
    cout<<"The Book was not Added Successfully!\n";
  }
}


void update(string title, string author, string ISBN, dictionary &dic ){
  dic.emplace(title, author, ISBN);
  cout<<"Book successfully Updated\n";
};

void removeBook(string ISBN,dictionary &dic){
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
  string title;
  string author;
  string ISBN;
    
  int opp = 1;
  int choi;

  do {
   
    Menudisplay();
    cin>>opp;

    switch(opp){
     
      case 1: //Add Book
        cout<<"Enter the Book's Title: ";
        cin.ignore();
        getline(cin,title);

        cout<<"Enter the Book's Author: ";
        //cin.ignore();
        getline(cin,author);
        //cin >> author;

        cout<<"Enter the Book's ISBN: ";
        cin>>ISBN;

        addBook(title, author, ISBN, dic);
        break;
      
      case 2:
        cout << endl << "All Books\n`" << dic.viewAll() << endl;
        break;
      
      case 3: //view by author Name
        cout<<"Enter the Book's Author: ";
        cin.ignore();
        getline(cin,author);
        cout << dic.viewAuthors(author) << endl;
        break;

      case 4: //edit book - Update Both 
        cout<<"Enter the ISBN for the Book you would like to edit: ";
        cin>>ISBN;
        cout << dic.search(ISBN).toString() << endl;

        cout<<"Enter the New Book Title: ";
        cin.ignore();
        getline(cin,title);

        cout<<"Enter the New Author: ";
        //cin.ignore();
        getline(cin,author);

        update(title, author, ISBN, dic);
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
          break;
    	default:
        cout<<"Please Enter a Valid Option!"<<endl;

    }
  //This sometimes doesnt work, but ideally it clears the screen after a prompt ??\_(???)_/??
  system("PAUSE");
	system ("CLS");
  } while (opp != 7);
}
