/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22

To check number is prime or even

*/

#include <stdio.h>

int number ;
void checkFunciton(int number);
int main(){
    printf("Enter number to chek:");
    scanf("%d \n",&number);
    checkFunciton(number);
    return 0;
}

void checkFunciton(number){
    if (number % 2 == 0)
    {
        printf("number is Even: %d \n",number );
    }else printf("number is odd: %d \n", number);
}