//
//  Vehicle.cpp
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#include <iostream>
#include "Vehicle.h"

// Multiplikator für die Sekunden
const int multiplier = 100;

// init
Vehicle::Vehicle() : position(0), tempo(0)
{
    this->startTime = std::time(0);
}

// geb die Position zurück
double Vehicle::getPosition(){
    this->position += std::difftime(std::time(0), this->startTime)/3600 * this->tempo * multiplier;
    this->startTime = std::time(0);
    return this->position;
}

// neue Geschwindigkeit setzen und position verrechnen
void Vehicle::setSpeed(int geschwindigkeit){
    this->position += std::difftime(std::time(0), this->startTime)/3600 * this->tempo * multiplier;
    this->tempo = geschwindigkeit;
    this->startTime = std::time(0);
}
