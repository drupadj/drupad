#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

#define POOL_SIZE   1024          /* Total memory pool size */
#define ALIGNMENT   8             /* Alignment in bytes */

/* Align size up to next multiple of ALIGNMENT */
#define ALIGN(size)   (((size) + (ALIGNMENT - 1)) & ~(ALIGNMENT - 1))

/* Metadata before each block */
typedef struct BlockHeader
{
    size_t size;                /* Total size of block (including header) */
    int free;                   /* 1 = free, 0 = allocated */
    struct BlockHeader* next;   /* Next block in memory */
} BlockHeader;

static uint8_t memory_pool[POOL_SIZE];   /* Our static heap */
static BlockHeader* free_list = NULL;    /* Head of memory blocks */

/* Initialize pool with one big free block */
void mem_init()
{
    free_list = (BlockHeader*)memory_pool;
    free_list->size = POOL_SIZE;
    free_list->free = 1;
    free_list->next = NULL;
}

/* Allocate memory */
void* mem_alloc(size_t size)
{
    size = ALIGN(size);  /* Align requested size */
    BlockHeader* curr = free_list;

    while (curr)
    {
        if (curr->free && curr->size >= size + sizeof(BlockHeader))
	{
            size_t total_needed = size + sizeof(BlockHeader);
            size_t remaining = curr->size - total_needed;

            /* Split if enough space left */
            if (remaining > sizeof(BlockHeader))
	    {
                BlockHeader* new_block = (BlockHeader*)((uint8_t*)curr + total_needed);
                new_block->size = remaining;
                new_block->free = 1;
                new_block->next = curr->next;

                curr->size = total_needed;
                curr->next = new_block;
            }

            curr->free = 0;
            return (uint8_t*)curr + sizeof(BlockHeader);  /* Return pointer after header */
        }

        curr = curr->next;
    }

    return NULL;  /* Out of memory */
}

/* Free memory */
void mem_free(void* ptr)
{
    if (ptr == NULL)
    {
        return;
    }

    BlockHeader* block = (BlockHeader*)((uint8_t*)ptr - sizeof(BlockHeader));
    block->free = 1;
}

/* Debug: Print all memory blocks */
void mem_dump()
{
    BlockHeader* curr = (BlockHeader*)memory_pool;

    printf("Memory Blocks:\n");

    while ((uint8_t*)curr < memory_pool + POOL_SIZE)
    {
        printf("  Block at %p | size = %zu | free = %d\n", (void*)curr, curr->size, curr->free);

        if (!curr->next)
	{
	    break;
	}

        curr = curr->next;
    }

    printf("\n");
}

int main()
{
    mem_init();

    mem_dump();

    void* p1 = mem_alloc(64);
    void* p2 = mem_alloc(128);

    printf("Allocated p1 = %p\n", p1);
    printf("Allocated p2 = %p\n", p2);

    mem_dump();

    mem_free(p1);
    mem_free(p2);

    mem_dump();

    return 0;
}
