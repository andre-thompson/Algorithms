
#include "event.h"

//set name function
void Event::setName(){
    std::cout << "What is the name of this event? ";
    std::cin >> eventName;
    std::cout << "\n";
}

//set date function
void Event::setDate(){
    std::string dateToParse;
    
    std::cout << "When is the event? (day/month/year)";
    std::cin >> dateToParse;
    std::cout << "\n";
    //parses date with delimeter '/'
    while(dateToParse.find('/') != std::string::npos){
        int pos = dateToParse.find('/');
        eventDate.push_back(dateToParse.substr(0, pos));
        dateToParse.erase(0, pos + 1);
    }
    //accounts for back of date
    eventDate.push_back(dateToParse);
    

}

//outputs event name
void Event::getName(){
    std::cout << "Name: " << eventName << "\n";
}

//outputs event date
void Event::getDate(){
    std::cout << "Date: Day/Month/Year\n";
    std::cout << "      " << eventDate.at(0) << "/" << eventDate.at(1) << "/" << eventDate.at(2) << "\n";
    
}