/*********************************************************************
** Program Filename: monkey.hpp
** Author: jaegeun oh
** Date: 2/18/2019
** Description:  header file of the monkey
** Input: monkey inputs
** Output: monkeys
*********************************************************************/

#ifndef _MONKEY_HPP
#define _MONKEY_HPP
#include "animal.hpp"

class Monkey : public Animal {
	public:
	   Monkey();
	   Monkey(int);
};

#endif