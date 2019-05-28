#include <stdio.h>
#include <stdlib.h>
 
//function used to add two numbers
int AddTwoNumber(int iData1 ,int iData2)
{
  return (iData1 + iData2);
}
 
int main(int argc, char *argv[])
{
 
 int iRetValue = 0;
 
 //Declaration of function pointer
 int (*pfAddTwoNumber)(int,int) = NULL;
 
 //initialise the function pointer
 pfAddTwoNumber = AddTwoNumber;
 
 //Calling the function using function pointer
 
 iRetValue = (*pfAddTwoNumber)(10,20);
 
 //display addition of two number
 printf("\n\nAddition of two number = %d\n\n",iRetValue);
 
 
 return 0;
}
