// C program to compare two files and report mismatches

/*

Input :
file1.txt contains
it is
fun
file2.txt contains
it is
run

Output :
Line Number : 2         Error Position : 1
Total Errors : 1


*/


/*

Steps :
1.> Open two file using File pointer in read only mode.
2.> Fetch data of file in two char variable one by one until end of file.
3.> If variable encounter new line then increment line number and reset position to zero.
4.> If variables are not equal then increment number of error and print error line as well as error index.

*/



// C program to compare two files and report 
// mismatches by displaying line number and 
// position of line. 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
  
void compareFiles(FILE *fp1, FILE *fp2) 
{ 
    // fetching character of two file 
    // in two variable ch1 and ch2 
    char ch1 = getc(fp1); 
    char ch2 = getc(fp2); 
  
    // error keeps track of number of errors 
    // pos keeps track of position of errors 
    // line keeps track of error line 
    int error = 0, pos = 0, line = 1; 
  
    // iterate loop till end of file 
    while (ch1 != EOF && ch2 != EOF) 
    { 
        pos++; 
  
        // if both variable encounters new 
        // line then line variable is incremented 
        // and pos variable is set to 0 
        if (ch1 == '\n' && ch2 == '\n') 
        { 
            line++; 
            pos = 0; 
        } 
  
        // if fetched data is not equal then 
        // error is incremented 
        if (ch1 != ch2) 
        { 
            error++; 
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos); 
        } 
  
        // fetching character until end of file 
        ch1 = getc(fp1); 
        ch2 = getc(fp2); 
    } 
  
    printf("Total Errors : %d\t", error); 
} 
  
// Driver code 
int main() 
{ 
    // opening both file in read only mode 
    FILE *fp1 = fopen("file1.txt", "r"); 
    FILE *fp2 = fopen("file2.txt", "r"); 
  
    if (fp1 == NULL || fp2 == NULL) 
    { 
       printf("Error : Files not open"); 
       exit(0); 
    } 
  
    compareFiles(fp1, fp2); 
  
    // closing both file 
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
} 


/*

Line Number : 2         Error Position : 1
Total Errors : 1

*/
