#include<stdio.h>

#define SET	1

void toggle(int n)
{
    int temp = 1;
 
    while (temp <= n)
    {
#ifdef TOGGLE
        n = n ^ temp;
#elif SET
	n = n | temp;
#else
	n = n & temp;
#endif
 
        temp = temp << 1;
    }

    printf("%d\n", n);
}
 
int main()
{
    int n = 10;
    toggle(n);
    return 0;
}
