#pragma once

class Triangle : public Figure {
private:
    Point point1, point2, point3;

public:
    Triangle(Point point1, Point point2, Point point3) : point1(point1), point2(point2), point3(point3) {}

    double area() override {
        double s = (Figure::sideLength(point1, point2) + Figure::sideLength(point2, point3) + Figure::sideLength(point3, point1)) / 2;
        return std::sqrt(s * (s - Figure::sideLength(point1, point2)) * (s - Figure::sideLength(point2, point3)) * (s - Figure::sideLength(point3, point1)));
    }
};
