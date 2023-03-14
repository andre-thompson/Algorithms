#include <iostream>
#include <iomanip>
#include <string>


/*Euclids Algorithm: integer division and greatest common denominator 
Two points a, b
Quotient Calculated a / b = q
Remainder Calculated a % b = r
if r = 0: gcd = b
if r != 0: a = b, b = r
continue iteration until r = 0
*/




int main(){
    int a, b, q, r = 1, gcd;
    
    std::cout << "Please enter two integers:\n" << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << std::setfill('=') << std::setw(80) << "" << std::endl;
    std::cout << "a\t\tq\t\tb\t\tr\n";

    while(r != 0){
        q = a / b;
        r = a % b;
        std::cout << a << "\t\t" << q << "\t\t" << b << "\t\t" << r << std::endl;
        a = b;
        gcd = b;
        b = r;
    }
    
    std::cout << std::setfill('=') << std::setw(80) << "" << std::endl;
    std::cout << "Greatest common denominator: " << gcd << std::endl;

     return 0;
}