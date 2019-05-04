#ifndef LIST_H
#define LIST_H

#include "Book.h"
#include "Array.h"

class List{
  class Node{
    friend class List;
  private:
    Book* data;
    Node* prev;
    Node* next;
  };
public:
  List();
  ~List();
  void addBook(Book*);
  void cleanupData();
  void print()const;
private:
  Node* head;
  void cleanup();
};
#endif
