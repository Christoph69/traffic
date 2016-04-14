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
#include "Vehicle.h"

int main(int argc, const char * argv[]) {
    Vehicle moped;
    moped.setSpeed(100);
    for (int i = 0; i < 5; i++) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << i + 1 << std::endl;
    }
    std::cout << "Position: " << moped.getPosition() << "km" << std::endl;
    std::cout << "Hello World!" << std::endl;
    
    return 0;
}
