#include "node.h"

class Calendar{
    public:
        //member calls
        void addNode();
        void print();
        Node* returnNode(int);
    private:
        //head starts as null, allows head to be set during addNode
        Node* head = NULL;
        

};