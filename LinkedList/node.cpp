//including node class definition
#include "node.h"

//member function to link current node to next node (parameter is next node)
void Node::setNext(Node* newNode){
    //next can be accessed from private (Node::setNext), set next node = parameter node
    next = newNode;
}

//member function to set current nodes data (parameter is num being stored in node)
void Node::setData(int x){
    //data can be accessed from private (Node::setData), set data = x
    data = x;
}


