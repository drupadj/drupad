void (*fpData)(void);
 
int  (*fpData)(int);
 
int  (*fpData)(char *);
 
int* (*fpData)(char *);
 
int  (*fpData)(int, char *);
 
int* (*fpData)(int, int *, char *);
 
int* (*fpData)(int , char, int (*paIndex)[3]);
 
int* (*fpData)(int , int (*paIndex)[3] , int (* fpMsg) (const char *));
 
int* (*fpData)(int (*paIndex)[3] , int (* fpMsg) (const char *), int (* fpCalculation[3]) (const char *));
 
int* (*fpData[2])(int (*paIndex)[3] , int (* fpMsg) (const char *), int (* fpCalculation[3]) (const char *));
 
int* (*(*fpData)(const char *))(int (*paIndex)[3] , int (* fpMsg) (const char *), int (* fpCalculation[3]) (const char *));
