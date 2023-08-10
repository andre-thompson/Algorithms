#include <iomanip>
#include <cmath>
#include <iostream>
#include <vector>

int main(){
    std::vector<int>list;
    int median = 0;
    double mean = 0;

    for(int i = 0; i < 7; i++){
        list.push_back(15);
    }
    
    for(int i = 0; i < 7; i++){
        list.push_back(20);
    }
    
    for(int i = 0; i < 15; i++){
        list.push_back(25);
    }
    
    for(int i = 0; i < 18; i++){
        list.push_back(30);
    }

    for(int i = 0; i < 21; i++){
        list.push_back(35);
    }

    for(int i = 0; i < 19; i++){
        list.push_back(40);
    }

    for(int i = 0; i < 10; i++){
        list.push_back(45);
    }

    for(int i = 0; i < 3; i++){
        list.push_back(50);
    }

    //mean
    for(int i = 0; i < list.size(); i++){
        mean = mean + list.at(i);
    }
    mean = mean / list.size();

    //median
    int mid = list.size()/2;
    median = list.at(mid);

    std::cout << "Mean = " << mean << " Median = " << median << "\n";
}