#ifndef ENGINEON_H
#define ENGINEON_H

class TankEngine{
    public:
        TankEngine(); //Constructor
        ~TankEngine(); // Destructor


        void move_forward();
        void move_backwards();
        void move_left();
        void move_right();
        void pivot_left();
        void pivot_right();
        void stop();


};


#endif