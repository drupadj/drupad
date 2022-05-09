/* Own Mutex */

bool console_in_use=false;

void task1()
{
    for(;;) 
    {
	if(!console_in_use)
	{
	    console_in_use=true;
	    printf("Hello Task1\n");
	    console_in_use=false;
	}
    }
}

void task2()
{
    for(;;) 
    {
	if(!console_in_use)
	{
	    console_in_use=true;
	    printf("Hello Task2\n");
	    console_in_use=false;
	}
    }
}


void task3()
{
    for(;;) 
    {
	if(!console_in_use)
	{
	    console_in_use=true;
	    printf("Hello Task3\n");
	    console_in_use=false;
	}
    }
}

/*
 * Will save the address of console_in_use at some special place, and when any process/task tried to take that critical section 
 * we can check value is 0 or not also we can check task/process ID
 * The calling process obtains the lock if the old value was 0, otherwise the while-loop spins waiting to acquire the lock
 * At any point, the holder of the lock can simply set the memory location back to 0 to release the lock
 */
