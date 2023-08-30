#pragma once
class Circle : public Figure {
private:
    Point center;
    double radius;

public:
    Circle(Point center, double radius) : center(center), radius(radius) {}

    double area() override {
        return M_PI * std::pow(radius, 2);
    }
};
