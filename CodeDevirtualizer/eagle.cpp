#include "eagle.hpp"

#include <idp.hpp>

bool eagle::is_signature(instruction_container& vm_entrance)
{
	msg("[CodeDevirtualizer] EAGLE machine identified.\n");
	return true;
}

bool eagle::devirtualize(uint32_t vm_function, uint32_t vm_entry, instruction_container& vm_instructions)
{
	msg("[CodeDevirtualizer] EAGLE machines are currently not supported.\n");
	return false;
}