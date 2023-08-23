//only need to include files once as other .cpp files include node.h file
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

//creating node class that holds an integer value
class Node {
    public:
        //member function to set data definition
        void setData(int newData);

        //member function to link current node to next node
        void setNext(Node* newNode);

        //member function to return integer being held in node
        int getData(){return data;}

        //member function to return node pointer to next node in list
        Node* getNext(){return next;}

    private:
        //creating int to hold data in node, and pointer to next node in list
        int data;
        Node* next = nullptr;
};