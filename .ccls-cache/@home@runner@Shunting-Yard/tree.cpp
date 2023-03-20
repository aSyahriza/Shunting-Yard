#include "tree.h"
#include <math.h> 
#include <fstream>

using namespace std;

Tree::Tree(){
  numOfNodes = 0;
}

void Tree::createTree(){
  /*for(int i = 0; i < basePE->getLength();i++){
    
  }
  Node* current = basePE->peek();
  while(current!=NULL){
    addValue(basePE->peek()->getValue());
    current = current->getNext();
  }*/
}

Tree::~Tree(){
  delete seed;
}

void Tree::addValue(char value){
  
}


void Tree::printHeap(){
  // Calculates how many "levels" are in the heap
  float levels;
  float log = log2(numOfNodes+1);
  if((fmod(log,1.0))>0){
    levels = 1+log-(fmod(log,1.0));
  }
  else{
    levels = log;
  }
  recurseHeap(0,levels,1);
  
}

void Tree::recurseHeap(int index,int levels,int currentLevel){
  // Recurses into right child node
  if(currentLevel != levels){
    recurseHeap((2*index)+2,levels,currentLevel+1);
  }

  // Prints appropriate number of spaces
  for(int j = 0; j < currentLevel-1; j++){
    cout << "\t";
  }
  // Prints value of array at index
  /*
  if(array[index]!=0){
    cout << array[index];
  } 
  cout << endl;
  */
  // Recurses into left child node
  if(currentLevel != levels){
    recurseHeap((2*index)+1,levels,currentLevel+1);
  }
}

void Tree::reHeap(){
 
}

List* Tree::getStack(){
  return stack;
}

void Tree::setSeed(Node* mySeed){
  seed = mySeed;
}

char* Tree::getArray(){
  return basePE;
}

void Tree::setVal(int i, char value){
  basePE[i] = value;
  numOfNodes = i;
}

int Tree::getLength(){
  return numOfNodes;
}