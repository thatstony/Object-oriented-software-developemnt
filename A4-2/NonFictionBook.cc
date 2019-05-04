#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(int i, string t, string a, int y): Book(i,t,a,y){
  id = i;
}
bool NonFictionBook::lessThan(Book* b){
  if(id <b->getId()){
    return true;
  }else{
    return false;
  }
}
