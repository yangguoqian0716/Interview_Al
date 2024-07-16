# 双指针法

void reverseString(char *s,int sSize)
{
  int left = 0;
  int right = sSize - 1;

  while(left < right)
    {
      char temp = s[left];
      s[left++] = s[right];
      s[right--] = temp;
    }
  
}
