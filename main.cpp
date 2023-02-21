#include <iostream>
#include <string>
#include "scenarios.h"
#include "objects.h"
#include <cstdlib> //used for exit()
#include <unistd.h> //used for sleep()



int main() //Driver code for the Menu
{
    Mpat Mround; //MPAT Class -> object
    Heat HRound; //Heat Class -> object
    Sabot Sround; //Sabot Class -> object
    Cannister Cround; //Cannister Class -> object

    Infantry inf_target; //Infantry Class -> object



    


    int user_selection = -1;
    std::cout<<"<----------------------------------------------------------------------------------------------------->"<<std::endl;
    std::cout<<"Welcome to the M1 Abrams Virtual range, we have a list of scenarios below to improve tanker readiness"<<std::endl;
    std::cout<<"Please choose the following task below: \n1: Scenario \n2: Missile Calibration \n3: Exit\n"; //Selection options
    std::cout<<"Select: "; //user selects the option here
    std::cin>>user_selection; //user selects which of the following (see above for options)

    if(user_selection == 1){
        std::cout<<"<------------------------------------------------------------------------------>"<<std::endl;
        scenario(); //Scenario pops up here
        std::cout<<"<------------------------------------------------------------------------------>"<<std::endl;
        std::cout<<"The following targets have been identified, select the correct ammounition type"<<std::endl;
        char user_round_selection;
        std::cout<<"1: MPAT round\n";
        std::cout<<"2: Heat round\n";
        std::cout<<"3: Sabot APFSDS round\n";
        std::cout<<"4: Cannister round\n";


        std::cout<<"Select an option: ";
        std::cin>>user_round_selection;

        switch(user_round_selection){
            case '1':
                Mround.MPAT_Display();
                Fighting();
                
                
                    
            break;
            case '2':
                HRound.Heat_Display();
                
            break;
            case '3':
                Sround.Sabot_Display();
                
            break;
            case '4':
                Cround.Cannister_Display();
                
            break;          
        }
    }


    else if(user_selection ==2){
        char user_calabration;
        std::cout<<"This is still a work in progress\n";
    }



    else if(user_selection == 3){
        char user_exit;
        std::cout<<"Are you sure you want to exit?\n";
        std::cout<<"1: Yes\n";
        std::cout<<"2: No\n";
        std::cout<<"Select: ";
        std::cin>>user_exit;

        switch (user_exit)
        {
            case '1':
                std::cout<<"exiting..";
                sleep(5);
                exit(0);
            break;

        
        }
    }
}

