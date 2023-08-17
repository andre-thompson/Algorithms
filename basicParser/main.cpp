#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

void parse(std::string toParse, std::string delimeter, std::vector<std::string> parsed){
   int pos = 0;
   while(toParse.find(delimeter) != std::string::npos){
        pos = toParse.find(delimeter);
        parsed.push_back(toParse.substr(0, pos));
        toParse.erase(0, pos + delimeter.length());
   }
   //insert remainder after delimeter
   parsed.push_back(toParse); 

}



int main() {
    std::string delimeter = "/";
    std::string toParse;
    std::vector<std::string> parsed;

    std::cout << "Enter string to parse (string/string/string) ";
    std::cin >> toParse;

    parse(toParse, delimeter, parsed);


}