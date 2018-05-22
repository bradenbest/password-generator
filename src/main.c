#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "password.h"

#define DEFAULT_LENGTH 4

int
main(int argc, char **argv)
{
    int len = DEFAULT_LENGTH;
  
    srand(time(0));
  
    if(argv[1])
        if((len = atoi(argv[1])) < 1)
            len = DEFAULT_LENGTH;
  
    printf("Password generated: %s\n", gen_password(len));

    return 0;
}
