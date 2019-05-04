#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include "View.h"
#include "Book.h"
using namespace std;

class Control
{
public:
  void lanuch();
  void addBook();
private:
  Library library,library2;
  View view;
  int menuSelection;
  int id, year;
  string author,title,type;
};
#endif
