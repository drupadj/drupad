#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>

main(){
	key_t key;
	key = ftok("/var/run/inetsolv",1);
	perror("ftok");
	printf(" key = %d\n",key);
	key = ftok("/var/run/inetsolv",1);
	printf(" key = %d\n",key);
	key = ftok("/var/run/inetsolv",2);
	printf(" key = %d\n",key);
}

