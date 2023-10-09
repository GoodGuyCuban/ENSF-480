#include "shape.h"
#include "point.h"
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

Shape::Shape(double x, double y, const char* shapeName) : origin(x, y){
    this->shapeName = new char[strlen(shapeName) + 1];
    strcpy(this->shapeName, shapeName);
}

Shape::~Shape(){
    delete [] shapeName;
}

Shape::Shape(const Shape& source) : origin(source.origin){
    shapeName = new char[strlen(source.shapeName) + 1];
    strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
    if(this != &rhs){
        delete [] shapeName;
        shapeName = new char[strlen(rhs.shapeName) + 1];
        strcpy(shapeName, rhs.shapeName);
        origin = rhs.origin;
    }
    return *this;
}

const Point& Shape::getOrigin() const{
    return origin;
}

char* Shape::getName() const{
    return shapeName;
}

void Shape::display() const{
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << setprecision(3) << origin.getx() << endl;
    cout << "Y-coordinate: " << setprecision(3) << origin.gety() << endl;
}

double Shape::distance(const Shape& other){
    return origin.distance(other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other){
    return the_shape.origin.distance(other.origin);
}

void Shape::move(double dx, double dy){
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}