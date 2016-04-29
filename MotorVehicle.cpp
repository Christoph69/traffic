//
//  Motor.cpp
//  Traffic
//
//  Created by Christoph Wagner on 18/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include "MotorVehicle.h"

// init
MotorVehicle::MotorVehicle() : maxTank(0), nowTank(0), fuelPerLength(0){
    
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

double MotorVehicle::getFuelLevel(){
    return this->nowTank - this->fuelPerLength/100.0*this->getPosition(KILOMETER);
}

void MotorVehicle::setTankSize(double size){
    this->maxTank = size;
}

void MotorVehicle::setConsumption(double consumption){
    this->fuelPerLength = consumption;
}

double MotorVehicle::getPosition(unitLength unit){
    double position = difftime(time(nullptr), this->startTime) * this->speed;
    position += this->position;
    return position/unit;
}

/*void MotorVehicle::setSpeed(int newSpeed, unitSpeed uSpeed){
    this->position += difftime(time(nullptr), this->startTime) * this->speed;
    this->speed = newSpeed / unitSpeedFactor[uSpeed];
    this->startTime = time(nullptr);
}*/

