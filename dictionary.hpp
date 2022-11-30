#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP
#include "book.hpp"

#include <list>
using namespace std;

class dictionary {
public:
  list<pair<string, book> > dic;
 
  //dictionary();

  // int hash(string p);
  bool insert(book b);
  bool remove(string i);
  void sort();
  string viewAll();
  book search(string i);
};
#endif
