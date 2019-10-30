/*This program will create ____ child processes?*/

#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
	fork();
	fork();
	printf("embedded\n");
	return 0;
}
