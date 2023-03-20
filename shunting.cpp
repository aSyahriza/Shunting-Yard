#include "shunting.h"
#include "tree.h"

Shunting::Shunting(){

  
}

Shunting::Shunting(const char* infixP){
  infixExpression = infixP;
}

Shunting::~Shunting(){
  delete infixExpression;
  delete stack;
  delete queue;
}

// Gets precedence value based on which operator is given
int Shunting::precedence(char value){
  if(value == '+' || value == '-'){
    return 1;
  }
  if(value == '*' || value == '/'){
    return 2;
  }
  if(value == '^'){
    return 3;
  }
  else{
    return 0;
  }
}

// Checks if character is a number (or letter for variables)
bool Shunting::isNum(char value){
  if((value>47 && value < 58)||((value>64&&value<91)||(value>96&&value<123))){
    return true;
  }
  else{
    return false;
  }


}

void Shunting::shunt(){

  bool hasLeftP = false;
  stack = new List();
  queue = new List();

  // Goes through every character in expression
  for (char c = *infixExpression; c; c=*++infixExpression){
    
    // Checks if character is number or letter. Adds to output queue if it is
    if(isNum(c)){
      queue->enqueue(c);
    }
    // If character is operator
    else{
      // If left parenthesis, pushes to stack
      if(c == '('){
        stack->push(c);
        hasLeftP = true;
        continue;
      }
        // If right parenthesis, pushes every operator after left parenthesis to the output queue
      else if(c==')'){
        while(30==30){
          if(stack->peek()->getValue()=='('){
            break;
          }
          else{
            
            queue->enqueue(stack->peek()->getValue());
            stack->pop();
          }
        }
        stack->pop();
        hasLeftP = false;
        continue;
      }
      // If operator is between parenthesis, pushes to stack
      else if(hasLeftP){

        stack->push(c);
        continue;
      }
      // Go through the entire stack
      List* temp = new List();
      while(stack->isEmpty()==false){
        // If the precedence of one of the operators is greater than or equal to the precedence of the current character
        
        if((precedence(stack->peek()->getValue()))>=precedence(c)){
          // Adds value of character with bigger precedence to queue

          queue->enqueue(stack->peek()->getValue());
        }
        else{
          temp->push(stack->peek()->getValue());
        }
       // Popping in order to traverse through the stack
        stack->pop();
        
        
      }
      // Updates stack
      stack = temp;
      // Adds operator to stack 
      stack->push(c);
    }
  }
  cout << "Postfix notation: ";
  // Goes through stack, adds all operators to queue
  while(stack->isEmpty()==false){
    queue->enqueue(stack->peek()->getValue());
    stack->pop();
  }
  // Goes through queue, prints all characters
  while(queue->isEmpty()==false){
    cout << queue->peek()->getValue();
    queue->dequeue();
  }
}

/*void Shunting::createTree(){
  
  for(int i = 0; i < myTree->getLength();i++){
    if(isNum(myTree->getArray()[i])){
      myTree->getStack()->push(queue->peek()->getValue());
    }
    else{
      Node* right = queue->peek();
      queue->pop();
      Node* left = queue->peek();
      queue->pop();
      Node* newNode = new Node();
      newNode->setLeft(left);
      newNode->setRight(right);
      myTree->getStack()->pushh(newNode);
    }
  }
  myTree->setSeed(myTree->getStack()->peek());
}

void Shunting::tween(){
  for (char c = *infixExpression; c; c=*++infixExpression) {
    cout << "Da " << c << " ski: " << c << endl;
  }
}



*/



/*class Shunting{
public:
  Shunting(); 
  Shunting(char*);
  ~Shunting();
  char* Shunt();

    
  

private:
  char* infixExpression;
  List* stack;
  List* queue;

};*/