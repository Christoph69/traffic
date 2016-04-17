//
//  Vehicle.h
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//
#ifndef Vehicle_h
#define Vehicle_h

#include <ctime>

// Konstanten zur Längenumrechnung
enum unitLength{METER = 1, KILOMETER = 1000, MILE = 1609};
// Konstanten zur Geschwindigkeitsumrechnung
enum unitSpeed{METER_PER_SEC, KILOMETER_PER_H, MILE_PER_H};
extern const double unitSpeedFactor[];

class Vehicle{
    public:
    // Konstruktor
    Vehicle();
    // Destruktor
    ~Vehicle();
    // setzt die neue Geschwindigkeit für das ausgewählte Fahrzeug in m/s
    void setSpeed(int newSpeed, unitSpeed uSpeed);
    // gibt die aktuelle Position des Fahrzeuges zurück
    double getPosition(unitLength unit);
    // gibt die aktuelle Geschwindigkeit des Fahrzeuges zurück
    double getSpeed(unitSpeed uSpeed);
    
    private:
    double position;
    double speed;
    time_t startTime;
};

#endif /* Vehicle_h */
