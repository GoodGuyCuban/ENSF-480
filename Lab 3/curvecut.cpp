#include "curvecut.h"
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

CurveCut : CurveCut(double x, double y, char* name, double r, double a, double b) : Circle(x, y, name, r), Rectangle(x, y, name, a, b)
{
    if(a < r || b < r)
    {
        cout << "Invalid side(s) for CurveCut. Exiting!" << endl;
        exit(1);
    }
}

double CurveCut::area() const
{
    return Rectangle::area() - Circle::area();
}

double CurveCut::perimeter() const
{
    return Rectangle::perimeter() + Circle::perimeter() - 2 * 3.14 * Radius;
}

void CurveCut::display() const
{
    Shape::display();
    cout << "Width: " << Rectangle::get_side_a() << endl;
    cout << "Length: " << Rectangle::get_side_b() << endl;
    cout << "Radius of the cut: " << Radius << endl;
}