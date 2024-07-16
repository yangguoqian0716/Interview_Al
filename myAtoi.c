#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(const char *str)
{
    int sign = 1;
    long long result = 0;//转换结果，使用long long防止溢出
    const char *p = str;

    //跳过空白字符
    while(*p == ' ')
    {
        p++;
    }

    //处理符号
    if(*p == '-' || *p == '+')
    {
        if(*p == '-')
        {
            sign = -1;
        }
        p++;
    }

    //处理数字字符
    while(isdigit(*p))
    {
        result = result * 10 + (*p - '0');
        if(result * sign > INT_MAX)
        {
            return INT_MAX;
        }
        if(result * sign < INT_MIN)
        {
            return INT_MIN;
        }
        p++;
    }

    return (int)(result * sign);
}
