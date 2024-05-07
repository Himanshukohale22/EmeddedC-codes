/*

switch-case-break statement
Break-continue statements 

*/
/*

#include <stdio.h>
#include <string.h>

int motor;
int sensors;  

int main(){

    // motor handles pwm upto 255 ;
    // sensors = 3.3 logic level for sensors 100 ;

    printf("Enter the PWM value for motor: ");
    scanf("%d\n",&motor);

    switch (motor)
    {
    case 1:
        if (motor==255)
        {
        printf("Motor is running at full speed\n");
        }
        break;
    case 2:
        if (motor==155)
        {
            printf("Motor is at half of speed\n");
        }
        break;
    case 3:
        if (motor<=155)
        {
            printf("motor is draining battery and not running at good speed\n");
        }
        break;
    case 4:
        if (motor<=255)
        {
            printf("motor is at good state ECO mode\n");
        }
        break;
    
    default:
        printf("motor is not running\n");
        break;

    
    }

    return 0; 
    

}

*/


#include <stdio.h>

int main(void){
    int i =0;
    printf("loop starts\n");
    while (i == 0)
    {
        i++;
        if (i==5) continue;
        printf("%d\n",i);
        // if (i==5) break;

    }
    printf("loop end\n");

    return 0;

}

/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  // A basic example of a switch statement, try altering num to see what happens
  int num = 1;
  switch (num)
  {
    case 1:
      printf("Case 1!\n");
      if (1 == 1) printf("if!\n");
      break;

    case 2:
      printf("Case 2!\n");
      break;

    default:
      printf("Default case!\n");
  }
  printf("Below switch statement!\n");

  // "Practical" example of using fall-through logic to count the number of As
  // and vowels in a string (case insensitive)
  char s[] = "aabAdefghIjKlMNoPqRsTU";
  int length = strlen(s);
  int a = 0;
  int vowel = 0;

  // check each character in the string
  for (int i = 0; i < length; i++)
  {
    // check uppercase version of character so we have less cases to check for
    switch (toupper(s[i]))
    {
      // if it is an A, increment the 'a counter', but let execution fall 
      // through (i.e. no break) so that we count vowels
      case 'A':
        a++;
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vowel++;
      // fall through logic is also used for E,I,O given that the "action" we 
      // want to take (incrementing the count of vowels) is the same for all 
      // of these cases!
    }
  }

  // output the count of a characters and vowels
  printf("a: %d, vowel: %d\n", a, vowel);

  return 0;
}




*/