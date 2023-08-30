#pragma once
#include "Point.cpp"
#include<cmath>
class Figure {
private:
    std::string color;
public:
    virtual double area() = 0;

    static double sideLength(Point a, Point b) {
        return std::sqrt(std::pow((a.getX() - b.getX()), 2) + std::pow((a.getY() - b.getY()), 2));
    }
    std::string getColor() {
        return color;
    }
    void setColor(std::string color) {
        this->color=color;
    }
};
