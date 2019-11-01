#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "op.hpp"
#include "stdlib.h"
class Rand :Op {
	private:
    		double operands;
	public:
		Rand(): Op() {
			operators = rand() % 100;
		}
		double evaluate() { return operands; }
		std::string stringify() { return std::to_string(operands); }
};

#endif 
