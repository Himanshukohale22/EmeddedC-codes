/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

array in strings 
string[2][3] - list of arrays and size


string funvtion in c
strcat
strncat
strlen
strcmp
strncmp
strcpy -copy string
strchr
strstr
strtok


*/


// C program to illustrate
#include <stdio.h>
#define MAX 50
int main()
{
	char str[MAX];

	// MAX Size if 50 defined
	fgets(str, MAX, stdin);

	printf("String is: \n");

	// Displaying Strings using Puts
	puts(str);     // &[^\n ]s also can be used 
    // scanf("&[^\n]s",str);

	return 0;
}

/*
// C program to demonstrate the use of C string.h
//header file
#include <stdio.h>
#include <string.h>

int main()
{
	// initializing some strings
	char str1[20] = "Geeksfor";
	char str2[20] = "Geeks";

	// using strlen(), strcat()
	printf("Str1: %s\n", str1);
	printf("Length of Str1 before concatenation: %d\n",
		strlen(str1));
	strcat(str1, str2); // concatenating str1 and str2
	printf("Str1: %s\n", str1);

	return 0;
}

*/