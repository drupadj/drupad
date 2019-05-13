#include <stdio.h>
 
union Information
{
    char acName[15];
    int iAge;
};
 
const union Information Info1;
 
int main()
{
    Info1.iAge =24;
    
    printf("%d",Info1.iAge);
    
    return 0; // Error
}
