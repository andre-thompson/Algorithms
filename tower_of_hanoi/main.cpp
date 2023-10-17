#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int evaluate(int n, char from, char to, char temp, int i ){
    if(n == 0){
        i++;
        return i;
    }
    i++;
    evaluate(n - 1, from, temp, to, i++);
    evaluate(n - 1, temp, to, from, i++);
}

int main(){
    int i = evaluate(4, 'A', 'C', 'B', 0);
    std::cout << i  << "\n";
}