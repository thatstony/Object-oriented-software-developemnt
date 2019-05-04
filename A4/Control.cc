#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Control.h"

Control::Control()
{

  GPAMonitor* gpaMonitor = new GPAMonitor(3.0);
  monitor.push_back(gpaMonitor);
  FWMonitor* fwMonitor = new FWMonitor(2);
  monitor.push_back(fwMonitor);


  vector<string> student;
  stringstream ss;
  int id,courseCode,term,grade;
  string instructor;

  StuS.retrieve(student);
  for (int i =0; i <student.size();++i){
    ss.clear();
    ss.str(student[i]);
    ss>>id;
    cout<<"ID:"<<id<<endl;
    Student* newStu = new Student(id);
    while(ss>>courseCode>>term>>grade>>instructor){
      if(courseCode!=0){
    Course* newCourse = new Course(courseCode,term, grade, instructor);
    //newStu->addCourse(newCourse);
    newStu->operator+=(newCourse);
    cout<<"courseCode: "<<courseCode<<", term: "<<term<<", Grade: "<<grade<<", instructor: "<<instructor<<endl;
  }else{break;}
}
  //storage.addStu(newStu);
  storage.operator+=(newStu);
  notify(newStu);
}
}


Control::~Control()
{

  for(int i = 0;i<monitor.size();i++){
    monitor[i]->printLogs();
  }
}

void Control::launch()
{
  int     stuId, courseCode, grade, term;
  string  instructor, outStr;
  int     menuSelection;

  while (1) {
    view.mainMenu(menuSelection);

    if (menuSelection == 0)
      break;

    else if (menuSelection == 1) {

      view.readStuId(stuId);
      Student* newStu = new Student(stuId);
      while (view.readCourse(courseCode, grade, term, instructor)) {
        Course* newCourse = new Course(courseCode,term, grade, instructor);
        //newStu->addCourse(newCourse);
        newStu->operator+=(newCourse);

      }
      //storage.addStu(newStu);
      storage.operator+=(newStu);
      notify(newStu);
    }
  }
  storage.print();
}

void Control::notify(Student* newStu){

  for(int i = 0; i<monitor.size();i++){
    monitor[i]->update(newStu);
  }

}
