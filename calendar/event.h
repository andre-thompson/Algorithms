#include <iostream>
<<<<<<< HEAD
=======
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
>>>>>>> 3ecb0717bf7c4ca29a435b1416f5404a3c76ce4f

template<class ItemType>
class Event {

    public:
<<<<<<< HEAD
    
    
    private:
    
=======
        Event(){}
       ~Event(){}
       void setData();
       std::string getName();
       std::string getDate();
       void parseDate(); 
       
    private:
        std::string name, date;
        std::vector<std::string> parsedDate;
>>>>>>> 3ecb0717bf7c4ca29a435b1416f5404a3c76ce4f


};




#include "event.cpp"