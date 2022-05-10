#include<stdio.h>
#include<stdlib.h>

int main()
{

int n = 100;

int *ptr = (int *)malloc(n);

*ptr = n;

int *ptr1 = ptr + 1;

int size = ptr1[-1];

printf("SIZE : %d\n", size);

}
