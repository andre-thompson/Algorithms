#include "num.h"


int main(){
    bool test;
    Num newNum;
    newNum.setName();
    newNum.setNum();
    test = newNum.setNum();
    
    if(test == false){
        std::cout << "Error, invalid number\n";
        return 1;
    }
}