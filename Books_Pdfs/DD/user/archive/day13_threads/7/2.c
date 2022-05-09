#include <stdio.h>
#include <pthread.h>

void *func1(void *arg)
{
	printf("val:%d\n", *(int *)arg);
}

void *func(void *arg) {
    int val = 20;
    pthread_t tid;
    printf("Hello World\n");
    pthread_create(&tid, NULL, func1, &val);
    pthread_join(tid, NULL);
    pthread_exit(NULL);
}
int main() {
    pthread_t id;
    pthread_create(&id, NULL, func, NULL);
    pthread_exit(NULL);
}
