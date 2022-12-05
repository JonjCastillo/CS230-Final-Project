#include "book.hpp"
#include <iostream>
#include <list>
using namespace std;

class dictionary {
public:
  list<pair<string, book>> dic;

  // int hash(string p);
  bool insert(book b);
  void emplace(string n, string a, string i);
  bool remove(string i);
  void sort();
  string viewAll();
  book search(string i);
};
