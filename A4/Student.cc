#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;

}
Student::~Student(){

}

int Student::getId(){return id;}

//addCourse function
/*void Student::addCourse(Course* course){
list.add(course);
}
*/
Student& Student::operator +=(Course* course){
  list.operator+=(course);
  return (*this);
}

float Student::computeGPA(){
  gpa = list.computeGPA();
  return gpa;
}

int Student::computeNumFW(){
  numFW= list.computeNumFW();
  return numFW;
}

void Student::print()
{
  cout<< endl << "Id: " << id << endl;

list.print();
  cout <<"GPA : "<<gpa<<endl;
  cout <<"NUMFW: "<<numFW<<endl;
}
