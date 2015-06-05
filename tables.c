#include <stdio.h>
#include "colors.h"

long long  number = 1;
long long m;

main(int argc, char *argv[])
{ 
  printf(CLEAR); 
  printf(ORANGE"Multiplications Tables!\n");
  if (argc >= 2)
    number = atoi(argv[1]);
  for ( m=12; m>=1; m--){
    printf(BLUE"%lld x %lld = %lld\n",number,m,(number * m));
  }
}
