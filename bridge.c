#include<stdio.h>
#include"colors.h"
#include<stdlib.h>
#include "readline.h"

#define _GNU_SOURCE
#define END "GR8 B8 M8\n"
#define MIDDLE "Y M8\n"
#define INTRO "U WOT M8\n"

main()
{
  printf(RED INTRO);
  char* intro = input(YELLOW">>"BASE3);
  
  printf(ORANGE MIDDLE);
  char* mid = input(YELLOW">>"BASE3);

  printf(PINK END);
  char* end = input(YELLOW">>"BASE3);

  //if (strcmp(name
}
