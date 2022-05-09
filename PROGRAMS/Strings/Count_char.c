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
