#include "book.hpp"
#include <sstream>
using namespace std;

book::book(string n, string a, string i) {
  this->name = n;
  this->author = a;
  this->isbn = i;
}

string book::getName() const { return name; }

string book::getAuthor() const { return author; }

string book::getISBN() const { return isbn; }

void book::setName(string n) { this->name = n; }

void book::setAuthor(string a) { this->author = a; }

void book::setISBN(string i) { this->isbn = i; }

string book::toString() const {
  ostringstream buffer;

  buffer << "Name: " << this->name << "\n"
         << "Author: " << this->author << "\n"
         << "ISBN: " << this->isbn << "\n";
  return buffer.str();
}

bool operator< (const book &b1, const book &b2) {
  return ((b1.getName() == b2.getName()) ? b1.getAuthor() < b2.getAuthor() : b1.getName() < b2.getName());
}