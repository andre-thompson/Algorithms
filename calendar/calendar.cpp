<<<<<<< HEAD
=======
#include "calendar.h"


void Calendar::addEvent(){
    Event newEvent;
    newEvent.setData();
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



>>>>>>> 3ecb0717bf7c4ca29a435b1416f5404a3c76ce4f
