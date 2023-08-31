#include "event.h"

 class Calendar{
    public:
        Calendar(){}
        ~Calendar(){}
        void addEvent();
        void sortEvents();
        void storeCalendar();
    private:
        std::vector<Event> data;
        std::vector<Event> sortedData;
 };