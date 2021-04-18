/*********************************************************************
** Program Filename: zoo.cpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description: zoo cpp file 
** Input: user inputs
** Output: ZOO STASTUS
*********************************************************************/

#include<iostream>
#include <ctime>
#include<string>
#include "zoo.hpp"

/*********************************************************************
** Function: Zoo
** Description: Set up the zoo
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Zoo::Zoo() {
	rand_event = 4;
	bank = 100000;
	day = 1;
	bonus = 0;
	monkeysize = 0;
	seaottersize = 0;
	slothssize = 0;
	foodbase = 50;
	monkeys = new Animal * [monkeysize];
	seaotters = new Animal * [seaottersize];
	sloths = new Animal * [slothssize];
}

/*********************************************************************
** Function: ZOO
** Description: DATALEAK
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
Zoo::~Zoo() {}

/*********************************************************************
** Function: get_rand_event
** Description: get the random event value
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: rand_event
*********************************************************************/ 
int Zoo::get_rand_event() {
	return this->rand_event;
}

/*********************************************************************
** Function: get_bank
** Description: get the bank value 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: bank
*********************************************************************/ 
float Zoo::get_bank() {
	return this->bank;
}

/*********************************************************************
** Function: get_day
** Description: Get the day 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: day
*********************************************************************/ 
int Zoo::get_day() {
	return this->day;
}

/*********************************************************************
** Function: get_bonus
** Description: return the value bonus
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: bonus
*********************************************************************/ 
float Zoo::get_bonus() {
	return this->bonus;
}

/*********************************************************************
** Function: get_monkeysize
** Description: return the size of the monkey
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: monkey_size
*********************************************************************/ 
int Zoo::get_monkeysize() {
	return this->monkeysize;
}

/*********************************************************************
** Function: get_seaottersize
** Description: return the size of the seaotter
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int Zoo::get_seaottersize() {
	return this->seaottersize;
}

/*********************************************************************
** Function: get_slothssize
** Description: return the size of the sloth
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: slothssize
*********************************************************************/ 
int Zoo::get_slothssize() {
	return this->slothssize;
}

/*********************************************************************
** Function: make_payment
** Description: get the payment from the input value
** Parameters: int
** Pre-Conditions: pay_off
** Post-Conditions: bank -= pay_off (to add money, input has to be negative)
*********************************************************************/ 
void Zoo::make_payment(float pay_off) {
	this->bank -= pay_off;
}

/*********************************************************************
** Function: Add_monkey
** Description: add the monkey to the array and extended the size of the array
** Parameters: Call animal
** Pre-Conditions: a
** Post-Conditions: add monkey
*********************************************************************/ 
void Zoo::Add_monkey(Animal *a) {
	monkeysize += 1;
	monkeys[monkeysize - 1] = a;
}

/*********************************************************************
** Function: Add_seaotter
** Description: add the seaotter to the array and extened the size of the array
** Parameters: call animal
** Pre-Conditions: none
** Post-Conditions: add seaotter
*********************************************************************/ 
void Zoo::Add_seaotter(Animal *a) {
	seaottersize += 1;
	seaotters[seaottersize - 1] = a;
}

/*********************************************************************
** Function: add_sloth
** Description: add the sloth to the array and extened the size of the array
** Parameters: call animal
** Pre-Conditions: none
** Post-Conditions: add sloths
*********************************************************************/ 
void Zoo::Add_sloth(Animal *a) {
	slothssize += 1;
	sloths[slothssize - 1] = a;
}

/*********************************************************************
** Function: delete_game
** Description: delete all datas from the heap
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: No memory leaks
*********************************************************************/ 
void Zoo::delete_game() {
	for(int i = 0; i < monkeysize; i++) {
		delete monkeys[i];
	}
	for(int i = 0; i < seaottersize; i++) {
		delete seaotters[i];
	}
	for(int i = 0; i < slothssize; i++) {
		delete sloths[i];
	}
	delete [] monkeys;
	delete [] seaotters;
	delete [] sloths;
}

