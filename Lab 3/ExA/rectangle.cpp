#include "rectangle.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char *shapeName) : Square(x, y, side_a, shapeName), Shape(x, y, shapeName)
{
    this->side_b = side_b;
}


double Rectangle::area() const
{
    return getSideA() * side_b;
}

double Rectangle::perimeter() const
{
    return 2 * (getSideA() + side_b);
}

double Rectangle::get_side_b() const
{
    return side_b;
}

void Rectangle::set_side_b(double side_b)
{
    this->side_b = side_b;
}

void Rectangle::display() const{
    cout << "Rectangle Name: " << getName() << endl;
    cout << "X-coordinate: " << setprecision(3) << getOrigin().getx() << endl;
    cout << "Y-coordinate: " << setprecision(3) << getOrigin().gety() << endl;
    cout << "Side a: " << setprecision(3) << getSideA() << endl;
    cout << "Side b: " << setprecision(3) << side_b << endl;
    cout << "Area: " << setprecision(3) << area() << endl;
    cout << "Perimeter: " << setprecision(3) << perimeter() << endl;
}