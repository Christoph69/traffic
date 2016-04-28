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
#include "VehicleQueue.h"

int main(int argc, const char * argv[]) {
    VehicleQueue liste;
    
    Vehicle *pV;
    Motor Motor;
    pV = &Motor;
    liste.append(pV);
    pV->setSpeed(100, KILOMETER_PER_H);
    std::this_thread::sleep_for (std::chrono::seconds(5));
    std::cout << "Posi: " << pV->getPosition(METER) << std::endl;
    std::cout << "Fahrzeuge in der Liste: " << liste.size() << std::endl;
    return 0;
}