/*********************************************************************
** Function: end_game()
** Description: end the game
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::end_game() {
	if(bank <= 0) {
		std::cout << "|- BANKRUPT- You don't have enough money to run the zoo." << std::endl;
		std::cout << "|- Zoo Closed.. Thanks for playing" << std::endl;
		delete_game();
	}
}

/*********************************************************************
** Function: print_animal
** Description: print out the animal the zoo has.
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: number of animals and baby
*********************************************************************/ 
void Zoo::print_animals() {
	int monkey_b = 0, seaotter_b = 0, sloth_b = 0;
	for(int i = 0; i < monkeysize; i++) { //baby
		if(monkeys[i]->get_age() < 30) {
			monkey_b++;
		}
	}
	for(int i = 0; i < seaottersize; i++) {
		if(seaotters[i]->get_age() < 30) {
			seaotter_b++;
		}
	}
	for(int i = 0; i < slothssize; i++) {
		if(sloths[i]->get_age() < 30) {
			sloth_b++;
		}
	}	
	std::cout << "|---Animals in the ZOO---|" << std::endl;
	std::cout << "|-Adult Monkey: " << get_monkeysize() - monkey_b << std::endl;
	std::cout << " -  Baby monkey: " << monkey_b << std::endl;
	std::cout << "|-Adult Seaotter: " << get_seaottersize() - seaotter_b << std::endl;
	std::cout << " -  Baby seaotter: " << seaotter_b << std::endl;
	std::cout << "|-Adult Sloth: " << get_slothssize() - sloth_b << std::endl;
	std::cout << " -  Baby sloth: " << sloth_b << std::endl;
	std::cout << "|------------------------|" << std::endl;
}

/*********************************************************************
** Function: add_animal
** Description: add animal depends on their type
** Parameters: none
** Pre-Conditions: call animal
** Post-Conditions: add_animal
*********************************************************************/ 
void Zoo::add_animal(Animal *a) {
	if(a->get_type() == "monkey") {
		Add_monkey(a);
	}
	else if(a->get_type() == "seaotter") {
		Add_seaotter(a);
	}
	else if(a->get_type() == "sloth") {
		Add_sloth(a);
	}
} 

/*********************************************************************
** Function: get_payoff
** Description: get_daily revenue
** Parameters: none
** Pre-Conditions: number of animals
** Post-Conditions: daily revenue
*********************************************************************/ 
void Zoo::get_payoff() {
	float total_payoff = 0;
	if(monkeysize != 0) {
		for(int i = 0; i < monkeysize; i++) {
			total_payoff += monkeys[i]->get_payoff();
		}
	}

	if(seaottersize != 0) {
		for(int i = 0; i < seaottersize; i++) {
			total_payoff += seaotters[i]->get_payoff();
		}
	}

	if(slothssize != 0) {
		for(int i = 0; i < slothssize; i++) {
			total_payoff += sloths[i]->get_payoff();
		}
	}

	make_payment(total_payoff * -1);
	std::cout <<"|- Total amount of revenue is $" << total_payoff;
	std::cout <<"|- Currently bank $" << get_bank() << std::endl;
}

/*********************************************************************
** Function: get_menual
** Description: get the menual when the user is about to buy animals
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: animals menuals
*********************************************************************/ 
void Zoo::get_menual() {
   buy_monkey();
   buy_seaotter();
   buy_sloth();
   end_game();
}

