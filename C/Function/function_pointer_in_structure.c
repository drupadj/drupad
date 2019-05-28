struct SERVER_COM {
 
int iLenData;
 
void (*pfSend)(const char *pcData,const int ciLen);
 
int (*pfRead)(char *pData);
 
}GATEWAYCOM;
