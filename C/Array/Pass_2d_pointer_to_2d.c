/*
Passing 2d array to function, using the pointer to 2D array

If int aiData[3][3] is a 2D array of integers, then &aiData would be pointer the 2d array that has 3 row and 3 column.
*/


#include <stdio.h>
 
//Size of the created array
#define ARRAY_ROW      3
#define ARRAY_COL      3
 
 
void ReadArray(int(*piData)[ARRAY_ROW][ARRAY_COL])
{
 int iRow = 0;
 int iCol = 0;
 
 for (iRow = 0; iRow < ARRAY_ROW; ++iRow)
 {
 for (iCol = 0; iCol < ARRAY_COL; ++iCol)
 {
 printf("%d\n", (*piData)[iRow][iCol]);
 
 }
 }
 
}
 
 
 
int main(int argc, char *argv[])
{
 //Create an 2D array
 int aiData[ARRAY_ROW][ARRAY_COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
 
 //Pass array as a parameter
 ReadArray(&aiData);
 
 return 0;
}
