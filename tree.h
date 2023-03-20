#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cstring>
#include "list.h"

class Tree{

public:
  Tree();
  ~Tree();
  void createTree();
  void addValue(char value);
  void reHeap();
  void printHeap();
  void recurseHeap(int index, int levels, int currentLevel);
  List* getStack();
  char* getArray();
  void setVal(int i, char value);
  void setSeed(Node*);
  int getLength();
  
  

private:
  
  char* basePE;
  List* stack;
  Node* seed;
  int numOfNodes;
  

};

#endif