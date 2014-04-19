#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "password.h"

int main(int argc, char **argv)
{
  srand(time(0));
  int len = 4;
  if(argc > 1)
    len = atoi(argv[1]);

  printf("Password generated: %s\n", gen_password(len));

  return 0;
}
