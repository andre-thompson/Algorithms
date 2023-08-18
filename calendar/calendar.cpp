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

void Calendar::print(){
    //temp iterator that starts at head
    Node* temp = head;

    if(temp == NULL){
        std::cout << "List is empty\n";
        return;
    }

    //iterates through list
    while(temp != NULL){
        temp->getEvent();
        temp = temp->getNext();
    }

}