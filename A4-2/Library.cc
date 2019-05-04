#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"



Library::Library(){

}

Library::~Library(){}

int Library::getSize(){return numBooks;}

void Library::addBook(Book* book){
  list.addBook(book);
}

void Library::print(){
  list.print();
}
