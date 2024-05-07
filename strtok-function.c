#include <stdio.h>
#include <string.h>

int main(void){

    char s[] = "this is me";       // string where from some portion is extracting
    char d[] = " ";             // delim 

    char *portion1 = strtok(s,d);
    printf("%s\n",portion1);


    char *portion2 = strtok(NULL,d);
    printf("%s\n",portion2);


    char *portion3 = strtok(NULL,d);
    printf("%s\n",portion3);
    
    return 0;
}