#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

Storage::Storage(){
  numStudent = 0;
}
Storage::~Storage(){
  Student stu;
  for (int i =0;i<numStudent;i++){
    delete student[i];
  }
  stu.~Student();
}
/*void Storage::addStu(Student* stu){
  student[numStudent] = stu;
  ++numStudent;
}
*/
Storage& Storage::operator+=(Student* stu){
  student[numStudent]=stu;
  ++numStudent;
  return (*this);
}
void Storage::print(){
  if (numStudent != 0){
  for (int i =0; i<numStudent;i++){
  student[i]->print();
}
}else{
  cout<<"No students been added"<<endl;
}
}
