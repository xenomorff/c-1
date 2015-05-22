#include <stdio.h>
#include "colors.h"
#include <unistd.h>

#define COUNT_LENGTH 380000

main()
{
  int badgers;
  int mushroom;
  int verse;
  
  clear_screen();
while(1)
  for( verse = 1; verse <= 5; verse++){     
    for ( badgers = 1; badgers <= 12; badgers++ ){
      usleep(COUNT_LENGTH);
      printf(VIOLET"badgers\n");
      }

    if(verse<5)      
      for ( mushroom = 1; mushroom <=2; mushroom++){
        usleep(COUNT_LENGTH);
        printf(RED"mushroom\n");
        }

    else{
      printf("snake\n");
      usleep(5);
      }
  }
}

