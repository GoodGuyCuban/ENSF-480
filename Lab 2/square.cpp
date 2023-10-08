#include "square.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

Square::Square(double x, double y, double side_a, const char *shapeName ) : Shape(x , y, shapeName), side_a(side_a)
{
}

double Square::area() const
{
    return side_a * side_a;
}

double Square::perimeter() const
{
    return 4 * side_a;
}

double Square::getSideA() const
{
    return side_a;
}

void Square::set_side_a(double side_a)
{
    this->side_a = side_a;
}

void Square::display() const{
    cout << "Square Name: " << getName() << endl;
    cout << "X-coordinate: " << setprecision(3) << getOrigin().getx() << endl;
    cout << "Y-coordinate: " << setprecision(3) << getOrigin().gety() << endl;
    cout << "Side a: " << setprecision(3) << side_a << endl;
    cout << "Area: " << setprecision(3) << area() << endl;
    cout << "Perimeter: " << setprecision(3) << perimeter() << endl;
}