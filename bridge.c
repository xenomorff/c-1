#include<stdio.h>
#include"colors.h"
#include<stdlib.h>
#include "readline.h"

#define _GNU_SOURCE
#define INTRO "WHO IS U\n"

char* ask(char* question) {
  char * answer;
  printf(RED"%s\n"RESET,question);
  answer = input(">> ");
  printf(RESET);
  return answer;
}


live()
{
  printf("Live\n");
}

die()
{
  printf("Die\n");
}


main()
{
  printf(BASE3 INTRO"\n");
 
  char * name = ask("What is your name?");
  char * quest = ask("What is your quest?");
  if (strcmp(name,"lance\n") == 0 || strcmp(name,"galahad\n ") == 0)
    {
      char * answer = ask("What is fav color?");
      if (strcmp(answer,"blue\n") == 0)
        {
          live();
        }
      else
        {
          die();
        }
    }


  else if (strcmp(name,"robin\n") == 0) {
    char * answer = ask("cap");
    if(strcmp(answer,"7\n") == 0 || strcmp(answer,"8\n") == 0)
      {
        live();
      }
    else
      {
        die();
      }

  }
}
