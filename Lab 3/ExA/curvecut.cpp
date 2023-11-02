#include "curvecut.h"
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

CurveCut::CurveCut(double x, double y, double a, double b, double r, char *name) : Rectangle(x, y, a, b, name), Circle(x, y, r, name), Square(x, y, a, name), Shape(x, y, name)
{
    if (a < r || b < r)
    {
        cout << "\nInvalid side(s) for CurveCut. Exiting!" << endl;
        exit(1);
    }
}

double CurveCut::area() const
{
    return Rectangle::area() - (Circle::area() / 4);
}

double CurveCut::perimeter() const
{
    return Rectangle::perimeter() + Circle::perimeter() - 2 * 3.14 * getRadius();
}

char *CurveCut::getName() const
{
    return Rectangle::getName();
}

void CurveCut::display() const
{
    cout << "CurveCut Name: " << Rectangle::getName() << endl;
    cout << "X-coordinate: " << setprecision(3) << Rectangle::getOrigin().getx() << endl;
    cout << "Y-coordinate: " << setprecision(3) << Rectangle::getOrigin().gety() << endl;
    cout << "Width: " << Rectangle::getSideA() << endl;
    cout << "Length: " << Rectangle::get_side_b() << endl;
    cout << "Radius of the cut: " << getRadius() << endl;
}