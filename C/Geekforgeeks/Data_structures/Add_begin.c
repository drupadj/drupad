#include<stdio.h>
#include<stdlib.h>

typedef struct st {

	int roll;
	char name [20];
	float marks;
	struct st *next;
} ST;

void add_begin ( ST **ptr );
void print ( ST *ptr );

int main () {

	ST *hdptr = 0;
	char ch;

	do{
		add_begin(&hdptr);
		printf ("Do you want to add another node? (y/n)\n");
		scanf ("%c ",&ch);
	}while(ch == 'y'||ch == 'Y');

	print(hdptr);

return 0;
}

void print ( ST *ptr ) {

	while ( ptr ) {

		printf ("%d %s %f\n", ptr -> roll, ptr -> name, ptr -> marks );
		ptr = ptr -> next;
	}
}

void add_begin ( ST **ptr ) {

	ST *temp;
	temp = malloc(sizeof(ST));

	printf ("Enter the roll number :");
	scanf ("%d", &temp -> roll );

	printf ("Enter the name :");
	scanf ("%s", temp -> name );
	
	printf ("Enter marks :");
	scanf ("%f", &temp -> marks );
	
	temp -> next = *ptr;
	*ptr = temp;
}
