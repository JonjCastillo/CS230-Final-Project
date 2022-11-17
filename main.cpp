//Shirdora Ashe and Faith Olajide
//other Files: Logan Brewer, Ian Davis, Jon Castillo, Sean Harris, Nadeem Ameen

#include <iostream>
#include<string>
#include "book.hpp"
#include "Dictionary.h"
using namespace std;

//Faith Olajide
void Menudisplay(){
  cout << "Welcome to the Library!\n";
  cout << "Please Select an option.\n";
  cout << "1. Add a book\n";
  cout << "2. View books by Title\n";
  cout << "3. View books by Author Name\n";
  cout << "4. Edit a book\n"; 
  cout << "5. Sort by Title\n";  //don't think these are needed
  cout << "6. Sort by Author\n";  //don't think these are needed
  cout << "7. Delete a book\n";
  cout << "8. Find a book\n";
  cout << "9. Exit Application\n";
  
}
void updateMenu(){
 cout<<"\n1. Update Title \n";
 cout<<"2. Update Author \n";
  cout<<"3. Update  Title and Author \n";
}
//Faith Olajide
void addBook(){};
void sortBook(){};
void viewAll(){};
void update(){};


int main(){
 int opp;
    int choi;
    string title;
    string author;
    string ISBN;

      while(opp!=8){
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
              break;
          case 2: //View by Title
             
            break;
          case 3: //view by author Name
            
            break;
          case 4: //edit book
            cout<<"Enter the ISBN for the Book you would like to edit: ";
              cin>>ISBN;
            cout<<"What would you to change?: ";
             updateMenu();
              cin>>choi;
              switch(choi){
                default:
                  cout<<"Enter a Valid option!";
                  break;
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
                  break;
            }
            break;
          case 7://delete the book
            cout<<"Enter the ISBN for the book to be deleted: ";
              cin>>ISBN;
              
            break;
          case 8:
            cout<<"Enter the ISBN of the book to find: ";
            cin>>ISBN;
          break;
          case 9:
          cout<<"Enjoy The Library!"<<endl;
        }
       
      }

}

