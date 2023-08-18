
#include "event.h"

void Event::setName(){
    std::cout << "What is the name of this event? ";
    std::cin >> eventName;
    std::cout << "\n";
}

void Event::setDate(){
    std::string dateToParse;
    
    std::cout << "When is the event? (day/month/year)";
    std::cin >> dateToParse;
    std::cout << "\n";

    while(dateToParse.find('/') != std::string::npos){
        int pos = dateToParse.find('/');
        eventDate.push_back(dateToParse.substr(0, pos));
        dateToParse.erase(0, pos + 1);
    }

    eventDate.push_back(dateToParse);
    

}

void Event::getName(){
    std::cout << "Name: " << eventName << "\n";
}

void Event::getDate(){
    std::cout << "Date: Day/Month/Year\n";
    std::cout << "      " << eventDate.at(0) << "/" << eventDate.at(1) << "/" << eventDate.at(2) << "\n";
    
}