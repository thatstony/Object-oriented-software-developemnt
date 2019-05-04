#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
using namespace std;
#include "List.h"
class Library{
public:
  Library();
  ~Library();
  int getSize();
  void addBook(Book*);
  void print();

private:
  int numBooks;
  List list;
};

#endif
