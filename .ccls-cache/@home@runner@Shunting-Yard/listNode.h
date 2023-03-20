#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <iostream>
#include <cstring>

using namespace std;

class Node {
  public:
  // Creates node
  Node();
  // Creates node with a student value
  Node(int valueP);
  // Destructor

  ~Node();
  // Sets student i.e. value of this node
  void setValue(int valueP);
  // Returns student
  int getValue();
  // Sets next node
  void setNext(Node* nextP);
  // Returns next node
  Node* getNext();

  protected: 
  int value;
  Node* next;
  Node* left;
  Node* right;
};

#endif