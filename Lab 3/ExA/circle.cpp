#include "circle.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

Circle::Circle(double x, double y, double r, char *name) : Shape(x, y, name), radius(r)
{
}

double Circle::area() const
{
    return 3.14 * radius * radius;
}

double Circle::perimeter() const
{
    return 2 * 3.14 * radius;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::display() const
{
    Shape::display();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}