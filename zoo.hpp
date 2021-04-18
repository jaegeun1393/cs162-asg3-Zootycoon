/*********************************************************************
** Program Filename: Zoo.hpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: header file of the zoo states
** Input: user inputs
** Output: ZOO STASTUS
*********************************************************************/

#ifndef _ZOO
#define _ZOO
// Above define
#include "animal.hpp"
#include "monkey.hpp"
#include "seaotter.hpp"
#include "sloths.hpp"
// Above include
#include <cstdlib>
#include <iostream>
#include <ctime>
// Above header file


/*********************************************************************
** Class: Zoo
** Description: set up the basic states of the zoo
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: start and end the gamw without memory leaks
*********************************************************************/ 
class Zoo {
	private: 
		Animal **monkeys;
		Animal **seaotters;
		Animal **sloths;	
		int rand_event;
		float bank;
		int day;
		float bonus;
		int monkeysize;
		int seaottersize;
		int slothssize;
		float foodbase;
	public:
		Zoo();
		~Zoo();
		int get_rand_event();
		float get_bank();
		int get_day();
		float get_bonus();
		int get_monkeysize();
		int get_seaottersize();
		int get_slothssize();
    	void randomize_event();
    	void buy_monkey();
    	void buy_seaotter();
    	void buy_sloth();
		void gamestart();
    	void get_information();
    	void make_payment(float pay_off);
    	void get_menual();
    	void Add_day();
    	void get_start();
		void print_animals();
		void get_payoff();
		void get_baby();
		void sick_animal();
		/**(Animal *a) == contain the animal information
		 * How to add animal? = add_animal(new monkey);
		 **/
		void add_animal(Animal *);
		void Add_monkey(Animal *);
		void Add_seaotter(Animal *);
		void Add_sloth(Animal *);
		//animal die
		void die_monkey(int);
		void die_seaotter(int);
		void die_sloth(int);
		//feeding animal
		void feed_manual();
		//end the game
		void end_game();
		void delete_game();

};

#endif
