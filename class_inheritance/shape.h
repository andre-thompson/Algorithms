#include <iostream>
#include <iomanip>
#include <string>

class Shape {
    public:
        void setW(double width);
        void setH(double height);
        double getW(){return w;}
        double getH() {return h;}
    private:
        double h, w;
};