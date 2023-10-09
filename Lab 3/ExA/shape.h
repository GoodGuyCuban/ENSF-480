#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
    private:
        Point origin;
        char* shapeName;
    public:
        Shape(double x, double y, const char* shapeName);

        ~Shape();
        Shape(const Shape& source);
        Shape& operator=(const Shape& rhs);

        const Point& getOrigin() const;
        char* getName() const;
        void display() const;
        virtual double area() const = 0;
        virtual double perimeter() const = 0;

        double distance(const Shape& other);
        static double distance(Shape& the_shape, Shape& other);

        void move(double dx, double dy);
};

#endif