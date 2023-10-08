/*
* File Name: point.h
* Assignment: Lab 1 Exercise D
* Completed by: Marcos Perez, Cris Canayon
* Submission Date: Sept 18, 2023
*/
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;
public:
    Point(double x, double y);
    void set_x(double x);
    void set_y(double y);
    double get_x() const;
    double get_y() const;
};

#endif // POINT_H
