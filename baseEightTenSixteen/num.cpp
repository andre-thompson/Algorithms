#include "num.h"


void Num::setName(){
    
    std::vector<std::string> bases {"Base Ten", "Base Eight", "Base Sixteen"};
    std::vector<std::string> names;
    int selection1, selection2;
    
    std::cout << "Enter current base as integer (0: Base Ten 1: Base Eight 2: Base Sixteen) ";
    std::cin >> selection1;
    std::cout << "\n";
    
    if(selection1 > 2){
        std::cout << "Error: unknown selection number\n";
        return;
    }
    names.push_back(bases[selection1]);
    std::cout << "Enter base to transform into(";
    for(int i = 0; i < 3; i++){
        if(i != selection1){
            std::cout << i << ": " << bases[i] << " ";
        }
    }
   
    std::cout << "): ";
    std::cin >> selection2;
    names.push_back(bases[selection2]);

    setName(names);
   }

void Num::setName(std::vector<std::string> names){
    originalBase = names.at(0);
    changeBase = names.at(1);
   }

bool Num::setNum(){
    std::cout << "Enter number to be transformed: ";
    std::cin >> num;
}