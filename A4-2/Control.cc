#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <ostream>

#include "Control.h"

void Control::lanuch(){

  while(1){
    menuSelection = view.mainMenu();
    if (menuSelection ==0)
    break;
    else if (menuSelection ==1){
      view. readType(type);
      view. addBook(id,year,title,author);
      if(type == "Fiction"){
        FictionBook* fiction = new FictionBook(id,title,author,year);
        fiction->setBook(id,title,author,year);
        library.addBook(fiction);
      }else if(type == "NonFiction"){
        NonFictionBook* nonFiction = new NonFictionBook(id,title,author,year);
        nonFiction->setBook(id,title,author,year);
        library2.addBook(nonFiction);
      }
    }
  }
  library.print();
  library2.print();
}
