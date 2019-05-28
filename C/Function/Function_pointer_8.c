#include <stdint.h>
#include <stdio.h>
 
 
int arithmatic_result = 0;
 
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
void addition(int data1 ,int data2)
{
 arithmatic_result = data1 + data2;
}
 
void subtraction(int data1 ,int data2)
{
 arithmatic_result = data1 - data2;
}
 
void multiplication(int data1 ,int data2)
{
 arithmatic_result = data1 * data2;
}
 
void addition_message(const char *pcMessage)
{
 printf("%s = %d\n",pcMessage,arithmatic_result);
}
 
void subtraction_message(const char *pcMessage)
{
 printf("%s = %d\n",pcMessage,arithmatic_result);
 
}
 
void multiplication_message(const char *pcMessage)
{
 printf("%s = %d\n",pcMessage,arithmatic_result);
 
}
 
 
/*Function which selects transaction and processing 
method on the basis of Menustate and substate */
 
 
void arithmatic_operation(States primary_state, SubStates secondary_state)
{
    switch (primary_state)
    {
        case Arithmatic:
         
            switch (secondary_state)
            {
                case SubState1:
                addition(10,2);
                break;
                
                case SubState2:
                subtraction(10,2);
                break;
               case SubState3:
                multiplication(10,2);
                break;
 
                default:
                break;
            }
        break;
 
        case Message:
            switch (secondary_state)
            {
                case SubState1:
                addition_message("Addition of two numbers");
                break;
                
                case SubState2:
                subtraction_message("Subtraction of two number");
                break;
               case SubState3:
                multiplication_message("Multiplication of two number");
                break;
 
                default:
                break;
            }
        break;
        default:
        break;
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
