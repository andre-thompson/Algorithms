#include "calendar.h"

void Calendar::addNode(){
    //generating new event
    Event newEvent;
    newEvent.setName();
    newEvent.setDate();
    
    //creating node on stack and storing newEvent data within it
    Node* newNode = new Node;
    newNode->setEvent(newEvent);
    
    //if head doesnt exist, head = newNode
    if(head == NULL){
      
        head = newNode;
        return;
    }
    
    //temp node used for traversing list
    Node* temp = head;

    while(temp->getNext() != NULL){
        temp = temp->getNext();
    }

    //appending to end
    temp->setNext(newNode);

}

Node* Calendar::returnNode(int pos){
    Node* temp = head;
    
    int i;
    if(temp == NULL){
        std::cout << "Calendar is empty\n";
        return NULL;
    }
    //iterate until node at pos is found, return node
   for(i = 0; i < pos; i++){
    temp = temp->getNext();
   }
  
 
   return temp;
}


void Calendar::print(){
    //temp iterator that starts at head
    Node* temp = head;

    if(temp == NULL){
        std::cout << "Calendar is empty\n";
        return;
    }

    //iterates through list
    while(temp != NULL){
        temp->getEvent();
        temp = temp->getNext();
    }

}