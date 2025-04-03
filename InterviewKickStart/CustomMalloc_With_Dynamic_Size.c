/* malloc() - implicit linked list-based implementation 
   Implementing a mechanism to return a chunk of memory aligned to a particular data type size
*/

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

void* mem_alloc(size_t size)
{
    uintptr_t block_start;
    uintptr_t user_ptr;
    size_t padding;
    size_t total_needed;
    size_t remaining;

    size = ALIGN(size);  // Align requested size
    BlockHeader* curr = free_list;

    while (curr)
    {
        block_start = (uintptr_t)curr;

        user_ptr = block_start + sizeof(BlockHeader);
        user_ptr = ALIGN(user_ptr);  // Align user data

        padding = user_ptr - (block_start + sizeof(BlockHeader));
        total_needed = (user_ptr - block_start) + size;

        if (curr->free && curr->size >= total_needed)
        {
            remaining = curr->size - total_needed;

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
            return (void*)user_ptr;
        }

        curr = curr->next;
    }

    return NULL;
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
