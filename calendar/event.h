#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class Event {
    public:
        //member calls
        void setName();
        void setDate();
        void getName();
        void getDate();
    
        private:
        //name and date of calendar event
        std::string eventName;
        std::vector<std::string> eventDate; //[day, month, year]

};