#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

class Event {

    public:
        Event(){}
       ~Event(){}
       void setData();
       void parseDate(); 
    private:
        std::string name, date;
        std::vector<std::string> parsedDate;

};