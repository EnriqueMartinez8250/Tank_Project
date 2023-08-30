#include <iostream>
#include "hull.h"
#include "engineon.cpp"
#include "engineon.h"

TankEngine engine;


void Operation_Commands::turn_on(){
    std::cout<< "Vehicle starting up.." << std::endl;
    uint8_t vehicle_running = true;

    short choice;
    bool running = true;

    while (vehicle_running){
        std::cout<<"Press W to move forward"<<std::endl;
        engine.move_forward();

        
    }






     
}


void Operation_Commands::turn_off(){
    std::cout<< "Vehicle shutting down.." << std::endl;
}












