/*

1. Heap_5 is useful when RAM provided by the system on which FreeRTOS is running does not appear 
   as a single contiguous block in the system's memory map

2. Heap_5 is initialised by calling vPortDefineHeapRegions(), and cannot be used until after vPortDefineHeapRegions() has executed. Creating an RTOS object (task, queue, semaphore, etc.) will implicitly call pvPortMalloc() so it is essential that, when using heap_5, vPortDefineHeapRegions() is called before the creation of any such object

3. The RTOS kernel needs RAM each time a task, queue, mutex, software timer, semaphore or event group is created

4. Each task maintains its own stack. 
   If a task is created using xTaskCreate() then the memory used as the task's stack is allocated automatically from the FreeRTOS heap

5. configCHECK_FOR_STACK_OVERFLOW 
   vApplicationStackOverflowHook

6. xPortGetMinimumEverFreeHeapSize function returns lowest amount of free heap space that has existed.

7. Memory leak:

   uint8_t kernelHeap[1536*1024] __attribute__ ((section(".kernel_mode.heap"))); //1536K

   const HeapRegion_t xKernelHeapRegions[] =
   {
       { ( uint8_t * ) kernelHeap, sizeof(kernelHeap) },
       { NULL, 0 }
   };

   vPortGetHeapStats(&xHeapStats);
   xHeapStats->xAvailableHeapSpaceInBytes;

   vWlanPortGetHeapStats(&xHeapStats);
   xHeapStats->xAvailableHeapSpaceInBytes;


xTaskCreate:
xTaskCreate(    TaskFunction_t pvTaskCode,
                            const char * const pcName,
                            configSTACK_DEPTH_TYPE usStackDepth,
                            void *pvParameters,
                            UBaseType_t uxPriority,
                            TaskHandle_t *pxCreatedTask
                          );

If a binary semaphore is created using xSemaphoreCreateBinary() then the required RAM is automatically allocated from the FreeRTOS heap. If a binary semaphore is created using xSemaphoreCreateBinaryStatic() then the RAM is provided by the application writer, which requires an additional parameter, but allows the RAM to be statically allocated at compile time

The semaphore is created in the 'empty' state, meaning the semaphore must first be given using the xSemaphoreGive() API function before it can subsequently be taken (obtained) using the xSemaphoreTake() function

The priority of a task that 'takes' a mutex will be temporarily raised if another task of higher priority attempts to obtain the same mutex. The task that owns the mutex 'inherits' the priority of the task attempting to 'take' the same mutex. This means the mutex must always be 'given' back - otherwise the higher priority task will never be able to obtain the mutex, and the lower priority task will never 'disinherit' the priority.

1. what is a non re­entrant code?
­Re entrant code is code which does not rely on being executed without interruption before completion. Reentrant code can be used by multiple, simultaneous tasks. Reentrant code generally does not access global data. Variables within a reentrant function are allocated on the stack, so each instance of the function has its own private data. Non­reentrant code, to be used safely by multiple processes, should have access controlled via some synchronization method such as a semaphore.

*/
