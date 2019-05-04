#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

#include "FictionBook.h"

FictionBook::FictionBook(int i, string t, string a, int y): Book(i,t,a,y){
  author = a;
}

bool FictionBook::lessThan(Book* b){
    if(author< b->getAuthor()){
      return true;
    }else{
      return false;
    }
  }
