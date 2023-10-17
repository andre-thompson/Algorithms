#include <iostream>
#include <iomanip>

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}




int main(){
    int n = 12;
    std::cout << "The " << n << "th fibonacci number is: " << fibonacci(n);
}