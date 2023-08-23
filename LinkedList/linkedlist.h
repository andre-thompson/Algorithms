//include node class definition
#include "node.h"

class linkedList {
    public:
        //constructor that executes when a new linked list is created, sets head/tail to nullptr
        linkedList(){head = nullptr; tail = nullptr;}

        //print member function definition
        void print(Node* tempHead);

        //getHead member function to return a Node pointer to list's head
        Node* getHead(){return head;}

        //append node member function definition
        void appendNode(Node* newNode);

        //push_front member function definition
        void push_front(Node* newNode);

        //delete node member function definition
        void deleteNode(Node* beforeNode);
        
        //insert after member function definition
        void insertAfter(Node* beforeNode, Node* newNode);
    private:
    //creating head and tail nodes
    Node* head = new Node;
    Node* tail = new Node;
};