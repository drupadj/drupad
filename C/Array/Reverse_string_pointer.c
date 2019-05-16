#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * reverse(char source[]);

int main ()
{

	char source[] = "Nehal";
	char *destination = reverse(source);

	printf ("Source string is and %s Destination string is %s \n",source, destination);

	return 0;
}

char * reverse(char source[])
{

	static char des[] = "";

	strcpy (des, source);

	char *rev = des;

	int count = 0, i = 0;

	for (count = 0; rev[count]; count++);

	i = count / 2;

	char *end = rev + count - 1;

	while (i) {

		char *T = *end;
		*end = *rev;
		*rev = T;
		end --;
		rev++;
		i--;
	}
	return des;
}
