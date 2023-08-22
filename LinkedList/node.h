#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

class Node {
    public:
        void setData(int newData);
        void setNext(Node* newNode);
        int getData(){return data;}
        Node* getNext(){return next;}
    private:
        int data;
        Node* next = nullptr;
};