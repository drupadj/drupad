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
