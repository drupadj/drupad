#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>

int main() {

	printf("Process ID:%u\t Thread ID:%lu\n",
			getpid(), syscall(SYS_gettid));
	return 0;
}
