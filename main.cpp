#include "book.hpp"
#include "dictionary.cpp"
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
void updateMenu(){
 cout<<"\n1. Update Title \n";
 cout<<"2. Update Author \n";
  cout<<"3. Update  Title and Author \n";
}
//Faith Olajide
void addBook(string title, string author, string ISBN, dictionary dic){
  book bk = book(title, author, ISBN);

  if(dic.insert(bk) == true){
    cout<<"Successfull Added to Library!\n";
  }
  else{
    cout<<"Book was not Added!";
  }
  
};
void sortBook(){};
void viewAll(){};
void update(){};
void deleteBook(string ISBN){};


int main(){
    dictionary dic;
    int opp = 0;
    int choi;
    string title;
    string author;
    string ISBN;

     do {
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
               //addBook(title, author, ISBN,dic);
              break;
          case 2: //View books
            break;
          case 3: //edit book
            cout<<"Enter the ISBN for the Book you would like to edit: ";
              cin>>ISBN;
            cout<<"What would you to change?: ";
             updateMenu();
              cin>>choi;
              switch(choi){
                case 1:// Update Title
                  cout<<"Enter the New Book Title: ";
                  cin.ignore();
                   getline(cin,title);
                    
                  break;
                case 2: //Update Author
                  cout<<"Enter the New Author: ";
                  cin.ignore();
                  getline(cin,author);
                  break;
                case 3: //Update Both 
                  cout<<"Enter the New Book Title: ";
                  cin.ignore();
                  getline(cin,title);
                  cout<<"Enter the New Author: ";
                  cin.ignore();
                  getline(cin,author);
                  //update();
                  break;
            }
                 break;
         		 case 4://delete the book
           			 cout<<"Enter the ISBN for the book to be deleted: ";
              		 cin>>ISBN;
            //deleteBook(ISBN);
              
          			break;
          		case 5: //find book
           			 cout<<"Enter the ISBN of the book to find: ";
           			 cin>>ISBN;
         			 break;
          		case 6:
          		    	cout<<"Enjoy The Library!"<<endl;
         			 break;
          		default:
        			 cout<<"Enter a Valid option!";
    	 			 break;
        } 
        	system("PAUSE");
			system ("CLS");
       
      }while (opp != 6);

}
