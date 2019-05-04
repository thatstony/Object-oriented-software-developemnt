#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include <string>
using namespace std;
#include "Book.h"

class NonFictionBook : public Book{
public:
  ~NonFictionBook();
  NonFictionBook(int=0, string = "",string="Unknown", int=0);
  virtual bool lessThan(Book*);
private:
  int id;
};

#endif
