/*
@author - Himanshu kohale (Binarylinux)
Date - 2023
github : https://github.com/Himanshukohale22
arrow operator  (->) IN C

*/

#include<stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {10, 20}; // Regular variable of type struct Point
    struct Point *p2 = &p1;    // Pointer to p1 // add of p1 is stored in p2 

    // Accessing members of p1 using the dot operator  (STRUCT PROPERTY)
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);

    // Accessing members of the structure pointed by p2 using the arrow operator
    printf("p2->x = %d, p2->y = %d\n", p2->x, p2->y);

    return 0;
}
