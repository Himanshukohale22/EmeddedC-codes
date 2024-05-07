#include <stdio.h>

int factorial();

int main(){
    int n ;
    int fact = 1 ;
    printf("enter a number: ");
    scanf("%d",&n);

    // while (n>=1)       // when to do using normal method
    // {
    //     fact = n*fact;
    //     n--;
    // }

    fact = factorial(n);
    printf("%d ",fact);

    return fact;
}

int factorial(int n){     //using recurrsion method 

    if (n==1)
    {
        return 1;
    }else 

    return n * factorial(n-1);
}