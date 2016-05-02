//
//  MotorVehicle.h
//  Traffic
//
//  Created by Christoph Wagner on 18/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#ifndef MotorVehicle_h
#define MotorVehicle_h

#include "Vehicle.h"

class MotorVehicle : public Vehicle{
public:
    MotorVehicle(double tankSize, double consumption);
    ~MotorVehicle();
    // füllt den Tank mit neuem Treibstoff auf, wenn der übergebene Treibstoff, die maximal aufnehmbare Menge übersteigt
    // wird er abgelehnt und 'false' zurückgebeben
    bool fillTank(double amount);
    // gibt die aktuelle Menge des Treibstoffes zurück
    double getFuelLevel() const;
        // legt die Größe des Tankes fest
        // void setTankSize(double size);
        // lget den Kraftstoffverbrauch pro 100km fest in Liter
        // void setConsumption(double consumption);
    // gibt die aktuelle Position des Fahrzeuges zurück
    virtual double getPosition(unitLength unit) const;
    // gibt die aktuelle Geschwindigkeit des Fahrzeuges zurück
    virtual double getSpeed(unitSpeed uSpeed) const;
private:
    const double maxTank; // Maximales Fassungsvermögen des Treibstofftankes
    double nowTank; // aktueller Füllstand des Treibstofftankes, bei der letzten Abfragung
    double consumption;   // Kraftstoffverbrauch auf 100km
};

#endif /* MotorVehicle_h */
