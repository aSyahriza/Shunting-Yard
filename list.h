#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstring>
#include <vector>

#include "node.h"

class List{
  public:
  List();  
  ~List();

  void push(char newChar);
  void pushh(Node* newNode);
  void pop();

  void enqueue(char newChar);
  void dequeue();

  Node* peek();
  Node* getRear();
  int getLength();
  void printList();
  bool isEmpty();
  


  
  private:
    int listLength;
    Node* head;
    Node* tail;
};

#endif
