// C program to find first
// non-repeating character
#include <stdio.h>
#include <stdlib.h>
#define NO_OF_CHARS 256

/* The function returns index of first
repeating character in a string. If all
characters are repeating then returns -1 */
int firstRepeating(char* str)
{
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;

	int index = -1;

	for (i = 0; *(str + i); i++) {
		if (count[*(str + i)] > 1) {
			index = i;
			break;
		}
	}

	return index;
}

/* Driver program to test above function */
int main()
{
	char str[] = "drupad";
	int index = firstRepeating(str);
	if (index == -1)
		printf("Either all characters are repeating or "
			"string is empty");
	else
		printf("First repeating character is %c",
			str[index]);
	getchar();
	return 0;
}