/*********************************************************************
** Function: buy_monkey
** Description: buy monke. 0 = nothing, 1= one animal, and 2 = two animals
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: add_monkey, money out from the bank
*********************************************************************/ 
void Zoo::buy_monkey() {
	bool contin = true;
	std::string user_input;
	int user_int;
	while(contin) {
	   std::cout << "Monkeys are $15,000. You have $" << get_bank() << " in your bank" << std::endl;
	   std::cout <<"You can buy upto 2 animals. How many would you like to buy? ";
	   getline(std::cin, user_input);
	   user_int = atoi(user_input.c_str());
	if(user_int == 0) {
		std::cout << "Nothing changed, you currently have $" << get_bank() << std::endl;  
		contin = false;
	}
	else if(user_int == 1) {
	   	make_payment(15000);
		std::cout << "You bought one monkey, you currently have $" << get_bank() << "remaining." << std::endl;
		contin = false;
		add_animal(new Monkey()); //add animal from the monkey class
	   }
	else if(user_int ==2) {
		make_payment(30000);
		std::cout << "You bought two monkeys, you currently have $" << get_bank() << "remaining." << std::endl;
		contin = false;
		add_animal(new Monkey());
		add_animal(new Monkey());
		}
	} //end of the while loop
	std::cout << "\n\n" << std::endl;
}

/*********************************************************************
** Function: buy_seaotter
** Description: buy monke. 0 = nothing, 1= one animal, and 2 = two animals
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: add_seaotter, money out from the bank
*********************************************************************/ 
void Zoo::buy_seaotter() {
	bool contin = true;
	std::string user_input;
	while(contin) {
		std::cout <<"Sea otters are $5,000. You have $" << get_bank() << " in your bank" << std::endl;
		std::cout <<"You can buy upto 2 animals. How many would you like to buy?";
		getline(std::cin, user_input);
	if(user_input == "0") {
		std::cout << "Nothing changed, you currently have $" << get_bank() << std::endl;  
		contin = false;
		}
		else if(user_input == "1") {
			make_payment(5000);
			std::cout << "You bought one sea otter, you currently have $" << get_bank() << "remaining." << std::endl;
			contin = false;
			add_animal(new Seaotter());
		}
		else if(user_input == "2") {
			make_payment(10000);
			std::cout << "You bought two sea otter, you currently have $" << get_bank() << "remaining." << std::endl;
			contin = false;
			add_animal(new Seaotter());
			add_animal(new Seaotter());
		}
	}// end of the while loop
	std::cout <<"\n\n" << std::endl;
}

/*********************************************************************
** Function: buy_sloths
** Description: buy sloth. 0 = nothing, 1= one animal, and 2 = two animals
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: add_sloths, money out from the bank
*********************************************************************/ 
void Zoo::buy_sloth() {
	bool contin = true;
	std::string user_input;
	while(contin) {
		std::cout <<"Sloths are $2,000. You have $" << get_bank() << " in your bank" << std::endl;
		std::cout <<"You can buy upto 2 animals. How many would you like to buy?";
		getline(std::cin, user_input);
	if(user_input == "0") {
		std::cout << "Nothing changed, you currently have $" << get_bank() << std::endl;  
		contin = false;
		}
		else if(user_input == "1") {
			make_payment(2000);
			std::cout << "You bought one sloth, you currently have $" << get_bank() << "remaining." << std::endl;
			contin = false;
			add_animal(new Sloth());
		}
		else if(user_input == "2") {
			make_payment(4000);
			std::cout << "You bought two sloths, you currently have $" << get_bank() << "remaining." << std::endl;
			contin = false;
			add_animal(new Sloth());
			add_animal(new Sloth());
		}
	}//end of the while loop
	std::cout <<"\n\n" << std::endl;
}

/*********************************************************************
** Function: Add_day
** Description: Add the day when the user ended the turn
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: day += 1;
*********************************************************************/ 
void Zoo::Add_day() {
	this->day += 1;
}

/*********************************************************************
** Function: die_monkey
** Description: kill monkey if the user didn't call doctor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: delete[] monkeys;
*********************************************************************/ 
void Zoo::die_monkey(int i) {
	//i is constant, k is the start point
	for(int k = i; k < monkeysize; k++) {
		monkeys[i] = monkeys[i+1];
	}
	monkeysize--;
}

