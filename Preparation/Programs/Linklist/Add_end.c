#include<stdio.h>
#include<stdlib.h>

typedef struct st {

    int data;
    struct st *next;

}ST;

void add_end(ST **ptr);

void print(ST *ptr);

int main()
{
    ST *hptr = 0;

    char ch;

    do {

	add_end(&hptr);

        printf("do you want to add another node?\n");

	scanf("%c", &ch);

    } while((ch == 'y') || (ch == 'Y'));

    print(hptr);
}

void print(ST *ptr)
{
    while(ptr)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void add_end(ST **ptr)
{
    ST *temp = (ST *)malloc(sizeof(ST));

    printf("Enter data\n");

    scanf("%d", temp->data);

    if(*ptr == 0)
    {
        temp->next = *ptr;
        *ptr = temp;
    }

    else
    {    
        ST *last = *ptr;

        while(last->next != NULL)
		last = last->next;

	temp->next = last->next;
	last->next = temp;
    }
}
