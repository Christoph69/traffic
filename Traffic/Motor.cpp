//
//  Motor.cpp
//  Traffic
//
//  Created by Christoph Wagner on 18/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "Motor.h"

// init
Motor::Motor() : maxTank(0), nowTank(0), fuelPerLength(0){
    
}

// dekonstruktor
Motor::~Motor(){
    
}

bool Motor::fillTank(double amount){
    bool gueltig = false;
    double freeTank = this->maxTank - this->nowTank;
    if (freeTank >= amount){
        gueltig = true;
        this->nowTank += amount;
    }
    return gueltig;
}

double Motor::getFuelLevel(){
    return this->nowTank - this->fuelPerLength/100.0*this->getPosition(KILOMETER);
}

void Motor::setTankSize(double size){
    this->maxTank = size;
}

void Motor::setConsumption(double consumption){
    this->fuelPerLength = consumption;
}
