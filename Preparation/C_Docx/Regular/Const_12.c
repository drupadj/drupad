#include <stdio.h>
 
int main(void) {
 
 int iIndexData1 = 2;            /*Integer variable1*/
 int iIndexData2 = 4;            /*Integer variable2*/
 const int *piIndex = NULL;    /*pointer to const int*/
 
 piIndex = &iIndexData1;  /*Assign address of iIndexData to pointer to const, 
        here integer variable qualify to const integer*/
 
 printf("*piIndex is %d\n",*piIndex); //Display data
 
 piIndex = &iIndexData2; /*It's valid because pointer not constant here*/
 
 printf("*piIndex is %d\n",*piIndex);
 
 return 0;
}
