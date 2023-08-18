
#include "event.h"

class Node {
    public:
        //member calls
        void setEvent(Event insert);
        void setNext(Node* nextNode);
        void getEvent();
        Node* getNext();
    private:
        //next initially set to NULL, currEvent holds nodes data (type event)
        Node* next = NULL;
        Event currEvent;
};
