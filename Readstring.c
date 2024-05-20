#include <stdio.h>


char *myStrings[] = {"This is string 1", "This is string 2", "This is string 3",
                     "This is string 4", "This is string 5", "This is string 6"
                    };
                  
char *new_way[]   = {'h','e','l','l','0 \n'};


int main(){
  for (int i = 0; i < 6; i++) {
    printf("%s",myStrings[i]);
  }
  printf("shtring %s\n",new_way)

}