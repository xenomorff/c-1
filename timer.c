#include <stdio.h>
#include <unistd.h>
#include "colors.h"


#define TRUE 1
#define FALSE 0

main()
{
  int hundredths = 0; 
  
  while(TRUE){
    printf(CLEAR);
    printf(RED"HUNDREDTHS:\n");
    printf(YELLOW"%d\n", hundredths);
    sleep(.1);
    hundredths +=1;
  }
}
