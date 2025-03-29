/* Implement Memory pool allocator in C without using built-in malloc() and free() functions */

#include <stdio.h>
#include <stdint.h>

#define POOL_SIZE       1024      /* Total pool size in bytes */
#define BLOCK_SIZE      32        /* Size of each block in bytes */
#define BLOCK_COUNT     (POOL_SIZE / BLOCK_SIZE)

typedef struct Block
{
    struct Block* next;
} Block;

static uint8_t memory_pool[POOL_SIZE];
static Block* free_list = NULL;

/* create a linked list of free memory blocks from a statically allocated buffer, 
 * so that future allocations can simply return the head of this free list */
void mempool_init()
{
    free_list = (Block*)memory_pool;
    Block* current = free_list;

    for (int i = 1; i < BLOCK_COUNT; ++i)
    {
        current->next = (Block*)(memory_pool + i * BLOCK_SIZE);
        current = current->next;
    }

    current->next = NULL; /* Last block points to NULL */
}

/* Allocate a block */
void* mempool_alloc()
{
    if (free_list == NULL)
    {
        return NULL; /* No memory available */
    }

    Block* block = free_list;
    free_list = free_list->next;
    return (void*)block;
}

void mempool_free(void* ptr)
{
    if (ptr == NULL)
    {
        return;
    }

    Block* block = (Block*)ptr;
    block->next = free_list;
    free_list = block;
}

int main()
{
    mempool_init();

    void* p1 = mempool_alloc();
    void* p2 = mempool_alloc();
    printf("Allocated: %p, %p\n", p1, p2);

    mempool_free(p1);
    mempool_free(p2);

    void* p3 = mempool_alloc();
    printf("Reallocated: %p\n", p3);

    return 0;
}

