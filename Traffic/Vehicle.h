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
    Vehicle();
    void setSpeed(int geschwindigkeit);
    double getPosition();
    
    private:
    double position;
    int tempo;
    std::clock_t startTime;
};

#endif /* Vehicle_h */
