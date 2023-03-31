#include <iomanip>
#include <iostream>

void insertionSort(std::string list[], int size){
    int i, j;
    std::string temp;
    
    //loop iterates size-1 times
    for(i = 1; i < size; i++){
        //comparison starts at second element (i = 1)
        j = i;
        //checks if current element j is smaller/less than previous element j-1
        //if true it keeps comparing until the beginning (j-1) until current element is not bigger than previous
        while(j > 0 && list[j] < list[j-1]){
            //swap current with previous
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            //iterate j
            j--;
        }
    }
    //print
    for(int i = 0; i < size; i++){
        std::cout << list[i] << "\n";
    }
}

int main(){
    std::string list [] = {"zhj", "qjk", "lol", "ao", "why"};
    int size = 5;

    insertionSort(list, size);


}