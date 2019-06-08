#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>

int main (int argc, char *argv[])
{
    pid_t mypid;
    int old_prio, new_prio, i=1, rc;


	
    while(i< 4)
        {
                mypid = fork();
                if(mypid==0)
                {
    			old_prio = getpriority (PRIO_PROCESS, (int)mypid);
			printf (" %d priority before altering %d \n",getpid(),old_prio);
			sleep(1);
    			new_prio = getpriority (PRIO_PROCESS, (int)mypid);
			printf (" %d priority after altering %d \n",getpid(),new_prio);
			exit(0);
		}
                else
		{
                        i++;
		}
        }

    mypid = getpid();
    rc = setpriority (PRIO_PGRP, 0, 20);
    if (rc)
    	perror("setpriority.......\n ");

    getchar();	
}
