#include <iostream>
#include <iomanip>
#include <string>
#include "Course.h"
using namespace std;


Course::Course(int c, int t,int g,string ins)
{
  code = c;
  grade = g;
  term = t;
  instructor = ins;
}

int Course::getGrade(){return grade;}

void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << setw(5)<<term<<"  "<<instructor<<endl;

}

void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

bool Course::lessThan(Course* course){
  if(code < course->code){
    return true;
  }else if(code == course->code){
    if(term < course->term){
      return true;
    }
  }
    return false;

}
