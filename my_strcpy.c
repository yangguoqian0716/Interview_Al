#include <stdio.h>

char* my_strcpy(char *dest,char *src)
{
  while((*dest++==*src++)!='\0');

  return dest
}

