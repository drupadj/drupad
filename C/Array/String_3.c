/*



char *getString() 
{ 
  char str[] = "GfG";  Stored in stack segment 
  
 * Problem: string may not be present after getSting() returns 
  return str;  
}      
int main() 
{ 
  printf("%s", getString());   
  getchar(); 
  return 0; 
} 






char *getString() 
{ 
  char *str = "GfG";  Stored in read only part of shared segment
  
   No problem: remains at address str after getString() returns
  return str;   
}      
  
int main() 
{ 
  printf("%s", getString());   
  getchar(); 
  return 0; 
}


*/
