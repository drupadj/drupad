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
