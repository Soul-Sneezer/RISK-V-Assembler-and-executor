#ifndef RISKV_PARSER
#define RISKV_PARSER

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "scanner.h"
#include "table.h"
#include "scanner.h"
#include "vm.h"

typedef struct
{
	Token current;
	Token previous;

	FILE* code_fd;
	FILE* header_fd;

	FILE* tcode_fd;
	FILE* theader_fd;
	Table* instructions;	// used to convert from the token to the proper bytecode
	Table* registers;
} Parser;

Parser* initParser(char** instructions, char** instruction_values, char** registers, char** register_values, const char* header_file, const char* code_file, int size);
void freeParser(Parser* parser);

void parse(Parser* parser, Scanner* scanner);
//void createInstructionTable(Parser* parser, int size, char** words, char** values);
//void createRegisterTable(Parser* parser, int size, char** words, char** values);
//void openCodeFile(const char* code_file);
//void openHeaderFile(const char* header_file);

//void openCodeTestFile(const char* code_file);
//void openHeaderTestFile(const char* header_file);
#endif
