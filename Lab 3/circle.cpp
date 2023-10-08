#include "circle.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

Circle:Circle(double x, double y, char* name, double r) : Shape(x, y, name), Radius(r)
{
}

double Circle::area() const
{
    return 3.14 * Radius * Radius;
}

double Circle::perimeter() const
{
    return 2 * 3.14 * Radius;
}

void Circle::display() const
{
    Shape::display();
    cout << "Radius: " << Radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}