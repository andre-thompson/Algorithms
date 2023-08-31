#include "event.h"

 class Calendar{
    public:
        Calendar(){}
        ~Calendar(){}
        void addEvent();
        void sortEvents();
        
    private:
        std::vector<Event> data;
        std::vector<Event> sortedData;
 };