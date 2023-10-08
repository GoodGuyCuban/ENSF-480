/*
* File Name: human.h
* Assignment: Lab 1 Exercise D
* Completed by: Marcos Perez, Cris Canayon
* Submission Date: Sept 18, 2023
*/
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <cstring>
#include "point.h"

class Human {
private:
    char* name;
    Point location;
public:
    Human(const char* name, double x, double y);
    ~Human();
    void set_name(const char* name);
    void set_location(double x, double y);
    char* get_name() const;
    Point get_point() const;
    virtual void display() const;
};

#endif // HUMAN_H
