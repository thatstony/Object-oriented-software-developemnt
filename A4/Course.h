#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;
class Course
{
  public:
    Course(int=0, int=0,int=0, string ="Unknown1");
    void print();
    bool lessThan(Course*);
    int getGrade();

  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    void getGradeStr(string&);
    int term;
    string instructor;
};

#endif
