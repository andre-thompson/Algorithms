
#include "node.h"

int main(){
    Event date;
    Node* one;
    Node* two;
    Node* head;
    
    date.setName();
    date.setDate();
    
    
    one = new Node();
    two = new Node();

    one->setEvent(date);
    one->setNext(two);
    two->setEvent(date);
    two->setNext(NULL);
    one->getEvent();
    two->getEvent();
}