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

class Vehicle{
    public:
    // Konstruktor
    Vehicle();
    // Destruktor
    ~Vehicle();
    // setzt die neue Geschwindigkeit für das ausgewählte Fahrzeug in m/s
    void setSpeed(int newSpeed);
    // gibt die aktuelle Position des Fahrzeuges zurück
    double getPosition();
    
    private:
    double position;
    int speed;
    time_t startTime;
};

#endif /* Vehicle_h */
