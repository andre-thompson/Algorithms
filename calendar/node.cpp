#include "node.h"


void Node::setEvent(Event insert){
    currEvent = insert;
}

void Node::setNext(Node* nextNode){
    next = nextNode;
}

void Node::getEvent(){
    currEvent.getName();
    currEvent.getDate();
}

