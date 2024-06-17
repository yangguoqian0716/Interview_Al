  1 #include <stdio.h>
  2
  3 int my_strcmp(char *str1,char *str2)
  4 {
  5     while(*str1 != '\0'||*str2 != '\0')
  6     {
  7         if(*str1 != *str2)
  8             return (*str1-*str2);
  9         str1++;
 10         str2++;
 11     }
 12     return 0;
 13 }
 14
 15
 16 int main()
 17 {
 18     char *str1 = "apple";
 19     char *str2 = "banana";
 20
 21     int ret =my_strcmp(str1,str2);
 22
 23     if(ret == 0)
 24     {
 25         printf("%s 等于 %s\n",str1,str2);
 26     }else if(ret > 0)
 27     {
 28         printf("%s 大于 %s\n",str1,str2);
 29     }else
 30     {
 31         printf("%s 小于 %s\n",str1,str2);
 32     }
 33
 34     return 0;
 35 }                                                                                                                                         
