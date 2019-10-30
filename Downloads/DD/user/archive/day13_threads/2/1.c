#include <stdio.h>
#include <pthread.h>
#include <sys/syscall.h>

void *func(void *arg) {
    printf("Hello World\n");
    printf("Process ID:%u\t Thread ID:%lu\n",
                        getpid(), syscall(SYS_gettid));

    return NULL;
}
int main() {
    pthread_t id;
    printf("Process ID:%u\t Thread ID:%lu\n",
                        getpid(), syscall(SYS_gettid));
    pthread_create(&id, NULL, func, NULL);
    while (1) {} // Loop forever
}
