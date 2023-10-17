#include "calendar.h"


void Calendar::addEvent(std::string newName, std::string newDate){
    Event newEvent;
    newEvent.setDate(newDate);
    newEvent.setName(newName);
    data.push_back(newEvent);

}

void Calendar::storeCalendar(){
    std::ofstream out;
    out.open("calender.txt");
    for(int i = 0; i < data.size(); i++){
        out << data.at(i).getName() << ", " << data.at(i).getDate() << "\n";
    }

    out.close();

}



