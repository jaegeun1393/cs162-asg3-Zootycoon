/*********************************************************************
** Program Filename: seaotter.cpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: animal implment
** Input: animal
** Output: inhertance from the animlal to the seaotter
*********************************************************************/
#include<iostream>
#include "seaotter.hpp"

/*********************************************************************
** Function: seaotter
** Description: inheritance from the animal class 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Seaotter::Seaotter() : Animal() {
    cost = 5000;
    num_babies = 2;
    payoff = cost * 0.05;
    type = "seaotter";
}

/*********************************************************************
** Function: seaooter
** Description: inheritance from the animal class 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Seaotter::Seaotter(int new_age) {
    cost = 5000;
    num_babies = 2;
    payoff = cost * 0.05;
    type = "seaotter";
    age = 0;
}