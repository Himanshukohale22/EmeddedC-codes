/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22


* Pointers are one of the core components of the C programming language. A pointer can be used to store the memory address of other variables, functions, or even other pointers. The use of pointers allows low-level memory access, dynamic memory allocation, and many other functionality in C.

* A pointer is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.

* The use of pointers in C can be divided into three steps:

    Pointer Declaration
    Pointer Initialization
    Pointer Dereferencing

* Pointers type 
    Interger type - pointer to integer 
    array type    - 
    structure pointer 
    function pointer 
    Double pointer 
    Null pointer 
    void pointer 
    wild pointer 
    constant pointer 
    pointer to constant 

trick 
ptr - pointer address 
*ptr 

refer : https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/?ref=lbp

*/

#include <stdio.h>


void example();
void arithematic();
void arraypt();


int var = 99 ;       // variable declaration 
int* ptr ;          // pointer Declaration



int main(){
    example();
    arithematic();
    arraypt();
    return 0;
    
}

void example(){
        
    ptr = &var;
    printf("Value at ptr : %p \n",ptr);
    printf("Value at var : %d \n", var);
    printf("Value at *ptr : %d \n",*ptr);
}



// pointer increment and decrement
//pointers are incremented and decremented by the size of the data type they point to


void arithematic(){
	
	int *ptr = &var;
	printf("ptr = %u\n", var); 
    printf("var value: %d\n",var);
	ptr++;
	printf("p++ = %u\n", ptr);//p++ = 6422292 +4 // 4 bytes
    printf("var value: %d\n",var);
	ptr--;
	printf("p-- = %u\n", ptr); //p-- = 6422288	 -4 // restored to original value

	float b = 22.22;
	float *q = &b;
	printf("q = %u\n", q); //q = 6422284
	q++;
	printf("q++ = %u\n", q); //q++ = 6422288	 +4 // 4 bytes
	q--;
	printf("q-- = %u\n", q); //q-- = 6422284	 -4 // restored to original value

	char c = 'a';
	char *r = &c;
	printf("r = %u\n", r); //r = 6422283
	r++;
	printf("r++ = %u\n", r); //r++ = 6422284	 +1 // 1 byte
	r--;
	printf("r-- = %u\n", r); //r-- = 6422283	 -1 // restored to original value

	return 0;
}

void arraypt(){

    int array[] = {1,2,3.4,5,6,7,8,9,10};
    int length ;
    length = sizeof(array)/sizeof(array[0]);
    printf("lenght of an array: %d\n",length);

    int* q = array;
    int even_array = 0;
    int odd_array = 0;

    for (int i = 0; i < 10; i++)
    {
        if (*q%2 ==0)
        {
            even_array++;
        }if (*q%2 !=0)
        {
            odd_array++;

        }
        
            
        
    }
    
    printf("even no in aaray: %d\n",even_array);
    printf("odd no in array: %d\n",odd_array);
}

// void length(){
//     int length = 0;
//     int count;
//     for (int i = 0; i < count; i++)
//     {
//         if (array)
//         {


            
//         }
        
//     } 
// }