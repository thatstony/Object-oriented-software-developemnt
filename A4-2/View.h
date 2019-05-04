#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Library.h"
#include "FictionBook.h"
#include "NonFictionBook.h"
using namespace std;

class View
{
public:
  int mainMenu();
  void addBook(int&,int&,string&,string&);
  void readType(string&);
  void print();
  int getSelection();
private:
  //Book* books;
  Library library,library2;
  int selection;
};
#endif
