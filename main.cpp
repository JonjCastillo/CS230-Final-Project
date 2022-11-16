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
  cout << "5. Sort by Title\n";
  cout << "6. Sort by Author\n";
  cout << "7. Delete a book\n";
  cout << "8. Find a book\n";
  cout << "9. Exit Application\n";
  
}
//Faith Olajide
void addBook(){};
void sortBook(){};
void viewAll(){};
void update(){};


int main(){
    int opp;
    string title;
    string author;
    string ISBN;

      while(opp!=8){
        Menudisplay();
        cin>>opp;

        switch(case){
            deafult:
              cout<<"Please Enter a Valid Option!";
             break;
            case 1:
              cout<<"Enter the Book's Title: ";
              cin>>title;
              cout<<"Enter the Book's Author: ";
              cin>>author
              cout<<"Enter the Book's ISBN: ";
              cin>>ISBN;
              break;
        }
       
      }

}