/*********************************************************************
** Function: die_seaotter
** Description: kill seaotter if the user didn't call doctor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: delete[] seaotter
*********************************************************************/ 
void Zoo::die_seaotter(int i) {
	//i is constant, k is the start point
	for(int k = i; k < seaottersize; k++) {
		seaotters[i] = seaotters[i+1];
	}
	seaottersize--;
}

/*********************************************************************
** Function: die_sloths
** Description: sill sloths if the user didn't call doctor
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: delete [] sloths
*********************************************************************/ 
void Zoo::die_sloth(int i) {
	//i is constant, k is the start point
	for(int k = i; k < slothssize; k++) {
		sloths[i] = sloths[i+1];
	}
	slothssize--;
}

/*********************************************************************
** Function: sick_animal
** Description: choose the random animal 
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: ask to call the doctor
*********************************************************************/ 
void Zoo::sick_animal() {
	int roll = (rand() % 3) +1, roll2;
	std::string user_input;
	switch(roll) {
		case 1: //monkey
		roll2 = rand() % monkeysize;
		if(monkeys[roll2]->get_age() < 90) {
			std::cout << "Baby monkey is sick (Need $15000), do you want to pay for doctor? (1.yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(15000);
				std::cout <<"You saved baby monkey!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Baby monkey died......." << std::endl;
				die_monkey(roll2);
			}			
		}
		else {
			std::cout <<"Adult monkey is sick (Need $7500), do you want to pay for doctor? (1.Yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(7500);
				std::cout <<"You saved adult monkey!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Adult monkey died......." << std::endl;
				die_monkey(roll2);
			}
		}
		break;
		case 2: //seaotter
		roll2 = rand() % seaottersize;
		if(seaotters[roll2]->get_age() < 90) {
			std::cout << "Baby seaotter is sick (Need $5000), do you want to pay for doctor? (1.yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(5000);
				std::cout <<"You saved baby seaotter!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Baby seaotter died......." << std::endl;
				die_seaotter(roll2);
			}			
		}
		else {
			std::cout <<"Adult seaotter is sick (Need $2500), do you want to pay for doctor? (1.Yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(2500);
				std::cout <<"You saved adult seaotter!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Adult seaotter died......." << std::endl;
				die_seaotter(roll2);
			}
		}
		break;
		case 3: //sloth
		roll2 = rand() % slothssize;
		if(sloths[roll2]->get_age() < 90) {
			std::cout << "Baby sloths is sick (Need $2000), do you want to pay for doctor? (1.yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(2000);
				std::cout <<"You saved baby sloths!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Baby sloths died......." << std::endl;
				die_sloth(roll2);
			}			
		}
		else {
			std::cout <<"Adult sloths is sick (Need $1000), do you want to pay for doctor? (1.Yes, 2.No): ";
			getline(std::cin, user_input);
			if(user_input == "1") {
				make_payment(1000);
				std::cout <<"You saved adult sloths!" << std::endl;
			}
			else if(user_input == "2") {
				std::cout <<"Adult sloths died......." << std::endl;
				die_sloth(roll2);
			}
		}
		break;
 	}
	//random animal get the i value that can decide baby or adult
	end_game();
}

/*********************************************************************
** Function: randomize_event
** Description: randomize the event
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: random event 1~4
*********************************************************************/ 
void Zoo::randomize_event() {
	srand(time(NULL));
	int random = (rand() % 10) + 1, mid = rand_event + 1;
	if(random <= rand_event) {
		sick_animal();
	} 
	else if((random > rand_event) && (random <= mid)) {
		for(int i =0; i < monkeysize; i++) {
			float pay = (rand() % 250) + 250;
			if(monkeys[i]->get_age() < 30) {
				pay = pay * 2; // baby animals gets double.
			}
			std::cout <<"A BOOM in zoo!, monkey" << i+1 << " bring " << pay << std::endl;
			make_payment(pay * -1);
		}
	}
	else if((random > mid) && (random <= mid+3)) {
		get_baby();
	}
	else if(random > mid+3) {
		std::cout <<"|-Next-Day-|" << std::endl;
	}
	else { //other case
		std::cout <<"|-Next-Day-|" << std::endl;
	}
	
}

