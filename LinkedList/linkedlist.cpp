#include "linkedlist.h"


void linkedList::print(){
    Node* temp = new Node;
    temp = head;
    if(temp == nullptr){
        std::cout << "List is empty\n";
    }

    while(temp != nullptr){
        std::cout << temp->getData() << "\n";
        temp = temp->getNext();
    }
    
    
}

void linkedList::appendNode(Node* newNode){
    Node* temp = head;
    if(temp == nullptr){
        head = newNode;
        return;
    }
    while(temp->getNext() != nullptr){
        temp = temp->getNext();
    }
    temp->setNext(newNode);
}