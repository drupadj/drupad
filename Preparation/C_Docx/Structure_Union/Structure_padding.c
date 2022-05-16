#include <stdio.h>
#include <stdlib.h>
 
 
// size = 10, alignment = 2-byte, no padding bytes for these struct members
 
#pragma pack(push, 2)
typedef struct {
 
 double A; // 8-byte
 char B; // 1-byte
 char C;   // 1-byte
 
} InfoData;
#pragma pack(pop)
 
 
/* main function */
int main(int argc, char *argv[]) {
 
 printf("\n Size of Structure = %d\n\n\n\n",sizeof(InfoData)); //10
 return 0;
}
