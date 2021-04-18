/*********************************************************************
** Program Filename: animal.hpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: header file of the animal
** Input: user inputs
** Output: ZOO STASTUS
*********************************************************************/

#ifndef _ANIMAL
#define _ANIMAL
#include<iostream>
#include<string>  


/*********************************************************************
** Class: Animal
** Description: set the basic animals price or age
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
class Animal {
	protected:
   int age;
   float cost;
   int num_babies;
   float payoff;
   float basefoodcost;
   std::string type;
  public:
    Animal();
    Animal(int new_age);
    int get_age();
    float get_cost();
    int get_num_babies();
    float get_payoff();
    std::string get_type();
    float get_basefoodcost();
    void add_oneday();
    void set_age(int set);
    void set_cost(float set);
    void set_num_babies(int set);
    void set_payoff(float set);
    void set_basefoodcost(float set);
    void set_gettype(std::string set);

};

#endif