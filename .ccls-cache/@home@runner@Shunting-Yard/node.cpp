#include "node.h"

Node::Node(){
  value = ' ';
  next = NULL;
  left = NULL;
  right = NULL;
}

Node::Node(char valueP){
  value = valueP;
  next = NULL;
  left = NULL;
  right = NULL;
}

Node::~Node(){
  next = NULL;
}


void Node::setValue(char valueP){
  value = valueP;
}
char Node::getValue(){
  return value;
}

void Node::setNext(Node* nextP){
  next = nextP;
}

void Node::setLeft(Node* leftP){
  left = leftP;
}

void Node::setRight(Node* rightP){
  right = rightP;
}

Node* Node::getNext(){
  return next;
} 

Node* Node::getLeft(){
  return left;
} 

Node* Node::getRight(){
  return right;
} 