#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "password.h"

#define DEFAULT_LENGTH 4

int main(int argc, char **argv)
{
  srand(time(0));
  int len;
  if(argc > 1) {
    len = atoi(argv[1]);
    if (len < 0) {
      len = DEFAULT_LENGTH;
    }
  } else {
    len = DEFAULT_LENGTH;
  }
  printf("Password generated: %s\n", gen_password(len));

  return 0;
}
