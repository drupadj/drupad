#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () 
{
   char *pcBuffer = NULL;
 
   /* Initial memory allocation */
   pcBuffer = malloc(8);
   
   strcpy(pcBuffer, "aticle");
   
   printf("pcBuffer = %s\n", pcBuffer);
 
   /* Reallocating memory */
   pcBuffer = realloc(pcBuffer, 15);
   
   strcat(pcBuffer, "world");
   
   printf("pcBuffer = %s\n", pcBuffer);
 
   free(pcBuffer);
   
   return 0;
}
