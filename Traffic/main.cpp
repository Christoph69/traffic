//
//  main.cpp
//  Traffic
//
//  Created by Christoph Wagner on 14/04/16.
//  Copyright © 2016 de.christophwagner. All rights reserved.
//

#include <iostream>
#include <thread>
#include <chrono>
#include "Motor.h"

int main(int argc, const char * argv[]) {
    Motor moped;
    moped.setSpeed(100, METER_PER_SEC);
    moped.setTankSize(60);
    moped.fillTank(50);
    moped.setConsumption(20);
    for (int i = 0; i < 5; i++) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << i + 1 << std::endl;
    }
    std::cout << "Position:     " << moped.getPosition(KILOMETER) << "km" << std::endl;
    std::cout << "Treibstoff:   " << moped.getFuelLevel() << "l" << std::endl;
    return 0;
}
