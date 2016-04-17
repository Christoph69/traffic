//
//  Vehicle.cpp
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#include "Vehicle.h"

// init
Vehicle::Vehicle() : position(0), speed(0)
{
    this->startTime = time(0);
}

// dekonstruktor
Vehicle::~Vehicle(){
    
}

double Vehicle::getPosition(){
    this->position += difftime(time(0), this->startTime)/3600 * this->speed;
    this->startTime = time(0);
    return this->position;
}

void Vehicle::setSpeed(int newSpeed){
    this->position += std::difftime(time(0), this->startTime)/3600 * this->speed;
    this->speed = newSpeed;
    this->startTime = time(0);
}
