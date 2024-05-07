/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22


Array in C is one of the most used data structures in C programming. It is a simple and fast way of storing multiple values under a single name.

1D array
2D array
3D array


*/

// Example 1 
/*
// C Program to illustrate element access using array

#include <stdio.h>
int main()
{

	// array declaration and initialization
	int arr[5] = { 15, 25, 35, 45, 55 };

	// accessing element at index 2 i.e 3rd element
	printf("Element at arr[2]: %d\n", arr[2]);

	// accessing element at index 4 i.e last element
	printf("Element at arr[4]: %d\n", arr[4]);

	// accessing element at index 0 i.e first element
	printf("Element at arr[0]: %d", arr[0]);

	return 0;
}*/


// Example 2 
// C programm for reversing the array 
#include <stdio.h>

int arr[10] = { 15, 25, 35, 45, 55 };

void reverse_array();
void largest_in_array();
void length();

int main(){
    printf("arr[0]: %d\n",arr[0]);
    printf("arr[1]: %d\n",arr[1]);
    printf("arr[2]: %d\n",arr[2]);
    printf("arr[3]: %d\n",arr[3]);
    printf("arr[4]: %d\n",arr[4]);
    reverse_array();
    largest_in_array();
    length();

}

void reverse_array(){
    for (int i = 0; i < 5; i++)
    {
        arr[i]=arr[5-i-1];
        printf("arr[i] %d\n",arr[i]);
        
    }

}

void largest_in_array(){
    int max = arr[0];  // take a reference frame
    label:
    for (int i = 0; i < 5; i++)
    {
        max < arr[i];
        arr[i] = max;

    }
    

    printf("max %d\n",max);
    
}

// for length of array 

void length(){
    int length;
    length = sizeof(arr)/sizeof(arr[0]);
    printf("lenght %d\n",length);
}

