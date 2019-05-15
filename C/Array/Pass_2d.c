#include <stdio.h>
 
//Size of the created array
#define ARRAY_ROW      3
#define ARRAY_COL      3
 
 
void ReadArray(int(*piData)[ARRAY_COL])
{
 int iRow = 0;
 int iCol = 0;
 
 for (iRow = 0; iRow < ARRAY_ROW; ++iRow)
 {
 for (iCol = 0; iCol < ARRAY_COL; ++iCol)
 {
 printf("%d\n", piData[iRow][iCol]);
 
 }
 }
}
 
 
 
int main(int argc, char *argv[])
{
 //Create an 2D array
 int aiData[ARRAY_ROW][ARRAY_COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
 
 //Pass array as a parameter
 ReadArray(aiData);
 
 return 0;
}
