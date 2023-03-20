#ifndef SHUNTING_H
#define SHUNTING_H

#include "list.h"
#include "tree.h"

class Shunting{
public:
  Shunting(); 
  Shunting(const char*);
  ~Shunting();
  void shunt();
  int precedence(char);
  bool isNum(char);
  void tween();
  void createTree();
    
  

private:
  int expressionLength;
  const char* infixExpression;
  List* stack;
  List* queue;
  Tree* myTree;
  

};

#endif