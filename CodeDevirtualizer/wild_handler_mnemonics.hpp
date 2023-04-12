#ifndef WILD_HANDLER_MNEMONICS_HPP_
#define WILD_HANDLER_MNEMONICS_HPP_

#include <stdint.h>

enum wild_handler_mnemonics : uint16_t
{
	WILD_MNEMONIC_UNKNOWN = 0x6000,

	WILD_MNEMONIC_UNDEF,

	WILD_MNEMONIC_RESTORE_STACK,
	WILD_MNEMONIC_LOAD_STACK,
	WILD_MNEMONIC_STORE_STACK,

	WILD_MNEMONIC_RESET,
	WILD_MNEMONIC_RESET_EFLAGS,

	WILD_MNEMONIC_CRYPT,

	WILD_MNEMONIC_INVALID = 0xFFFF,
};

#endif