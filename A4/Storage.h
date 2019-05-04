#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

class Storage{
public:
  Storage();
  ~Storage();
  //void addStu(Student*);
  Storage& operator+=(Student*);
  void print();
private:
  Student* student[MAX_NUM_STU];
  int numStudent;

};
#endif
