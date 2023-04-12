#ifndef FISH_CONTEXT_HPP_
#define FISH_CONTEXT_HPP_

#include "wild_context.hpp"

class fish_context : public wild_context
{
	typedef struct fish_operand
	{
		bool is_found;			// idk1/idk2
		uint16_t operand_data;	// idk3/idk5
		uint16_t operand_info;	// idk4/idk6
	} fish_operand;

public:
	void clear();

public:
	fish_operand fish_operands[2];
	
	bool initialized_push_pop_mnemonics;
	bool initialized_unary_mnemonics;
	bool initialized_binary_mnemonics;
};

#endif