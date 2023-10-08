#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double x, double y, char* name, double r);

        double area() const;
        double perimeter() const;

        double getRadius() const;

        void display() const;

};

#endif