/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

A token in C can be defined as the smallest individual element of the C programming language that is meaningful to the compiler. It is the basic component of a C program.

Keywords - The keywords are pre-defined or reserved words in a programming language.
Identifiers - Identifiers are used as the general terminology for the naming of variables, functions, and array
Constants - The constants refer to the variables with fixed values.
Strings - 
Special Symbols
Operators - 

    Arithmetic operators - +,-,/,%
    Relational Operators - ==,!=,<,>,<=,>=
    Logical Operators    - &&(AND) , ||(OR) , !(NOT)
    Bitwise Operator     - & , | , ^ ,  ~ , << , >>  
    Assignment Operators - refer below void assignoperator function.

Format Specifier      Description
    %c              For character type.
    %d              For signed integer type.
    %e or %E        For scientific notation of floats.
    %f              For float type.
    %g or %G        For float type with the current precision.
    %i              Unsigned integer
    %ld or %li      Long 
    %lf             Double
    %Lf             Long double
    %lu             Unsigned int or unsigned long
    %lli or %lld    Long long
    %llu            Unsigned long long
    %o              Octal representation
    %p              Pointer
    %s              String
    %u              Unsigned int
    %x or %X        Hexadecimal representation
    %n              Prints nothing
    %%              Prints % character
*/


// include header
#include <stdio.h>

// declaire variables 
int a ,b ;

// Function declarations
void artithematic(int a, int b);
void assignoperators(int a, int b);
void relationoperator(a,b);

int main() {
    

    // Input numbers from the user
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    // Call the functions and print the results
    addition(a, b);                             // function call back 
    subtraction(a, b);
    assignoperators(a,b);
    relationoperator(a,b);

    return 0;
}

// Function to perform addition

void arithematic(a,b){
    int addition = a+b;
    printf("additino: %d\n",addition);
    int subtraction = a-b;
    printf("substraction: %d\n",subtraction);
    int division = a/b;
    printf("division: %d\n", division);
    int remainder = a%b;
    printf("remainder : %d\n", remainder);
}

void assignoperators(int a, int b){
    printf("a=b: %d\n", a=b );
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %= b: %d\n", a %= b);
    printf("a &= b: %d\n", a &= b);
    printf("a |= b: %d\n)", a |= b);
    printf("a >>= b: %d\n", a >> b);
    printf("a <<= b: %d\n", a << b);
}

void relationoperator(int a,int b){             // if statements
    if (a==b)
    {
        printf("equal to ");
    }else if (a!=b)
    {
        printf("not equal to != ");
    }

    if (a>b)
    {
        printf("a is greter than b ");
    } else if (a>b)
    {
        printf("b is greter than a ");
    } 
    if (a>=b)
    {
        printf("a is greter than or equal to b ");
    } else if (a>=b)
    {
        printf("b is greter than or equal to ");
    } 
}








