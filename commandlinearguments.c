/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

Brief - 

argc(argument count) -  is an integer variable that stores the number of command-line argument passed by the user including name of the program, value will always be non-negative

argv(argument vector) - is a character pointer array which print out all the variable/arguments 

*/

#include <stdio.h>

// defining main with arguments
int main(int argc, char* argv[])
{
	printf("You have entered %d arguments:\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}
