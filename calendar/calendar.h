<<<<<<< HEAD
=======
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
>>>>>>> 3ecb0717bf7c4ca29a435b1416f5404a3c76ce4f
