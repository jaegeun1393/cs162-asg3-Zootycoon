/********************************************************************
** Program Filename: animal.hpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: animal implment
** Input: user inputs
** Output: ZOO STASTUS
*********************************************************************/

#include<iostream>
#include<string>
#include "animal.hpp"

/*********************************************************************
** Function: animal
** Description: setup the baisc adult animal with the age 90
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Animal::Animal() { //minimum setting
  age = 1095;
  cost = 0;
  num_babies = 1; 
  payoff = 0;
  basefoodcost = 50;
  type = "animal";
}

/*********************************************************************
** Function: animal
** Description: set up the baisc baby animal with the age 0
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Animal::Animal(int new_age) { //minimum setting
  age = new_age;
  cost = 0;
  num_babies = 1; 
  payoff = 0;
  basefoodcost = 50;
  type = "animal";
}

/*********************************************************************
** Function: get_age
** Description: get the age of the animal
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Animal::get_age() {
  return age;
}


/*********************************************************************
** Function: get_cost
** Description: get the cost of the animal
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Animal::get_cost() {
  return cost;
}


/*********************************************************************
** Function: get_num_babies
** Description: get the number of babies
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Animal::get_num_babies() {
  return num_babies;
}


/*********************************************************************
** Function: get_payoff
** Description: get the amounto f payoff money
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Animal::get_payoff() {
  return payoff;
}


/*********************************************************************
** Function: get_type
** Description: get the type of the animal
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
std::string Animal::get_type() {
  return type;
} 


/*********************************************************************
** Function: get_basefoodcost
** Description: get the foodcost base
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
float Animal::get_basefoodcost() {
  return basefoodcost;
}


/*********************************************************************
** Function: add_one day
** Description: every one day add the age of the aninmal
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::add_oneday() {
  age += 1;
}


/*********************************************************************
** Function: set_age
** Description: set the age (I don't think I use this function)
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_age(int set) {
  age = set;
}


/*********************************************************************
** Function: set_cost
** Description: set the cost of the animal (I don't think I use this before)
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_cost(float set) {
  cost = set;
}


/*********************************************************************
** Function: set_num_babies
** Description: set the number of babies
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_num_babies(int set) {
  num_babies = set;
}


/*********************************************************************
** Function: set_payoff
** Description: set the payment (Didn't use this)
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_payoff(float set) {
  payoff = set;
}


/*********************************************************************
** Function: set_basefood cost
** Description: set the base price of the food cost
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_basefoodcost(float set) {
  basefoodcost = set;
}


/*********************************************************************
** Function: set get type
** Description: set the get type
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Animal::set_gettype(std::string set) {
  type = set;
}
