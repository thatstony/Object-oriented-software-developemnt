#ifndef COURSELIST_H
#define COURSELIST_H
using namespace std;

#include "List.h"
//#include "Course.h"

class CourseList : public List<Course>
{
public:

  int computeNumFW();
  float computeGPA();

protected:
  List<Course> list;

};
#endif
