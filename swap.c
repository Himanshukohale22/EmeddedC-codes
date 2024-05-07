/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

* Swapping two values

*/


#include <stdio.h> 

// void swap(int* a, int* b)          // swappig using pointers changes
// { 
// int temp = *a; 
// *a = *b; 
// *b = temp; 
// } 
void swap();            
// Driver code 
int main() 
{ 
int a = 10, b = 20; 
swap(a, b); 
printf("Values after swap function are: %d, %d", 
		a, b); 
return 0; 
}

void swap(int a,int b){     // swapping using minor changes.  
    a = a+b;
    b = a-b;
    b = (a-b)/2;
    a = (a+b)/2;
    printf("b : %d \n", b);
    printf("a : %d \n", a);
   
}

//pointer to poiner 
// use to store address of one pointer to another pointer 

