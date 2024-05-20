/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

fibonnacci series 
0+1 = 1  //   
1+1 = 2  // a
1+2 = 3  // (a-1) + (a) 
2+3 = 5  // (a-1) + (a)
3+5 = 8
5+8 = 13..

previous last digit added + out of last additon = nex no in serise 

*/


#include <stdio.h>
#include <math.h>

void fibbonacci(n);
int n ;


int main()
{   
    printf("enter number : %d\n" , &i);
    
    for (int i = 0; i < n; i++)
    {
        printf("fibonnnaci series : %d\n",n);
    
    }
    
}


void fibbonacci(n){
    
    if (n<=1)
    {
        return 1 ;
    }else return (n-1) + n ;
    
    
}
