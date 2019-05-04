#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <ostream>

#include "View.h"

int View::mainMenu(){
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: "<<endl;
    cin  >> selection;
  }

  return selection;
}

int View::getSelection(){
  return selection;
}



void View::addBook(int& id,int& year,string& title,string& author){
  cout << "id:  ";
  cin  >> id;
  cout << "title:   ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin  >> year;

  cout<<"Done..."<<endl;
}


void View::print(){
  library.print();
  library2.print();
}

void View::readType(string& type){
  cout << "Type: ";
  cin >> type;
}
