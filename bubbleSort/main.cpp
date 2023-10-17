#include <iostream>
#include <iomanip>
#include <vector>
#include <string>





void bubbleSort(std::vector<std::string> list, int n){
    int i, j, numComparisons = 0, numMovements = 0;
    std::string temp;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            numComparisons++; //(n(n-1)) / 2
            if(list.at(j) < list.at(i)){
                temp = list.at(i);
                numMovements++;
                list.at(i) = list.at(j);
                numMovements++;
                list.at(j) = temp;
                numMovements++;
            }
        }
    }

    std::cout << "Number of comparisons:" << numComparisons << "\n";
    std::cout << "Number of movements:" << numMovements << "\n";
}




int main(){
    std::vector<std::string> list;
    std::string current;
    for(int i = 0; i < 5; i++){
        std::cin >> current;
        list.push_back(current);
    }
    bubbleSort(list, list.size());
}
