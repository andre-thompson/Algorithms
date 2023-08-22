#include "node.h"

class linkedList {
    public:
        linkedList(){head = nullptr;}
        void print();
        void appendNode(Node* newNode);
    private:
    Node* head = new Node;

};