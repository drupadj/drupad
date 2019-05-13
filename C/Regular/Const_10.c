#include<stdio.h>
#include <string.h>
 
union Information
{
    char acName[15];
    int iAge;
};
const union Information Info1;
 
int main()
{
    strcpy(Info1.acName, "aticleworld");
    printf("%s", Info1.acName);
  
    return 0; // Prints aticleworld
}
