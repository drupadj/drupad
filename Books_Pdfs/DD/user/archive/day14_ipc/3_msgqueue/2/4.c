/*
A new message queue is created if key has the value IPC_PRIVATE or key isn't IPC_PRIVATE, no message queue with the given  key  key  exists,  and IPC_CREAT is specified in msgflg.

*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

int main()
{
	key_t key;
	int msgid;

	key = ftok("proj", 64);
	if (key == -1) {
		perror("ftok failed");
		exit(1);
	}
	printf("key:%x\n", key);
	msgid = msgget(IPC_PRIVATE, S_IRUSR | S_IWUSR);
	if (msgid == -1) {
		perror("msgget failed");
		printf("errno:%d\n", errno);
		if (errno == EEXIST)
			printf(" A message queue exists for key and msgflg specified both IPC_CREAT and IPC_EXCL\n");
		exit(2);
	}
	printf("msgid:%u\n", msgid);


	return 0;
}

