# RISK-V-Assembler-and-executor
Not to be confused with a RISC-V Assembler and executor.

Disclaimer: as of 15.01.2024 4PM this project is _still_ not finished. (But I'm working on it)

Program structure: The project consists of 3 main files: the scanner and the parser, which constitute the assembler and finally the VM(which is basically the executor, and as the name implies, it executes the binary code generated by the assembler). These are properly initialized in main.c, where most of the action(read as "segfaults and memory leaks") happens. All the other files in the project are used by the scanner, parser and vm, with the exception of the code used to generate the original opcodes.

The scanner takes chars and generates tokens, the parser takes the tokens and if the everything is in order, generates binary code(ideally). The VM takes that binary code and executes it on the machine. 

Things that need to be done:
  1) Find out why the parser does not work
  2) Write to object files
  3) Make the above more efficient (waste less space)
  4) Finish the VM(basically the executor)
  5) Implement proper error reporting
  6) Fix known memory leaks(there are many)
  7) Properly test the program
  8) Make a proper documentation for the code

Lessons learned:
  1) 

References: 
  Crafting Interpreters - Robert Nystrom (great book)  
  https://www.youtube.com/watch?v=B3y0RsVCyrw  
  https://www.geeksforgeeks.org/huffman-coding-greedy-algo-3/ (for generating the opcodes, at first I tried to implement it myself but it gave me the wrong output and I couldn't for the life of me figure out why, so I took the code from here)  
  https://www.youtube.com/watch?v=G7LJC9vJluU

If I consume unholy amounts of coke and have a little bit of luck(meaning I don't discover yet another immense bug) I might finish it today.
