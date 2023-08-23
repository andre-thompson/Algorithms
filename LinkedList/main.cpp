//Andre Thompson: 23/August/2023
//including linkedlist class defintion
#include "linkedlist.h"

int main(){
    //creating nodes a,b,c,d using new to access member functions '->' instead of '.'
    Node* a = new Node;
    Node* b = new Node;
    Node* c = new Node;
    Node* d = new Node;

    //creating new linked list (head and tail set to nullptr on initialization)
    linkedList newList;

    //int x used in setting node data values
    int x = 5;

    //accessing Node member function 'setData' to assign node data values
    a->setData(x);
    b->setData(x + 5);
    c->setData(x * x);
    d->setData(x * x - x);

    //appending nodes a,b to back of list (tail) using 'appendNode' LinkedList member function
    newList.appendNode(a);
    newList.appendNode(b);

    //pushing node c onto front of list using 'appendNode' LinkedList member function
    newList.push_front(c);

    //deleting node after head (parameter = node before the node you want to delete)
    newList.deleteNode(newList.getHead());

    //inserting node d after head using 'deleteNode' LinkedList member function
    newList.insertAfter(newList.getHead(), d);

    //print LinkedList starting from head
    newList.print(newList.getHead());
}