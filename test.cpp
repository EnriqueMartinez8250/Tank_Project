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
                        mpat.MPAT_Display();
                        Fighting();
                        
                        
                            
                    break;
                    case '2':
                        //HRound.Heat_Display();
                        
                    break;
                    case '3':
                        //Sround.Sabot_Display();
                        
                    break;
                    case '4':
                        //Cround.Cannister_Display();
                        
                    break;   