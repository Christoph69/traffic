//
//  Motor.cpp
//  Traffic
//
//  Created by Christoph Wagner on 18/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "MotorVehicle.h"
#include <cmath>

// init
MotorVehicle::MotorVehicle(double tankSize, double consumption) : maxTank(tankSize), nowTank(0), consumption(consumption){
    
}

// dekonstruktor
MotorVehicle::~MotorVehicle(){
    
}

bool MotorVehicle::fillTank(double amount){
    bool gueltig = false;
    double freeTank = this->maxTank - this->nowTank;
    if (freeTank >= amount){
        gueltig = true;
        this->nowTank += amount;
    }
    return gueltig;
}

double MotorVehicle::getFuelLevel() const{
    return this->nowTank - this->consumption/100.0* std::abs(this->getPosition(KILOMETER) - this->position);
}

/*
void MotorVehicle::setTankSize(double size){
    this->maxTank = size;
}

void MotorVehicle::setConsumption(double consumption){
    this->fuelPerLength = consumption;
}
*/

double MotorVehicle::getPosition(unitLength unit) const{
    // Reichweite ab der letzten Zustandänderung
    double reach = this->nowTank / this->consumption;
    // Theorethische Position
    double position = this->Vehicle::getPosition(KILOMETER);
    // theoretisch gefahrene Strecke
    double distance = this->Vehicle::getPosition(KILOMETER);
    if(std::abs(distance) < reach)
        position = this->position + ((distance < 0) ? -reach : reach);
    return position/unit;
}

double MotorVehicle::getSpeed(unitSpeed uSpeed) const{
    return ((this->getFuelLevel() > 1e-10) ? this->Vehicle::getSpeed(uSpeed) : 0);
}

