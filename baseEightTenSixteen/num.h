#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>


class Num {
    public:
    
        void setName();
        void setName(std::vector<std::string> names);
        bool setNum();

    private:
        
        std::string num, changeBase, originalBase;
        int test;
        
};