#ifndef CISC_HPP_
#define CISC_HPP_

#include "oreans_base.hpp"

class cisc : public oreans_base
{
public:
	bool is_signature(instruction_container& vm_entrance);
	bool devirtualize(uint32_t vm_function, uint32_t vm_entry, instruction_container& vm_entrance);
};

/* 
	Machine: CISC32 (deprecated)

	[Main Machine Info]
	Name = (deprecated)
	MachineId =  0x00000100
	MachineSignature = 0x986E42D6
	ProductSupport = WinLicense, Themida
	FileVersionEncoded = 0x12872829
	HardwareEncryption = Not available

	[Main Machine Architecture]
	Name = CISC32
	Bits = 32
	MaxCPUs = 8
	Emulates = IA32

	[Main Machine Stats]
	MemoryUsage = 70 KB
	Speed = 60
	Complexity = 30
	ScoreMultiplier = 1
*/

#endif