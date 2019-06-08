#include <sched.h>
#include <stdio.h>

int main()
{
	struct sched_param param;
	struct timespec inter;
	param.sched_priority=60;
	sched_setscheduler(0, SCHED_RR,&param);

	if(sched_rr_get_interval(0, &inter)<0)
		perror("sched_rr_get_interval............");
	printf("\n round-robin time quantum for the %d process\n",getpid());
	printf("\t seconds %d nanoseconds %d\n",inter.tv_sec,inter.tv_nsec);

}
