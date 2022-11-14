#include<stdio.h>
#include<stdlib.h>

typedef struct st {

    int data;

    struct st *next;

}ST;

void add_begin(ST **ptr);
void print(ST *ptr);

int main()
{
    ST *hptr = 0;

    char ch;

    do {
	    add_begin(&hptr);
	    printf("Do you want to add new node? :");
	    scanf("%c ", &ch);

    } while((ch == 'Y') || (ch == 'y'));

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

void add_begin(ST **ptr)
{
    ST *temp = (ST *)malloc(sizeof(ST));

    printf("Enter data\n");

    scanf("%d", temp->data);

    temp->next = *ptr;

    *ptr = temp;
}
