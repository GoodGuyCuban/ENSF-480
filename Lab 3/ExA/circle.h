#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public virtual Shape
{
private:
    double radius;

public:
    Circle(double x, double y, double r, char *name);

    double area() const;
    double perimeter() const;

    double getRadius() const;

    void display() const;
};

#endif