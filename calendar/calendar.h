#include "node.h"

class Calendar{
    public:
        //member calls
        void addNode();
        void insertNode(int);
        void print();
    private:
        //head starts as null, allows head to be set during addNode
        Node* head = NULL;
        

};