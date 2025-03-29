#include<stdio.h>

int main()
{
    char str[20];
    char a = 0;
    int i = 0, count = 0;

    printf("Enter a string :");

    scanf("%s", str);

    printf("Enter a char :");

    scanf(" %c",&a);

    for(i = 0; str[i]; i++)
    {
	if(str[i] == a)
            count++;
    }
    printf("char %c is present at %d times\n", a, count);
}
/* C program to count no of words from given input string. */
#include <stdio.h>

#define OUT 0
#define IN 1

/* returns number of words in str */
unsigned countWords(char *str)
{
	int state = OUT;
	unsigned wc = 0; // word count

	// Scan all characters one by one
	while (*str)
	{
		// If next character is a separator, set the
		// state as OUT
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		// If next character is not a word separator and
		// state is OUT, then set the state as IN and
		// increment word count
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}

		// Move to next character
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

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20], s2[20];
    int len = 0, i = 0;

    printf("Enter string 1 :");

    scanf("%s", s1);

    printf("Enter string 2 :");

    scanf("%s", s2);

    len = strlen(s1);

    for(i = 0; s2[i]; i++)
	s1[len + i] = s2[i];

    s1[len + i] = '\0';

    printf("%s\n", s1);
}
#include <stdio.h>
#define NO_OF_CHARS 256
 
char getSecondMostFreq(char *str)
{
    /* count number of occurrences of every character */
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    /* Traverse through the count[] and find second highest element */
    int first = 0, second = 0;
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        /* If current element is greater than first then update both first and second */
        if (count[i] > count[first])
        {
            second = first;
            first = i;
        }
 
        /* If count[i] is in between first and second then update second  */
        else if (count[i] > count[second] && count[i] < count[first])
            second = i;
    }
 
    return second;
}
 
// Driver program to test above function
int main()
{
  char str[] = "geeksforgeeks";
  char res = getSecondMostFreq(str);
  if (res != '\0')
     printf("Second most frequent char is %c\n", res);
  else
     printf("No second most frequent character");
  return 0;
}
/* C program to find first  non-repeating character */
#include <stdio.h>
#include <stdlib.h>
#define NO_OF_CHARS 256

/* The function returns index of first
Non repeating character in a string. If all
characters are repeating then returns -1 */
int firstNonRepeating(char* str)
{
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;

        int index = -1;

        for (i = 0; *(str + i); i++) {
                if (count[*(str + i)] == 1) {
                        index = i;
                        break;
                }
        }

        return index;
}

/* Driver program to test above function */
int main()
{
	char str[] = "GEKEKKSS";
	int index = firstNonRepeating(str);
	if (index == -1)
		printf("Either all characters are repeating or "
			"string is empty");
	else
		printf("First Non-repeating character is %c",
			str[index]);
	getchar();
	return 0;
}
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
#include <stdio.h>
#define NO_OF_CHARS 256
 
char Print_all_duplicate_chars(char *str)
{
    /* count number of occurrences of every character */
    int count[NO_OF_CHARS] = {0}, i;
    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        if (count[i] > 1)
        {
	    printf("Duplicate char %c is called %d times", i, count[i]);
	    printf("\n");
        }
    }
}
 
int main()
{
  char str[] = "geeksforgeeks";

  Print_all_duplicate_chars(str);

  return 0;
}
/* Remove characters from the first string which are present in the second string */

#include <stdio.h>
#include <stdlib.h>
#define NO_OF_CHARS 256
 
char* removeDirtyChars(char* str, char* mask_str)
{
    int count[NO_OF_CHARS] = {0}, i = 0, j = 0;

    for (i=0; mask_str[i]; i++)
        (count[mask_str[i]])++;

    for(i = 0; str[i]; i++)
    {
        char temp = str[i];

	if (count[temp] == 0)
	{
	    str[j] = str[i];
	    j++;
	}
    }
 
    /* After above step string is ngring.
      Removing extra "iittg" after string*/
    str[j] = '\0';
 
    return str;
}
 
/* Driver code*/
int main()
{
    char str[] = "geeksforgeeks";
    char mask_str[] = "mask";
    printf("%s\n", removeDirtyChars(str, mask_str));
    return 0;
}
#include <stdio.h>
#include<string.h>
 
