#include "calendar.h"

void add_eventScreen(Calendar newCalendar){
    std::string name = "", date = "";
    std::cout << "Add new events: Enter stop to exit\n";

    while(name != "stop" && date != "stop"){
        
        std::cout << "Enter event name: ";
        std::cin >> name;
        std::cout << "Enter event date: ";
        std::cin >> date;
        newCalendar.addEvent(name, date);
    }
}





int main (){
  Calendar newCalendar;
  
  add_eventScreen(newCalendar);


  newCalendar.storeCalendar();
  

}