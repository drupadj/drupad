#include <stdio.h>
 
int myAtoi(char* str)
{
    int res = 0;
 
    /* Initialize sign as positive */
    int sign = 1;
 
    /* Initialize index of first digit */
    int i = 0;
 
    /* If number is negative, then update sign */
    if (str[0] == '-') {
        sign = -1;
 
        /* Also update index of first digit */
        i++;
    }
 
    for (; str[i]; ++i)
        res = res * 10 + str[i] - '0';
 
    /* Return result with sign */
    return sign * res;
}
 
int main()
{
    char str[] = "-123";
   
    int val = myAtoi(str);

    printf("%d \n", val);

    return 0;
}
