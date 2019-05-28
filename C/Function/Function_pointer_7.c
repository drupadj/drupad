#include<stdio.h>
 
//Create a type using typedef 
typedef int (*pfCallback)(int ,int);
 
 
/* API to perform arithmetic operation */
int arithmatic_operation(pfCallback pfun,int data1, int data2)
{
 int ret = 0;
    
 //calling the callback function pfun
    ret = (*pfun)(data1,data2);
 return ret;                                
}
 
//Function perform addition
int addition(int data1 , int data2)
{
 return (data1 + data2);
}
 
//Function perform subtraction
int subtraction(int data1 , int data2)
{
 return (data1 - data2);
}
 
 
int main(void)
{
 int ret =0;
 
 pfCallback ptr_call_back = NULL;
 
 //Assigned the address of the call back function
    ptr_call_back = addition;
 
    printf("Called arithmetic operation API\n");
 
    ret = arithmatic_operation(ptr_call_back , 5, 4);
    printf("Output is = %d\n",ret);
 
 //Assigned the address of the call back function
    ptr_call_back = subtraction;     
 
    printf("\nCalled arithmetic operation API\n");
 
    ret = arithmatic_operation(ptr_call_back , 5, 4);
    printf("Output is = %d\n",ret);
 
    return 0;
}
