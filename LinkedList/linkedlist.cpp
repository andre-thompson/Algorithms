//including linkedlist class definition
#include "linkedlist.h"

//print member function that starts at pointer to head (function parameter)
void linkedList::print(Node* tempHead){
    //checks if list has ended / current node points to nullptr
    if(tempHead == nullptr){
        std::cout << "List end: nullptr\n";
    } else {
        //output current nodes data, ending in new line
        std::cout << tempHead->getData() << "\n";
        //recursive call to print function, iterates to next node in list
        print(tempHead->getNext());
    }
    
    
}

//member function to append node to end of list, (function parameter is node being appended)
void linkedList::appendNode(Node* newNode){
   //if head does not exist, point head and tail to new node
   if(head == nullptr){
        head = newNode;
        tail = newNode;
   } else {
        //linking tail to new node
        tail->setNext(newNode);
        //updating tail's positiion to end of list
        tail = tail->getNext();
   }
    

}

//member function to add new node to front of list (fuction parameter is new node to be pushed to front)
void linkedList::push_front(Node* newNode){
   //creating temp pointer node that points to new node being pushed to front
    Node* temp = newNode;
    //linking new node to head
    temp->setNext(head);
    //updating head's position to new node
    head = temp;
}

//member function to delete node (function parameter is the node before the node being deleted)
void linkedList::deleteNode(Node* beforeNode){
    //creating node to hold position of the node being deleted
    Node* toDelete = beforeNode->getNext();
    //linking before node to next node in list after node being deleted
    beforeNode->setNext(toDelete->getNext());
    //deleting node
    delete toDelete;
}

//member function to insert node (function parameter is node before new node, and the new node itself)
void linkedList::insertAfter(Node* beforeNode, Node* newNode){
   //linking new node to next node in list
   newNode->setNext(beforeNode->getNext());
   //linking beforeNode to newNode
   beforeNode->setNext(newNode);
}



