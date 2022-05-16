#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int *piData1 = NULL;
 int *piData2 = NULL;
 
 //allocate memory
 piData1 = malloc(sizeof(int));
 
 *piData1 = 100;
 
 printf(" *piData1 = %d\n",*piData1);
 
 piData2 = piData1;
 
 printf(" *piData1 = %d\n",*piData2);
 
 //deallocate memory
    free(piData1);
    
    *piData2 = 50;
    
    printf(" *piData2 = %d\n",*piData2); //50
    
return 0;
}
