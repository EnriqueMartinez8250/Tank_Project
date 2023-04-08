#include <iostream>
#include <ostream>
#include <string>
//#include "controls.h"


// the classes below are the types of Ammo types for those unaware
// for example the class below 'Mpat' is a specific type of tank round

class Ammunition{
    public:
        virtual void Display() = 0;
        virtual float GetWeight() const = 0;
};

class Mpat : public Ammunition{
    public:
        const float weight = 53.4;

        void Display() override {
            std::cout << "You have selected MPAT round\n";
            std::cout << "Weight: " << weight << std::endl;
        }


        float GetWeight() const override {
            return weight;
            };
};


class Heat : public Ammunition{
    public:
        const float weight = 50.5;
        void Display() override{
            std::cout << "You have selected HEAT round\n";
            std::cout << "Weight: " << weight << std::endl;
        }

        float GetWeight() const override {
            return weight;
            };
};






//Edited above here


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

//test comment