#include "event.h"

 class Calendar{
    public:
        Calendar(){}
        ~Calendar(){}
        void addEvent(std::string newName, std::string newDate);
        void sortEvents();
        void storeCalendar();
    private:
        std::vector<Event> data;
        std::vector<Event> sortedData;
 };