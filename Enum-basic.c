/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22   / Binarylinux


Brief  -

c-enum = c- enumaration (specifically listed)

An enum is a special type that represents a group of constants (unchangeable values).


*/

#include <stdio.h>

enum Election_vote {
    Ayes = 1,                  // default value for 1st variable is 0
    Noes ,                  // value = 1 and similarly for others 
    obstain                 // But value can be change using integer and other data types 
                            // and after that the number will be next number of member 
    

};

int main(){

    enum Election_vote My_votes = Ayes ; 

    // printf("My vote %d \n", My_votes);

    switch (My_votes)
    {
    case 1:
        printf("your vote is in favour of public ");
        break;
    case 2:
        printf("your vote is not in favour of public ");
        break;
    case 3:
        printf("your vote is nither in  favour of public nor is not");
        break;
    // default:
    //     break;
    }

    return 0;

}