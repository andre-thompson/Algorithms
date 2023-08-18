
#include "event.h"

class Node {
    public:
        void setEvent(Event insert);
        void setNext(Node* nextNode);
        void getEvent();
        void insert();
    private:
        Node* next = NULL;
        Event currEvent;
};
