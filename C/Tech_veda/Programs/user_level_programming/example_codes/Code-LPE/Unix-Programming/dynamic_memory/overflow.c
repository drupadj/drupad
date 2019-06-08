#include<stdio.h>
#include<malloc.h>

int main()
{
	int i,*p;
	p = (int *) malloc (10);
		
	p[11]=10;
//	free(p);
//	p[0]=10;
	printf("\n");
}
