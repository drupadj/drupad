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
	//IPC_CREAT: creating message queue if not exists
	//IPC_EXCL - Used with IPC_CREAT to create the message queue and the call fails, if the message queue already exists
	msgid = msgget(key, IPC_CREAT |  IPC_EXCL);
	if (msgid == -1) {
		perror("msgget failed");
		printf("errno:%d\n", errno);
		if (errno == EEXIST)
			printf(" A message queue exists for key and msgflg specified both IPC_CREAT and IPC_EXCL\n");
		exit(2);
	}
	printf("msgid:%x\n", msgid);


	return 0;
}

