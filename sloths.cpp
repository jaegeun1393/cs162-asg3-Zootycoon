#include<iostream>
#include "sloths.hpp"

/*********************************************************************
** Function: sloths
** Description: inheritance from the animal class 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Sloth::Sloth() : Animal() {
    cost = 2000;
    num_babies = 3;
    payoff = cost * 0.05;
    type = "sloth";
}

/*********************************************************************
** Function: sloths
** Description: inheritance from the animal class 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Sloth::Sloth(int new_age) {
    cost = 2000;
    num_babies = 3;
    payoff = cost * 0.05;
    type = "sloth";  
    age = 0;
}