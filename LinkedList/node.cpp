#include "node.h"


void Node::setData(){
    std::cout << "Enter node data: ";
    std::cin >> data;
    std::cout << "\n";
}

int Node::getData(){
    return data;
}

void Node::setNext(Node* nextNode){

    next = nextNode;
}
