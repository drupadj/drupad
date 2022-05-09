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
