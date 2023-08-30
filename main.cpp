#include <iostream>
#include "Figure.cpp"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "Quadrilateral.cpp"

int main() {
    Point a{1,1};
    Circle  cir{a,5};
    Triangle tri{a, {0,0},{0,1}};
    Quadrilateral quad{a, {-1, 1}, {-1, 0}, {1, 0}};
    std::cout << a.getX() <<" "<<a.getY()<< std::endl;

    std::cout << cir.area()<< std::endl;
    std::cout << tri.area()<< std::endl;
    std::cout << quad.area()<< std::endl;
    return 0;
}
