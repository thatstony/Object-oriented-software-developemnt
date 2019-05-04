#ifndef LIST_H
#define LIST_H

#include "Course.h"
#define MAX_SIZE  128

template <class T>
class List{
  public:
  template <class S>
  friend ostream& operator<<(ostream&,List<T>&);

class Node{
    friend class List;
  public:
    Node* Next() {return next;}
    T* Data(){return data;}
  private:
    T* data;
    Node* prev;
    Node* next;

  };

  List();
  ~List();
  void add(T*);
  void print();
  int getCount();
  List<T>& operator +=(T*);
  float computeGPA();
  int computeNumFW();
  T* operator[](int);
  Node* Head() {return head;}
  Node* Tail() {return tail;}
private:
  Node* head;
  Node* tail;
  int count;
  float average;
  int count2,sum;

};
template <class T>
List<T>::List(){
  head =0;
  tail =0;
  count = 1;
  //average =0;
  //count2=0;
}

template <class T>
List<T>::~List(){
  Node *currNode, *nextNode;

  currNode = head;
  while (currNode!= 0){
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
  head = tail = 0;

}

template <class T>
List<T>& List<T>::operator+=(T* course){
  add(course);
  return (*this);
}

template <class T>
void List<T>::add(T* course){

  Node* tmpNode = new Node;
  tmpNode->data = course;
  tmpNode->next = 0;
  tmpNode->prev = 0;

  if (head == 0){
    head = tmpNode;
    tail = tmpNode;
    return;
  }

  Node *currNode, *prevNode;

  prevNode = 0;
  currNode = head;

  while(currNode != 0){
    if (currNode->data->lessThan(tmpNode->data)==false)
    break;
    prevNode = currNode;
    currNode = currNode->next;
  }
  if (currNode == head){
    //add at head
    currNode->prev = tmpNode;
    tmpNode->next = currNode;
    head = tmpNode;

  }else if (currNode == 0){
    //add at tail
    prevNode->next = tmpNode;
    tmpNode->prev = prevNode;
    tail = tmpNode;
  }else{
    //add at middle
    tmpNode->next = currNode;
    tmpNode->prev = prevNode;
    prevNode->next = tmpNode;
    currNode->prev = tmpNode;
  }
  count++;
}

template <class T>
void List<T>::print() {
  Node* currNode = head;
  if (currNode == 0 )
  return;

  do {
    currNode->data->print();
    currNode = currNode->next;
  }while (currNode!=0);
  cout<<"Head is :";
  head->data->print();
  cout<<"Tail is :";
  tail->data->print();
}

template<class T>
int List<T>::getCount(){
  return count;
}
template<class T>
float List<T>::computeGPA(){
  Node* currNode = head;
  if(currNode == 0){
    return 0;
  }
  while (currNode != tail->next){
    sum+=currNode->data->getGrade();
    currNode = currNode->next;
  }
  average = ((float)sum/count);
  return average;
}

template<class T>
int List<T>::computeNumFW(){
  Node* currNode = head;
  if(currNode == 0){
    return 0;
  }
  while(currNode!= tail->next){
    if(currNode->data->getGrade()<1){
      count2++;
    }
    currNode = currNode->next;
  }
  return count2;
}

template <class T>
ostream& operator<<(ostream& output, List<T>& list){
  for (int i = 0; i <list.getSize();i++){
    output<<(*list[i]);
  }
  return output;
}

#endif
