#include "calendar.h"


void Calendar::addEvent(){
    Event newEvent;
    newEvent.setData();
    newEvent.parseDate();
    data.push_back(newEvent);
    
}