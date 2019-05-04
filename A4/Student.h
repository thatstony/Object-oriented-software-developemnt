#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "List.h"
#include "CourseList.h"

class Student
{
  public:
    Student(int=0);
    ~Student();
    //void addCourse(Course*);
    Student& operator+=(Course*);
    void print();
    float computeGPA();
    int computeNumFW();
    int getId();

  private:
    int    id;
    int numFW;
    List<Course> list;
    float gpa;
    CourseList courselist;

};

#endif
