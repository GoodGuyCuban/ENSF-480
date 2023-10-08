#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "square.h"

class Rectangle : public Square{
    private:
        double side_b;
    public:
        Rectangle(double x, double y, double side_a, double side_b, const char *shapeName);

        double area() const;
        double perimeter() const;

        void set_side_b(double side_b);

        void display() const;
};

#endif