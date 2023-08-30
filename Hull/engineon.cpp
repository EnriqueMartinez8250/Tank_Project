#include "engineon.h"
#include <iostream>


TankEngine::TankEngine(){

}

TankEngine::~TankEngine(){

}

void TankEngine:: move_forward(){
    std::cout << "Tank moving forward!" << std::endl;
}

void TankEngine::move_backwards(){
    std::cout << "Tank moving backwards!" << std::endl;
}