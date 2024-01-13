#ifndef RISKV_PARSER
#define RISKV_PARSER

#include <stdbool.h>
#include "scanner.h"
#include "table.h"

typedef struct
{
	Token current;
	Token previous;
	bool hadError;
	bool panicMode;

	Table instructions;	// used to convert from the token to the proper bytecode
	Table registers;
} Parser;

Parser* initParser(char** instructions, char** instruction_values, char** registers, char** register_values, int size);

#endif