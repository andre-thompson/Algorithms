#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class newEvent {
    public:
        void setName();
        void setDate();
        void getName();
        void getDate();
        
        private:
        std::string eventName;
        std::vector<std::string> eventDate; //[day, month, year]

};