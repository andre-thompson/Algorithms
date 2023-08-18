#include "node.h"

//sets data
void Node::setEvent(Event insert){
    currEvent = insert;
}

//sets pointer to next node
void Node::setNext(Node* nextNode){
    next = nextNode;
}

//gets data
void Node::getEvent(){
    currEvent.getName();
    currEvent.getDate();
}

//gets pointer to next node
Node* Node::getNext(){
    return next;
}