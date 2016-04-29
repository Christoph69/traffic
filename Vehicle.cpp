//
//  Vehicle.cpp
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#include "Vehicle.h"

// Werte für die UnitSpeedFactoren
const double unitSpeedFactor[] = {1.0, 3.6, 3600.0/1609.0};

// init
Vehicle::Vehicle() : position(0), speed(0), startTime(time(nullptr)){
    
}

// dekonstruktor
Vehicle::~Vehicle(){
    
}

/*
double Vehicle::getPosition(unitLength unit){
    double position = difftime(time(nullptr), this->startTime) * this->speed;
    position += this->position;
    return position/unit;
}
*/
 
void Vehicle::setSpeed(int newSpeed, unitSpeed uSpeed){
    this->position += difftime(time(nullptr), this->startTime) * this->speed;
    this->speed = newSpeed / unitSpeedFactor[uSpeed];
    this->startTime = time(nullptr);
}

double Vehicle::getSpeed(unitSpeed uSpeed){
    return this->speed * unitSpeedFactor[uSpeed];
}
