#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include <string>
using namespace std;
#include "Book.h"

class FictionBook : public Book
{
public:
  ~FictionBook();
  FictionBook(int=0, string = "",string="Unknown", int=0);
  virtual bool lessThan(Book*);
private:
  string author;
};
#endif
