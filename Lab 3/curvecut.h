#ifndef CURVECUT_H
#define CURVECUT_H

#include "circle.h"
#include "rectangle.h"

class CurveCut : public Circle, public Rectangle
{
    public:
        CurveCut(double x, double y, char* name, double r, double a, double b);

        double area() const;
        double perimeter() const;

        void display() const;
};

#endif