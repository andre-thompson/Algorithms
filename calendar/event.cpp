<<<<<<< HEAD
=======
#include "event.h"

void Event::setData(){
    std::cout << "Enter event name: ";
    std::cin >> name;
    std::cout << "Enter event date (day/month/year): ";
    std::cin >> date;

}

void Event::parseDate(){
    int pos = 0;
    while(date.find('/') != std::string::npos){
        pos = date.find('/');
        parsedDate.push_back(date.substr(0, pos));
        date.erase(0, pos + 1);
    }
    parsedDate.push_back(date);
}

std::string Event::getName(){
    return name;
}

std::string Event::getDate(){
    return date;
}


>>>>>>> 3ecb0717bf7c4ca29a435b1416f5404a3c76ce4f
