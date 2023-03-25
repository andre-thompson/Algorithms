#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

void fillVector(std::vector<std::string>& toFill, std::string line){




}






int main(){
    //in and out files
    std::ifstream file;
    std::ofstream out;
    
    std::string fileName;
    std::vector<std::string> list;
    int x, key, index;
    
    std::cout << "Input file name (file.txt): ";
    std::cin >> fileName;

    file.open(fileName);
    out.open("output.txt");


    if(!file.is_open()){
        std::cout << "Error: Input file failed to open";
        return 1;
    } else if (!out.is_open()){
        std::cout << "Error: Failed to create output file";
        return 1;
    }

    
    while(!file.eof()){
        std::string currentLine;
        file >> currentLine;
        fillVector(list, currentLine);

    }
    
   

}

