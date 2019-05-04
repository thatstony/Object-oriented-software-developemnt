#ifndef MONITOR_H
#define MONITOR_H
#include <string>
#include <vector>

#include "Student.h"
using namespace std;

class Monitor
{
public:
// a data member that stores a collection of logs
  vector <string> collection;

  //printLogs
  void printLogs();

  // PURE VIRTUAL
  virtual void update(Student*)=0;
protected:


};

class GPAMonitor : public Monitor
{
public:
  ~GPAMonitor();
  GPAMonitor(float=0);
  virtual void update(Student* stu);
protected:

  //minimum threshold for GPAs
  float minGPA,gpa;

};

class FWMonitor : public Monitor
{
public:
  ~FWMonitor();
  FWMonitor(int=0);
  virtual void update(Student* stu);
protected:
  int numberFW,numFW;

};

#endif
