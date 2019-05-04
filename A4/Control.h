#ifndef CONTROL_H
#define CONTROL_H

#include "Storage.h"
#include "View.h"
#include "Monitor.h"
#include "StuServer.h"

class Control
{
  public:
    Control();
    ~Control();
    void launch();
    void notify(Student*);

  private:
    Storage storage;
    View    view;

    //a collection of monitor objects pointers
    vector <Monitor*> monitor;

    StuServer StuS;
};

#endif
