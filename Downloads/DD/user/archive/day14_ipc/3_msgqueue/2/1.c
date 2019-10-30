#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	key_t key;
	int msgid;

	key = ftok("proj", 64);
	if (key == -1) {
		perror("ftok failed");
		exit(1);
	}
	printf("key:%u\n", key);
	msgid = msgget(key, 0);
	if (msgid == -1) {
		perror("msgget failed");
		printf("errno:%d\n", errno);
		if (errno == ENOENT)
			printf("No message queue exists for key and msgflg did not specify IPC_CREAT\n");
		exit(2);
	}
	printf("msgid:%d\n", msgid);


	return 0;
}

