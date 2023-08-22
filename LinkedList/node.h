#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class Node {
    public:
        void setData();
        int getData();
       Node* getNext(){return next;}
       void setNext(Node* nextNode);
    private:
        Node* next = NULL;
        int data;
};