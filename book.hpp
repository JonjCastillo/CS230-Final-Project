#ifndef CLIENTTYPE_HPP
#define CLIENTTYPE_HPP

#include <string>
using namespace std;

class book { 
private:
  string name;
  string author;
  string isbn;

public:
  book(string n, string a, string i);

  // accessors
  string getName() const;
  string getAuthor() const;
  string getISBN() const;

  // mutators
  void setName(string name);
  void setAuthor(string name);
  void setISBN(string name);

  string toString() const;
  friend bool operator< (const book &b1, const book &b2);
};

#endif
