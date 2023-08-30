#include<iostream>
#include "Hull/hull.h"
#include "range.h"


int main()
{
    short choice;
    bool running = true;
    Operation_Commands operations; // creating an object of the "Operations Commands class -> located inside hull.cpp"

    while(running){
    std::cout<<"1: Turn on\n";
    std::cout<<"2: Turn off\n";
    std::cout<<"3: Firing range\n";
    std::cout<<"Enter your choice: ";
    
    std::cin>>choice;


    switch(choice){
        case 1:
            operations.turn_on();
            running = false;
            break;
        case 2:
            std::cout<<"turning off. \n";
            running = false;
            break;
        case 3:
            range();
        default:
            std::cout<<"invalid choice\n";
            break;
            
    }

    }



}