#include<stdio.h>

int main()
{
    unsigned int x =0x12345678;
    unsigned char *c = (unsigned char*)&x;

    printf("Memory representation: 0x%x 0x%x 0x%x 0x%x\n",c[0],c[1],c[2],c[3]);

    if(c[0] == 0x78)
    {
        printf("Little-endian\n");
    }else if(c[0] == 0x12)
    {
        printf("Big-endian\n");
    }else
    {
        printf("Unknow endianness");
    }

    return 0;
}
