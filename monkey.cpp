/*********************************************************************
** Program Filename: monkey.cpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: animal implment
** Input: monkey inputs
** Output: monkeys
*********************************************************************/

#include<iostream>
#include "monkey.hpp"

/*********************************************************************
** Function: Monkey
** Description: inheritance from the animal class 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 

//set the monkey value
Monkey::Monkey() : Animal() {
    cost = 15000;
    num_babies = 1;
    payoff = cost * 0.1;
    type = "monkey";

}

/*********************************************************************
** Function: monkey
** Description: inheritance the animal class with the age 0
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Monkey::Monkey(int new_age) {
    cost = 15000;
    num_babies = 1;
    payoff = cost * 0.1;
    type = "monkey";
    age = 0;
}