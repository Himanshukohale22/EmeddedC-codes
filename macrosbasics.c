/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22


macros are the define derivative that can be used in many way's
in C there are pre-defined macros like __data__ ,__time__ etc

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("TIME : %s\n ", __TIME__);
    printf("Date : %s\n ", __DATE__);
    printf("Time_stamp  : %s\n ", __TIMESTAMP__);
    
    return 0 ;
}