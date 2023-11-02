/**
 * Project ExC
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

#include "Movable.h"
#include "Resizeable.h"


class Vehicle: public Movable, public Resizeable {
public: 
    
/**
 * @param name
 */
void Vehicle(string name);
    
void move();
protected: 
    string name;
};

#endif //_VEHICLE_H