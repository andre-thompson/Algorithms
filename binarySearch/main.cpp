#include <iostream>
#include <iomanip>

int binarySearch(char list[], int size, char key){
    int high, low, mid;
    low = 0;
    high = size - 1;

    //halfs array until there is no mid point
    while(high >= low){
        //mid == middle element
        mid = (high + low) / 2;
        //if key is less than middle element, start next iteration at middle of first half
        if(list[mid] < key){
            low = mid + 1;
        //if key is greater than middle element, start next iteration at middle of second half
        } else if (list[mid] > key){
            high = mid - 1;
        //if key is equal to middle element return element number of the key in array
        } else {
            return mid;
        }
    }
    //if two elements left and neither are the key return -1 (key not found)
    return -1;
}


int main(){
    //sorted list
    char list[] = {'a', 'b', 'c'}, key;
    int size = 3;
    int element = 0;
    for(int i = 0; i < 3; i++){
        std::cout << list[i] << "\n";
    }
    std::cout << "Please enter search key: ";
    std::cin >> key;
    element = binarySearch(list, size, key);
    if(element == -1){
        std::cout << "Key not found\n";
        return 0;
    } else {
        std::cout << "Key found at element: " << element << "\n";
    }
}