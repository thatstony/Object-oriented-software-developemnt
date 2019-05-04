#include <iostream>
using namespace std;

#include "CourseList.h"


int CourseList::computeNumFW(){
  List<Course>::Node* currNode = Head();
  if(currNode == 0){
    return 0;
  }
  int count2=0;
  while(currNode!= list.Tail()->Next()){
    if(currNode->Data()->getGrade()<1){
      count2++;
    }
    currNode = currNode->Next();
  }
  return count2;

}

float CourseList::computeGPA(){
  List<Course>::Node* currNode = Head();
  if(currNode == 0){
    return 0;
  }
  int sum=0;
  float average=0;
  while (currNode != list.Tail()->Next()){
  sum+=currNode->Data()->getGrade();
    currNode = currNode->Next();
  }
  average = ((float)sum/getCount());
  return average;
  }
