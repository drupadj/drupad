#include <stdint.h>
#include <stdio.h>
 
//used to store result
int arithmatic_result = 0;
 
//used to store data1
int data1 = 5;
 
//used to store data2
int data2 = 4;
 
//Menu state
typedef enum {
 
Arithmatic = 0, 
Message,
Laststate
}States;
 
 
//Substates
typedef enum {
 
SubState1 = 0, 
SubState2, 
SubState3,
LastSubState
}SubStates;
 
/*Functions which are called from nested switch statement.*/
void addition(void)
{
 arithmatic_result = data1 + data2;
}
 
void subtraction(void)
{
 arithmatic_result = data1 - data2;
}
 
void multiplication(void)
{
 arithmatic_result = data1 * data2;
}
 
void addition_message(void)
{
 printf("%s = %d\n","Addition",arithmatic_result);
}
 
void subtraction_message(void)
{
 printf("%s = %d\n","subtraction",arithmatic_result);
 
}
 
void multiplication_message(void)
{
 printf("%s = %d\n","multiplication",arithmatic_result);
 
}
 
 
//Ceate typedef of pointer to function 2D array
typedef void (*const afEventHandler[Laststate][LastSubState])(void);
 
 
//2D array of function pointer 
void arithmatic_operation(States primary_state, SubStates secondary_state)
{
  static afEventHandler  aArithmaticFunction= {
 
 [Arithmatic] = {[SubState1]= addition,[SubState2]= subtraction, [SubState3]= multiplication},
 [Message] ={[SubState1]= addition_message,[SubState2]= subtraction_message, [SubState3]= multiplication_message},
 };
    
    if(aArithmaticFunction[primary_state][secondary_state] != NULL) //Check NULL pointer
    {
        (*aArithmaticFunction[primary_state][secondary_state])();
    }
}
 
 
int main(void)
{
   
   // Arithmatic operation
   arithmatic_operation (Arithmatic, SubState1);
    
   //Display result of mathmetic operation
   arithmatic_operation (Message, SubState1);
   
   return 0;
 
}
