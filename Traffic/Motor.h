//
//  Motor.h
//  Traffic
//
//  Created by Christoph Wagner on 18/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#ifndef Motor_hpp
#define Motor_hpp

#include "Vehicle.h"

class Motor : public Vehicle{
public:
    Motor();
    ~Motor();
    // füllt den Tank mit neuem Treibstoff auf, wenn der übergebene Treibstoff, die maximal aufnehmbare Menge übersteigt
    // wird er abgelehnt und 'false' zurückgebeben
    bool fillTank(double amount);
    // gibt die aktuelle Menge des Treibstoffes zurück
    double getFuelLevel();
    // legt die Größe des Tankes fest
    void setTankSize(double size);
    // lget den Kraftstoffverbrauch pro 100km fest in Liter
    void setConsumption(double consumption);
    void setSpeed(int newSpeed, unitSpeed uSpeed);
    double getPosition(unitLength unit);
private:
    double maxTank; // Maximales Fassungsvermögen des Treibstofftankes
    double nowTank; // aktueller Füllstand des Treibstofftankes
    double fuelPerLength;   // Kraftstoffverbrauch auf 100km
};

#endif /* Motor_hpp */
