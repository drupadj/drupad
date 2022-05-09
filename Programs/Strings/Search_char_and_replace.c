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