/*********************************************************************
** Function: get_start
** Description: start the day when the user ended the turn
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void Zoo::get_start() {
   	std::string user_input;
	system("clear");
	std::cout << "|---Day: " << get_day() <<"---|" << std::endl;
	std::cout << "|_--Bank: " << get_bank() <<"---|" <<std::endl;
	print_animals();
	end_game();
	feed_manual();
	end_game();
	get_menual();
	end_game();
	randomize_event();
	end_game();
	get_payoff(); //daily revenue
	end_game();
	Add_day();
	end_game();
}

/*********************************************************************
** Function: get_baby
** Description: get the baby by random_event
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: random baby
*********************************************************************/ 
void Zoo::get_baby() { //untile the value contin is false keep looping 
	bool contin = true;
	while(contin) {
		int roll = (rand()%3) + 1;
		switch(roll) {
			case 1: 
				if(monkeysize >= 2) {
					std::cout <<"Baby monkey was born." << std::endl;
					add_animal(new Monkey(0)); //baby born with age 0;
				}
				break;
			case 2:
				if(seaottersize >= 2) {
					std::cout <<"Baby seaotters are born." << std::endl;
					for(int i = 0; i < 2; i++) {add_animal(new Seaotter(0)); }
				}
				break;
			case 3:
				if(slothssize >= 2) {
					std::cout <<"Baby sloths are born." << std::endl;
					for(int i = 0; i < 3; i++) {add_animal(new Sloth(0));}
				}
				break;
		}
	contin = false;
	} 
}

/*********************************************************************
** Function: feed_manual
** Description: gice options to user to chose the quality of the food
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: feeding animals
*********************************************************************/ 
void Zoo::feed_manual() {
	bool contin = true;
	std::string user_input;
	int total_animal;
	total_animal += monkeysize + seaottersize + slothssize;
	float percent = (rand() % 50) + 76; //random
	percent = percent * 0.01;
	foodbase *= percent;
	std::cout << "|- Current (Regular)food cost: " << foodbase * total_animal << std::endl;
	
	while(contin) {
		std::cout << "|- Choose the quality of the food for animal (1. Regular[double], 2. Premium, 3. Cheap[half price]): ";
		getline(std::cin, user_input);
		if(user_input == "1") {
			make_payment(foodbase * total_animal);
			contin = false;
		}
		else if(user_input == "2") {
			make_payment(2 * (foodbase * total_animal));
			rand_event = 2; //get half
			contin = false;
		}
		else if(user_input == "3") {
			int total = foodbase * total_animal;
			make_payment((foodbase * total_animal) / 2);
			rand_event = 8; //double
			contin = false;
		}
	}
	std::cout << "|- You currently have $" << get_bank() << "remaining." << std::endl;
	end_game();
}

/*********************************************************************
** Function: gamestart
** Description: start the game
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: start and end the gamw without memory leaks
*********************************************************************/ 
void Zoo::gamestart() {
   bool contin = true, contin2 = true;
   int user_int;
   std::string user_input;
	system("clear");
   std::cout <<"|------------------------|" << std::endl;
   std::cout <<"|--Jaegeun's Zoo Tycoon--|" << std::endl;
   std::cout <<"|------------------------|" << std::endl;
   get_menual();
   while(contin) {
   	get_start();
	while(contin2) {
		std::cout << "Would you like to continue the game? (1.Yes, 2.No): ";
		//system("CLS");
		getline(std::cin, user_input);
		user_int = atoi(user_input.c_str());
		if(user_int == 1) {
			contin2 = false;
		}
		else if(user_int == 2) {
		   contin2 = false;
		   contin = false;
		}	
	}//end of the contin2 while loop
	contin2 = true;
   }//end of the while loop
   end_game();
   delete_game();
}
