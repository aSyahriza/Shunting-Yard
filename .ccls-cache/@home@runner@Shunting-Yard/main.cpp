/*

Date: 3/19/23
Author: Allam Syahriza
Project: Shunting Yard Algorithm
* Program takes in an expression from the user, and
* performs the shunting yard algorithm on said expression.
* Expression is printed in postfix notation.
*
*


*/

#include <iostream>
#include <cstring>

using namespace std; 

#include "list.h"
#include "node.h"
#include "tree.h"
#include "shunting.h"

int main() {
  char* expression = new char[50];

  // Recieves mathemtical expression from user
  cout << "Enter an expression:" << endl;
  cin.get(expression,50,'\n');
  cin.clear();
  cin.ignore(99999,'\n');

  // Creates shunting object from expression
  Shunting* myShun = new Shunting(expression);

  // Performs shunting yard algorithm
  myShun->shunt();
  
    
  
}