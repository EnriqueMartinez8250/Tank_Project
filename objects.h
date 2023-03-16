#include <iostream>
#include <ostream>
#include <string>
//#include "controls.h"

using namespace std;

// the classes below are the types of Ammo types for those unaware
// for example the class below 'Mpat' is a specific type of tank round

// added a file



class Mpat{
    public:
        const float weight = 53.4;
    void MPAT_Display(){
        std::cout<<"You have selected MPAT round \n";
        std::cout<<"Weight: "<<weight<<std::endl;
        
    }
        
};

class Heat{
    public:
        const float weight = 50.5;
    void Heat_Display(){
        std::cout<<"You have selected Heat round \n";
        std::cout<<"Weight: "<<weight<<std::endl;
    }
};

class Sabot{
    public:
        const float weight = 41.1;
    void Sabot_Display(){
        std::cout<<"You have selected Sabot round\n";
        std::cout<<"Weight: "<<weight<<std::endl;
    }
};

class Cannister{
    public:
        const float weight = 50.5;
    void Cannister_Display(){
        std::cout<<"You have selected Cannister round\n";
        std::cout<<"Weight: "<<weight<<std::endl;
    }
};


class Infantry{
    public:
        const int target_points = 100;
    void Infantry_Display(){
        std::cout<<"You have shot down the infantry for a total of: "<<target_points<<" points"<<std::endl;
    }
};


class Truck{
    public:
        const int target_points = 200;
    void Truck_Display(){
        std::cout<<"You have shot down the truck for a total of: "<<target_points<<" points"<<std::endl;
    }
};

class Tank{
    public:
        const int target_points = 300;
    void Tank_Display(){
        std::cout<<"You have shot down the tank for a total of:" <<target_points<<" points"<<std::endl;
    }
};