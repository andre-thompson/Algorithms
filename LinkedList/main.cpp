#include "linkedlist.h"

int main(){
    Node* a = new Node;
    Node* b = new Node;
    linkedList newList;
    int x = 5;
    a->setData(x);
    b->setData(x + 5);
    newList.appendNode(a);
    newList.appendNode(b);
    newList.print();
}