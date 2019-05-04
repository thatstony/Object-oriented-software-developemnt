#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Monitor.h"

using namespace std;



void Monitor::printLogs(){
  cout<<endl;
  cout<<"LOG :"<<endl;
  for(int i = 0; i<collection.size();i++){
    cout<<collection[i]<<endl;
  }
}

GPAMonitor::GPAMonitor(float MGPA){
  minGPA = MGPA;
}

void GPAMonitor::update(Student* stu){
    string id = to_string(stu->getId());
    gpa = stu->computeGPA();
  if (gpa < minGPA){
    string GPA= to_string(gpa);
    collection.push_back(id);
    collection.push_back("Has a GPA which is below the minimum threshold");
    collection.push_back(GPA);
    collection.push_back("");
  }
}

FWMonitor::FWMonitor(int NFW)
{
  numberFW = NFW;
}

void FWMonitor::update(Student* stu){
  string id = to_string(stu->getId());
    numFW= stu->computeNumFW();
  if(numFW>numberFW){
    string numberFW = to_string(numFW);
    cout<<"Student ";
    collection.push_back(id);
    collection.push_back("Has exceed max filed or withdrawn courses");
    collection.push_back(numberFW);
    collection.push_back("");
  }
}
