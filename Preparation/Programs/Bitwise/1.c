#include<stdio.h>

typedef union _check_endian
{
    unsigned int data;
    char databuff[4];

}check_endian;

int countSetBits(unsigned int num)
{
    int count = 0;

    while(num)
    {
        count = count + (num & 1);

	num = num >> 1;
    }

    return count;
}

int main()
{
#if 0
    check_endian uCheckEndian;

    uCheckEndian.data = 0x11223344;

    if(uCheckEndian.databuff[0] == 0x44)
    {
        printf("Little Endian\n");
    }

    unsigned int uCheckData = 0x12345678;

    uCheckData = ((uCheckData & 0x0000000F) << 28)
	    	   | ((uCheckData & 0x000000F0) << 20)
		   | ((uCheckData & 0x00000F00) << 12)
		   | ((uCheckData & 0x0000F000) << 4)
		   | ((uCheckData & 0x000F0000) >> 4)
		   | ((uCheckData & 0x00F00000) >> 12)
		   | ((uCheckData & 0x0F000000) >> 20)
		   | ((uCheckData & 0xF0000000) >> 28);

    printf("%x\n", uCheckData);

#endif

    int Data = 10;
    int sBits = countSetBits(Data);

    printf("%d\n", sBits);

    return 0;
}

