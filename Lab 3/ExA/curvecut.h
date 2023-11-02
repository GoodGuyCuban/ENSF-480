#ifndef CURVECUT_H
#define CURVECUT_H

#include "circle.h"
#include "rectangle.h"

class CurveCut : public Rectangle, public Circle
{
public:
    CurveCut(double x, double y, double a, double b, double r, char *name);

    double area() const;
    double perimeter() const;

    char *getName() const;

    void display() const;
};

#endif