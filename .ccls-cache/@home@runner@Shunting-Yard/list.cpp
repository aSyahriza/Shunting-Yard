#include "list.h";



List::List(){
  head = NULL;
  tail = NULL;
  listLength = 0;
}

List::~List(){
  delete head;
  delete tail;
}

// Stack functions
// Head is the top of the stack
// Tail not necessary
void List::push(char newChar){
  Node* newNode = new Node(newChar);
  if(isEmpty()){
    head = newNode;
    tail = newNode;
  }
  else{
    newNode->setNext(head);
    head = newNode;
  }  
  listLength++;
}

void List::pushh(Node* newNode){
   if(isEmpty()){
    head = newNode;
    tail = newNode;
  }
  else{
    newNode->setNext(head);
    head = newNode;
  }  
  listLength++;
}

void List::pop(){
  Node* temp = head;
  head = head->getNext();
  delete temp;
  listLength--;
}


// Queue functions
// Head is the front of the queue (the first to leave)
void List::enqueue(char newChar){
  Node* newNode = new Node(newChar);
  if(isEmpty()){
    head = newNode;
    tail = newNode;
  }
  else {
    tail->setNext(newNode);
    tail = newNode;
  }
  listLength++;
  
}

void List::dequeue(){
  Node* temp = head;
  head=head->getNext();
  delete temp;
  listLength--;
}



Node* List::getRear(){
  // I.e. What was just added
  return tail;
}

Node* List::peek(){
  if(isEmpty()){
    return NULL;
  }
  else{
    return head; 
  }
}

int List::getLength(){
  return listLength;
}

void List::printList(){
  
}

bool List::isEmpty(){
  if(listLength<1)
    return true;
  return false;

  /*
  if(head==NULL&&tail==NULL){
    return true;
  }
  return false;
*/
}



/*
class List{
  public:
  List();  
  ~List();

  void push(char newChar);
  void pop();
  Node* peek();

  void enqueue(char newChar);
  void dequeue();
  Node* getFront();
  Node* getRear();
  
  void deleteStudent(int pId);
  void printList();
  void reHash(int nodeCounter);
  int hashFunction1(int pId,int length);

  
  private:
    int length;
    Node* head;
    Node* tail;
};

*/