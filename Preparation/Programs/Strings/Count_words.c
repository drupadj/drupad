/* C program to count no of words from given input string. */
#include <stdio.h>

/* returns number of words in str */
unsigned countWords(char *str)
{
	unsigned wc = 0; // word count

	// Scan all characters one by one
	while (*str)
	{
		// If next character is a separator, set the
		// state as OUT
		if (*str == ' ' || *str == '\n' || *str == '\t')
			++wc;

		else
			++str;
			
		
		++str;
	}

	return wc;
}

/* Driver program to tes above functions */
int main(void)
{
	char str[] = "One two		 three\n four\tfive ";
	printf("No of words : %d\n", countWords(str));
	return 0;
}

