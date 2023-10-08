#include "point.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


Point::Point(double x, double y) : x(x), y(y){
    // first id should be 1001, subsequent id should be 1002, 1003, etc.
    id = 1000 + counter() + 1;
}

int Point::counter(){
    return id - 1000;
}

int Point::distance(const Point& p1, const Point& p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int Point::distance(const Point& p2){
    return sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));
}

double Point::getx() const{
    return x;
}

double Point::gety() const{
    return y;
}

int Point::getId() const{
    return id;
}

void Point::setx(double x){
    this->x = x;
}

void Point::sety(double y){
    this->y = y;
}

void Point::display() const{
    cout << "X-coordinate: " << setprecision(3) << x << endl;
    cout << "Y-coordinate: " << setprecision(3) << y << endl;
}