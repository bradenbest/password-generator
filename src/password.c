#include <stdlib.h>
#include <string.h>

#include "password.h"

static const char *vowels = "aeiou";
static const char *consonants = "bdghjkmnprstwy";

char *gen_password(int len)
{
  int i,j = 0;
  char *ret = calloc(sizeof(char), (len*2)+1);
  for(i = 0; i < len; i++){
    if(!(rand()%4)){
      ret[j++] = vowels[rand()%strlen(vowels)];
    } else {
      ret[j++] = consonants[rand()%strlen(consonants)];
      ret[j++] = vowels[rand()%strlen(vowels)];
    }
  }
  ret[j] = 0;
  j = 0;
  while(ret[j]){
    if(!(rand()%3))
      ret[j] -= ' ';
    j++;
  }
  return ret;
}
