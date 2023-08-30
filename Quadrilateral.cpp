#pragma once
class Quadrilateral : public Figure {
private:
    Point point1, point2, point3, point4;

public:
    Quadrilateral(Point point1, Point point2, Point point3, Point point4) : point1(point1), point2(point2),
                                                                            point3(point3), point4(point4) {}

    double area() override {
        Triangle triangle1(point1, point2, point3);
        Triangle triangle2(point3, point4, point1);
        return triangle1.area() + triangle2.area();
    }
};
