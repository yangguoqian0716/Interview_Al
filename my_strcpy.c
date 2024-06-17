#include <stdio.h>

void my_strcpy(char *dest,char *src)
{
  while((*dest++=*src++)!='\0');
}

int main()
{
  char source[] = "Hello World!";
  char destination[50];

  my_strcpy(destination,source);

  printf("source str: %s\n",source);
  printf("destination str: %s\n",destionation);

  return 0;
}


