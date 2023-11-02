/**
 * Project ExC
 */


#ifndef _CAR_H
#define _CAR_H

#include "Vehicle.h"


class Car final : public Vehicle {
public: 
    
void turn();
private: 
    int seats;
};

#endif //_CAR_H