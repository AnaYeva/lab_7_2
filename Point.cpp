#pragma once
class Point {
private:
    double x;
    double y;

public:
    Point(double x,double y) {
        this->x = x;
        this->y = y;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }
};
