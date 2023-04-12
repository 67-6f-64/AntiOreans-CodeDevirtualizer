#ifndef FISH_HPP_
#define FISH_HPP_

#include "wild.hpp"

#include "fish_context.hpp"
#include "fish_handler.hpp"

class fish : public wild<fish_handler>
{
public:
	fish();

public:
	bool is_signature(instruction_container& vm_entrance);
	
private:
	bool parse_initial_handler(instruction_container& instructions);

private:
	bool update_argument_data();

private:
	fish_context context;
};

/*
	Machine: FISH32 (Black/Red/White)                              

	[Main Machine Info]
	Name = (Black/Red/White)
	MachineId =  0x92858B0A/0x92858B05/0x92858B01
	MachineSignature = 0xADE6C8D5/0xCDE7F678/0x3506D016
	ProductSupport = WinLicense, Virtualizer, Themida
	FileVersionEncoded = 0x12872829
	HardwareEncryption = Not available
	
	[Main Machine Architecture]
	Name = FISH32
	Bits = 32
	MaxCPUs = 8
	Emulates = IA32

	[Main Machine Stats]
	MemoryUsage = 2700/260/120 KB
	Speed = 5/85/90
	Complexity = 37/20/10
	ScoreMultiplier = 1

	[Main Machine Processor]
	RelocateRegs = Yes
	RelocateStages = Yes
	OpcodePermutation = Yes
	RelocateHandlers = Yes
	JoinUndefinedOpcodes = No
	AllowAvidFields = Yes
	ExpandedInstructionSet = Yes
	MergeStages = Yes
	EnableRevirtualization = Yes
	EnableJoinHandlers = Yes
	EnableStageGarbage = Yes
	SmartInstructionsRelocation = Yes
	EnableHandlerTimes = Yes
	EnableBreakPoints = No
	EnableDebugMode = No
	EnableInterruptTrace = No
	EnableFakeJumps = No/Yes/No
	EnableFakeConditionalJumps = Yes/No/No
	PermutateHandlers = Yes/Yes/No
	MutateHandlers = Yes/No/No

	[Specific Opcodes Customization]
	Group1Mnemonics = COMMON_BINARY_OP, COMMON_UNARY_OP, POP, PUSH
	Group1Garbage = [2/8/5]
	Group1Avid = [5..10/20/10]
	Group1Times = [3..5/10/5]

	Group2Mnemonics = LODSB, LODSW, LODSD, SCASB, SCASW, SCASD, CMPSB, CMPSW, CMPSD, STOSB, STOSW, STOSD, MOVSB, MOVSW, MOVSD, PUSHFD, POPFD
	Group2Garbage = [2/5/3]
	Group2Avid = [2..5/15/5]
	Group2Times = [2..4/6/6]

	Group3Mnemonics = JCC_INSIDE, JUMP_OUTSIDE, JUMP_INSIDE, CALL, UNDEF, RET, JCC_OUTSIDE
	Group3Garbage = [2/7/5]
	Group3Avid = [0..0]
	Group3Times = [2..5/10/5]
*/

#endif