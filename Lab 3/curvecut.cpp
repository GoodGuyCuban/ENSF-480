#include "curvecut.h"
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

CurveCut::CurveCut(double x, double y, char* name, double r, double a, double b) : Circle(x, y, name, r), Rectangle(x, y, a, b, name)
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
    return Rectangle::perimeter() + Circle::perimeter() - 2 * 3.14 * getRadius();
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