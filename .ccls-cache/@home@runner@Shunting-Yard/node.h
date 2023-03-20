#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>

using namespace std;

class Node {
  public:
  // Creates node
  Node();
  // Creates node with a student value
  Node(char valueP);
  // Destructor

  ~Node();
  // Sets student i.e. value of this node
  void setValue(char valueP);
  // Returns char
  char getValue();
  // Sets nodes
  void setNext(Node* nextP);
  void setLeft(Node* leftP);
  void setRight(Node* rightP);
  // Returns nodes
  Node* getNext();
  Node* getLeft();
  Node* getRight();

  protected: 
  char value;
  Node* next;
  Node* left;
  Node* right;
};

#endif