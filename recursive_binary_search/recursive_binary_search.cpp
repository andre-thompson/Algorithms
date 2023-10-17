#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
int binarySearch(std::vector<int> list, int l, int r, int key){
    if(r >= 1){
        int mid = 1 + (r - l) / 2;
        if(list.at(mid) == key)
            return key;
        if(list.at(mid) > key)
            return binarySearch(list, l, mid - 1, key);
        
        return binarySearch(list, mid + 1, r, key);
    }
    return -1;
}


int main (){
    std::vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int result = binarySearch(list, 0, list.size() - 1, 10);
    std::cout << result << "\n";

}