char *removeDuplicate(char str[])
{
   // Used as index in the modified string
   int index = 0, n = strlen(str - 1), j;  
    
   // Traverse through all characters
   for (int i = 0; i < n; i++) {
        
     // Check if str[i] is present before it 
     for (j = 0; j < i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
 
int main()
{
   char str[]= "geeksforgeeks";
   printf("%s\n", removeDuplicate(str));
   return 0;
}
#include<stdio.h>

void removeSpaces(char *str)
{
    int count = 0;
 
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}
 
int main()
{
    char str[] = "g  eeks   for ge  eeks  ";
    removeSpaces(str);
    printf("%s\n", str);
    return 0;
}
/* C program to reverse a string word by word 
 *
 * Input : Hello World
 * Output : olleH dlroW
 *
 *
 * */
#include <stdio.h>
 
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 
void reverseWords(char* s)
{
    char* word_begin = s;
 
    char* temp = s;
 
    while (*temp) 
    {
        temp++;

        if (*temp == '\0') 
	{
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') 
	{
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
}
 
int main()
{
    char s[] = "Hello World";
    reverseWords(s);
    printf("%s\n", s);
    return 0;
}
/* C program to reverse a string word by word */
#include <stdio.h>
 
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) 
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 
void reverseWords(char* s)
{
    char* word_begin = s;
 
    char* temp = s;
 
    while (*temp) 
    {
        temp++;

        if (*temp == '\0') 
	{
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') 
	{
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
 
    /* Reverse the entire string */
    reverse(s, temp - 1);
}
 
int main()
{
    char s[] = "i like this program very much";
    reverseWords(s);
    printf("%s\n", s);
    return 0;
}
#include<stdio.h>

int main()
{
    char str[20], sch1, rch2;
    
    int i = 0;

    printf("Enter a string :");

    scanf("%s", str);

    printf("Enter a char to replace:");

    scanf(" %c",&sch1);

    printf("Enter a char to replace with:");

    scanf(" %c",&rch2);

    for(i = 0; str[i]; i++)
    {
	if(str[i] == sch1)
            str[i] = rch2;
    }
    printf("Final string %s\n", str);
}
#include<stdio.h> 
#include<string.h>

#define NO_OF_CHARS 256

void sortString(char str[])
{
    int count[NO_OF_CHARS] = {0}, i, len = strlen(str) -1;

    for (i=0; str[i]; i++)
        (count[str[i]])++;
 
    // Traverse string and increment
    // count of characters
    for (i = 0; i < len; i++)
    { 
        // 'a'-'a' will be 0, 'b'-'a' will be 1,
        // so for location of character in count
        // array we will do str[i]-'a'.
        count[str[i]-'a']++;
    }
    // Traverse the hash array and print
    // characters
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        for (int j = 0; j < count[i]; j++)
            printf("%c ", 'a' + i);
    }

    printf("\n");

}
 
int main()
{
    char s[] = "geeksforgeeks";   
    sortString(s);   
    return 0;
}
#include<stdio.h>

int main ()
{
    char src[10], des[10];
    int i = 0;

    printf("Enter a string :");

    scanf("%s", src);

    for(i = 0; src[i]; i++)
        des[i] = src[i];

    des[i] = '\0';

    printf("SRC string %s DES string %s\n", src, des);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20], s2[20];
    int len1 = 0, len2 = 0;

    printf("Enter string 1 :");
    scanf("%s", s1);
    len1 = strlen(s1) -1;

    printf("Enter string 2 :");
    scanf("%s", s2);
    len2 = strlen(s2) -1;

    if(len1 > len2)
    {
        printf("String 1 is greater\n");
    }
    else if(len1 < len2)
    {
        printf("String 2 is greater\n");
    }
    else {
	printf("Equal\n");
    }
}
/* C Program to reverse a string without using temp variable */
#include<stdio.h>
#include<string.h>

/* Function to reverse string and return reversed string */
char* ReverseString(char *str, int start, int end)
{

    // Iterate loop upto start not equal to end
    while (start < end)
    {
        // XOR for swapping the variable
        str[start] = str[start] ^ str[end];
        str[end] = str[end] ^ str[start];
        str[start] = str[start] ^ str[end];
 
        ++start;
        --end;
    }

    return str;
}
 
int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%s", s);

    int start = 0, end = strlen(s) - 1;

    printf("%s\n", ReverseString(s, start, end));

    return 0;
}
#include<stdio.h>
#include<string.h>

int main ()
{
    char src[10], des[10];
    int i = 0, j = 0;

    printf("Enter a string :");

    scanf("%s", src);

    i = strlen(src);

    for(i = i - 1, j = 0; i >= 0; i--, j++) 
            des[j] = src[i];

    des[j] = '\0';

    printf("SRC string %s DES string %s\n", src, des);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main ()
{
    char src[10];
    int i = 0, j = 0, temp = 0;

    printf("Enter a string :");

    scanf("%s", src);

    i = strlen(src);

    printf("%d\n", i);
    for(i = i - 1, j = 0; i > j; i--, j++)
    {
        temp = src[i];
	src[i] = src[j];
	src[j] = temp;
    }

    printf("DES string %s\n", src);

    return 0;
}
/* C program to reverse a string with special characters */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Returns true if x is an alphabetic character, false
// otherwise
bool isAlphabet(char x)
{
    return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}
 
void reverse(char str[])
{
    int r = strlen(str) - 1, l = 0;
 
    while (l < r) {
        // Ignore special characters
        if (!isAlphabet(str[l]))
            l++;
        else if (!isAlphabet(str[r]))
            r--;
        // Both str[l] and str[r] are not special
        else {
            char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
	    l++;
	    r--;
        }
    }
}
 
int main()
{
    char str[] = "a!!!b.c.d,e'f,ghi";
    printf("Input string: %s\n", str);
    reverse(str);
    printf("Output string: %s\n", str);
    return 0;
}
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void preserveSpace(char str[])
{
    int n = strlen(str);
 
    int start = 0;
    int end = n - 1;
 
    // Move both pointers toward each other
    while (start < end) {
 
        // If character at start or end is space,
        // ignore it
        if (str[start] == ' ') {
            start++;
            continue;
        }
        else if (str[end] == ' ') {
            end--;
            continue;
        }
 
        // If both are not spaces, do swap
        else {
	    char temp = str[start];
	    str[start] = str[end];
	    str[end] = temp;
            start++;
            end--;
        }
    }
}
 
int main()
{
    char str[] = "internship at geeks for geeks";
    preserveSpace(str);
    printf("%s\n", str);
    return 0;
}
#include<stdio.h>
#include<string.h>

int countNonEmptySubstr(char str[])
{
   int n = strlen(str);
   return n*(n+1)/2;
}
 
int main()
{
    char s[] = "abcde";
    printf("%d\n", countNonEmptySubstr(s));
}
#include<stdio.h>
  
/* Swaps strings by swapping pointers */ 
void swap1(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}  
   
int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";
  swap1(&str1, &str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   
/* Swaps strings by swapping data*/
void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}  
   
int main()
{
  char str1[10] = "geeks";
  char str2[10] = "forgeeks";
  swap2(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}
