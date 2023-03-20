#include "node.h"

Node::Node(){
  value = 0;
  next = NULL;
}

Node::Node(int valueP){
  value = valueP;
  next = NULL;
}

Node::~Node(){
  next = NULL;
}


void Node::setValue(int valueP){
  value = valueP;
}
int Node::getValue(){
  return value;
}

void Node::setNext(Node* nextP){
  next = nextP;
}

Node* Node::getNext(){
  return next;
} 