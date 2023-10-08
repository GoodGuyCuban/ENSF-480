#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape{
    private:
        double side_a;
    public:
        Square(double x, double y, double side_a, const char* shapeName );

        double area() const;
        double perimeter() const;

        double getSideA() const;

        void set_side_a(double side_a);

        void display() const;
};

#endif