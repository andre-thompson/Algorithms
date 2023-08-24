#include  "triangle.h"

int main(){
    Triangle newTriangle;
    newTriangle.setH(11);
    newTriangle.setW(2);
    std::cout << "Triangle with base " << newTriangle.getW() << " and height " << newTriangle.getH() << " has area (b*h) / 2 : " << newTriangle.getArea() << "\n";
}