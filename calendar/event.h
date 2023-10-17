#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

class Event {

    public:
        Event(){}
       ~Event(){}
       void setName(std::string newName);
       void setDate(std::string newDate);
       std::string getName();
       std::string getDate();
       void parseDate(); 
       
    private:
        std::string name, date;
        std::vector<std::string> parsedDate;

};