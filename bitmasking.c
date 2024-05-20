// #include <stdio.h>


// int a = 0x1010 ; 




// int main(){

//     a = (a << 1);
//     printf("%u\n",a);
    
// }

// #include <stdio.h>

// int main() {
//     unsigned int num = 10; // Binary representation: 0000 1010

//     // Multiply by 4 using left shift by 2 positions
//     unsigned int result1 = num << 2; // Binary representation: 0010 1000
//     printf("Result of left shift (multiplication): %u\n", result1); // Output: 40

//     // Divide by 2 using right shift by 1 position
//     unsigned int result2 = num >> 1; // Binary representation: 0000 0101
//     printf("Result of right shift (division): %u\n", result2); // Output: 5

//     return 0;
// }


#include <stdio.h>

int main() {
    // Binary representation of the number 10
    int binaryNum = 0x1010; // 0b prefix indicates binary representation
    printf("Binary representation of 10: %X\n", binaryNum); // Output: 10

    // You can perform bitwise operations on binary literals
    int result = 0b1010 & 0b1100; // Bitwise AND operation
    printf("Bitwise AND of 1010 and 1100: %d\n", result); // Output: 8 (0b1000 in binary)

    return 0;
}
