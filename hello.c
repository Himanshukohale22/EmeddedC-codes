#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // poxis 

void delay(unsigned int milliseconds);
int main(){
	
	// for (int i = 0; i < 100; i++)
	// {
		// while (1)
		// {
		// 	printf("%d \n",i);
		// 	printf("Hey Hi!! , HIMANSHU HERE.. \n");
		// 	delay(3000);
		// }


			// printf("%d \n");
			printf("Hey Hi!! , HIMANSHU HERE.. \n");
			delay(5000);

			printf("Hey Hi!! , HIMANSHU HERE.. \n");

		
	// }
	return 0;
	
}

void delay(unsigned int milliseconds) {
    for (unsigned int i = 0; i < milliseconds; i++) {
        for (volatile int j = 0; j < 6000; j++) {} // Adjust this loop to achieve desired delay
    }
}

