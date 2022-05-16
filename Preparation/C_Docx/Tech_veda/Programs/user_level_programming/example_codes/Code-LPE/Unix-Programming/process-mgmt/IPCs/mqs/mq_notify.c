#include <pthread.h>
#include <mqueue.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 50
#define NAME "/my_mq"

void notify(union sigval sv)
{
        mqd_t mqdes;
	struct mq_attr attr;
        ssize_t nr;
        char buf[BUFSIZE];


	mqdes = sv.sival_int;

	mq_getattr(mqdes, &attr);
        nr = mq_receive(mqdes, buf, attr.mq_msgsize, NULL);
        printf("Read %s from MQ : %d \n", buf,mqdes);
	
}
int main(int argc, char *argv[])
{
	mqd_t mqdes;
        struct sigevent event;

	
        mqdes = mq_open(NAME, O_RDWR | O_CREAT | O_EXCL, 0666, NULL);
	if(mqdes<0)
		perror("mq_open :");

        event.sigev_notify = SIGEV_THREAD;
        event.sigev_notify_function = notify;
        event.sigev_notify_attributes = NULL;
        event.sigev_value.sival_int = mqdes;   
        mq_notify(mqdes, &event) ;

	while(1);  
}

