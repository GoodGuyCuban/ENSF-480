/*
* File Name: human_program_improved.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Marcos Perez, Cris Canayon
* Submission Date: Sept 18, 2023
*/
#include <cstring>
#include <iostream>
#include <human.h>
#include <point.h>

using namespace std;

Point::Point(double a =0, double b =0): x(a), y(b) {}
double Point::get_x()const {return x;}
double Point::get_y()const {return y;}
void Point::set_x(double a) { x = a;}
void Point::set_y(double a) { y = a;}

Human::Human(const char* nam, double x, double y): name(new char[strlen(nam)+1]) {
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}

Human::~Human() {delete [] name;}

void Human::set_name(const char* name) {      
    delete [] this->name;            
    this->name = new char[strlen(name)+1];        
    strcpy(this ->name, name);
}

Point Human::get_point() const {return location;}

void Human::display() const {                      
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << " ,"
    << location.get_y() << ".\n" << endl;
}

int main(int argc, char **argv)
{
	double x = 2000, y = 3000;
	Human h("Ken Lai", x , y); 
    h.display();
	return 0;
}

