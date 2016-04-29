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
#include "Car.h"
#include "VehicleQueue.h"

int main(int argc, const char * argv[]) {
    VehicleQueue liste;
    liste.createCar();
    Vehicle* pVehicle = liste.info();
    pVehicle->setSpeed(100, KILOMETER_PER_H);
    std::this_thread::sleep_for (std::chrono::seconds(5));
    std::cout << "Posi: " << pVehicle->getPosition(METER) << std::endl;
    std::cout << "Fahrzeuge in der Liste: " << liste.size() << std::endl;
    return 0;
}
