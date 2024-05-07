/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22   / Binarylinux


Brief  -

strucure in C are like array but record informations 

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, float, char, etc.).

*/

#include <stdio.h>
#include <string.h>


struct my_information
{
    int age ;               // integer float and double can be defined and 
                            //  apllied in main() as same as int 
    int phone_number ;      // so refer integer 
    float height ;

    char name[30] ;             // string will use in main but using strcpy function  
    char address[30] ;          // if string is using give the size of string oterwise
    char email[30] ;            // error will occure

};

typedef struct              // struct can be created as this typedef also 
{
    int age ;               
    int phone_number ;      
    float height ;

    char name[30] ;             
    char address[30] ;          
    char email[30] ;  
    
} Himanshu;


int main(void){

    // struct  my_information s1;


    struct  my_information s1 = {21,123456789,5.5,"himashu kohale","kohalehimanshu22@gmail.com","matunga mumbai"};    //  variable in one line  

    struct  my_information s2 ;

    s1 = s2 ;       // same structure can be defined 
                    // but if values of s2 changes then s2 will not same as s1 


    // s1.age = 21;
    // s1.phone_number = 123456789;
    // s1.height = 5.5;

    // strcpy(s1.name,"Himanshu kohale");      // strcpy() fucntion is to call
    // strcpy(s1.email, "kohalehimanshu22@gmail.com");    // for string in struct
    // strcpy(s1.address,"matunga mumbai");


    printf("Name of Applicant is %s \n",s1.name);
    printf("Age of applicant is %d\n ", s1.age);

    printf("Name of Applicant is %s \n",s2.name);
    printf("Age of applicant is %d\n ", s2.age);


    return 0;

    

}

