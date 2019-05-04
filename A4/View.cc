#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "View.h"

void View::mainMenu(int& selection)
{
  int numOptions = 1;
  selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
}

void View::readStuId(int& id)
{
  cout << "student id:   ";
  cin  >> id;
}

bool View::readCourse(int& code, int& grade, int& term, string& instructor)
{
  cout << "course code <0 to end>:  ";
  cin  >> code;
  if(code == 0){
    return false;
  }
  cout << "grade:                   ";
  cin  >> grade;
  cout << "term:                    ";
  cin  >> term;
  cout << "instructor:              ";
  cin  >> instructor;
  return true;
}

void View::printStorage(Storage& sto)
{
  sto.print();
}
