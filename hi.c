#include <stdio.h>
#include "colors.h"

#define BLUE " \033[0;34m "
#define YELLOW " \033[0;33m "

main()
{ 
  printf(BLUE"Hello"YELLOW"World\n"); 
}
