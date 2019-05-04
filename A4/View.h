#ifndef VIEW_H
#define VIEW_H

#include "Storage.h"

class View
{
  public:
    void mainMenu(int&);
    void readStuId(int&);
    bool readCourse(int&, int&, int&, string&);
    void printStorage(Storage&);
};

#endif
