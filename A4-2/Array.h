#ifndef ARRAY_H
#define ARRAY_H
#define MAX_ARR_SIZE  128
#include <string>
using namespace std;
#include "Book.h"

class Array{
public:
  Array();
  ~Array();
  void addBook(Book*);
  void print();

private:
  int size;
  Book* elements[MAX_ARR_SIZE];
};
#endif
