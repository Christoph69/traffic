//
//  Vehicle.cpp
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#include <iostream>
#include "Vehicle.h"

// init
Vehicle::Vehicle() : position(0), tempo(0)
{
    this->startTime = time(0);
}

// dekonstruktor
Vehicle::~Vehicle(){
    
}

// geb die Position zurück
double Vehicle::getPosition(){
    this->position += difftime(time(0), this->startTime)/3600 * this->tempo;
    this->startTime = time(0);
    return this->position;
}

// neue Geschwindigkeit setzen und position verrechnen
void Vehicle::setSpeed(int geschwindigkeit){
    this->position += std::difftime(time(0), this->startTime)/3600 * this->tempo;
    this->tempo = geschwindigkeit;
    this->startTime = time(0);
}
