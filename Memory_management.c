/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22   / Binarylinux


Brief  -

Memory management in C

* Memory management is the process of handling how much memory a program uses through different operations
* Memory management is the process of handling how much memory a program uses through allocation, reallocation and deallocation (often referred to as "freeing")

* memory in c 

- Static memory 
Static memory is memory that is reserved for variables before the program runs.

- Dynamic memory (runtime memory allocation)
Dynamic memory is memory that is allocated after the program starts running.
    - stack memory
    *  Stack memory is a type of dynamic memory which is reserved for variables that are declared inside functions. 
    * Variables declared inside a function use stack memory rather than static memory.
    * Recursion that repeats itself too many times may take up too much stack memory. When that happens it is called a stack overflow.
    * 


Functions 
- malloc(size)    // size in bytes 
- calloc(ammount,size)
- relloc(pointer,size)  //here pointer is for memory add 
 

Allocation -
* The process of reserving memory is called allocation

malloc(size);
calloc(ammount,size);

* The data in the memory allocated by malloc() is unpredictable. To avoid unexpected values, make sure to write something into the memory before reading it.

* Unlike malloc(), the calloc() function writes zeroes into all of the allocated memory. However, this makes calloc() slightly less efficient.


use sizeof() operator to perfectly allocate memory

int *ptr1, *ptr2 ;
ptr1 = malloc(sizeof(*ptr1));
ptr2 = alloc(1,sizeof(*ptr1));


Reallocate memory - 

* if memory allocted isnt enough then memory can be reallocate 
using same ptr add and increse size in byte

* The realloc() function tries to resize the memory at ptr1 and return the same memory address. If it cannot resize the memory at the current address then it will allocate memory at a different address and return the new address instead.

* relloc(ptr,size);




*/

#include <stdio.h>
#include <stdlib.h>  // dynamic function malloc/calloc 



// int my_Int[20]  ;       //this are static variable which values can be changed (20*4 =80 byte)
// float My_Float ;            
// double My_double ; 
// char My_char;




int main(){

    // sizeof() to find size of vaiables 

    // printf("%lu\n", sizeof(my_Int));      // 4 bytes
    // printf("%lu\n", sizeof(My_Float));    // 4 bytes
    // printf("%lu\n", sizeof(My_double));   // 8 bytes
    // printf("%lu\n", sizeof(My_char));     // 1 byte

    // int *students;
    // int numStudents = 12;
    // // students = calloc(numStudents, sizeof(*students));
    // students = calloc(numStudents,sizeof(*students));
    // printf("%lu \n", numStudents *(sizeof(*students))); // 48 bytes 

    // int *ptr;
    // ptr = calloc(4, sizeof(*ptr));              // 4*4 bytes = 16 bytes memory size 

    // // Write to the memory
    // *ptr = 2;           // fisrt ptr[0] = 2
    // ptr[1] = 4;
    // ptr[2] = 6;

    // // Read from the memory
    // printf("%d\n", *ptr);       // first number ptr[0] = 2
    // printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);  //ptr[3] will be 0 as no value declaired in scop


    // int *ptr1 = malloc(4);                // 4 bytes to ptr1
    // char *ptr2 = (char*) ptr1;             // char 1 byte 
    // ptr1[0] = 1684234849;               
    // printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]); 

    // // as ptr1[0]/ptr2[0] = a / b / c /d as ptr2 has not specific data type but its a sequnce of //char as is defined  


    int *ptr1, *ptr2, size;

    // Allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    // Resize the memory to hold six integers
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d bytes reallocated at address %p \n", size, ptr2); 



    //deallocated memory free memory 

    free(ptr1); // free allocated memory 


    // A memory leak happens when dynamic memory is allocated but never freed.

}

