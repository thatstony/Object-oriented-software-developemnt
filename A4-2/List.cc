#include <iostream>
using namespace std;

#include "List.h"

List::List() : head(0){}

List::~List(){
  cleanup();
}

void List::addBook(Book* book){
  Node* tmpNode = new Node;
  tmpNode->data = book;
  tmpNode->next = 0;
  tmpNode->prev = 0;

  if(head ==0){
    head = tmpNode;
    return;
  }
  Node *currNode, *prevNode;

  prevNode = 0;
  currNode = head;

  while (currNode !=0){
    if(currNode->data->lessThan(tmpNode->data)==false)
    break;
    prevNode = currNode;
    currNode = currNode->next;

  }
  if (currNode == head){
    currNode->prev = tmpNode;
    tmpNode->next = currNode;
    head = tmpNode;
  }else if (currNode == 0){
    prevNode->next = tmpNode;
    tmpNode->prev = prevNode;
    prevNode= tmpNode;
  }else {
    tmpNode->next = currNode;
    tmpNode->prev = prevNode;
    prevNode->next = tmpNode;
    currNode->prev = tmpNode;
  }
}

void List::print() const{
  Node *currNode = head;
  Node *current = head->prev;
  if (currNode == 0) return;
  do{
    current = currNode;
    currNode->data->print();
    currNode = currNode->next;

  }while (currNode!=0);


cout<<endl;

  /*currNode =current;
  do{
    currNode->data->print();
    currNode = currNode->prev;
  }while (currNode!=0);
  //printBack();*/
}


void List::cleanupData(){
  Node *currNode = head;
  while(currNode != 0){
    delete currNode->data;
    currNode = currNode->next;
  }
}

void List::cleanup(){
  Node *currNode,*nextNode;
  currNode = head;
  while (currNode != 0){
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
  head = 0;
}
