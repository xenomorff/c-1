#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char* input(char * prompt)
{
      printf("%s", prompt);
      char* text = malloc(1024);
      char* result = fgets(text, 1024, stdin);
      return result;
}
