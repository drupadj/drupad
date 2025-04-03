/* How to implement an efficient memset API */

#include <stdint.h>
#include <stddef.h>

void *efficient_memset(void *dest, int value, size_t size)
{
    uint8_t *ptr = (uint8_t *)dest;
    uintptr_t addr = (uintptr_t)ptr;

    /* Convert value to byte */
    uint8_t byte_value = (uint8_t)value;

    /* Handle leading bytes to reach 4-byte alignment
     * Writing 4 bytes in one go takes less time than writing 4 separate bytes */
    while (size > 0 && (addr % 4) != 0)
    {
        *ptr++ = byte_value;
        addr++;
        size--;
    }

    /* Set 4-byte pattern */
    uint32_t pattern = (uint32_t)byte_value;
    pattern |= pattern << 8;
    pattern |= pattern << 16;

    /* Write 4-byte chunks */
    uint32_t *word_ptr = (uint32_t *)ptr;

    while (size >= 4)
    {
        *word_ptr++ = pattern;
        size -= 4;
    }

    /* Handle remaining bytes */
    ptr = (uint8_t *)word_ptr;

    while (size--)
    {
        *ptr++ = byte_value;
    }

    return dest;
}

/* Helper to print memory */
void print_buffer(const uint8_t *buffer, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%02X ", buffer[i]);
    }
    printf("\n");
}

/* Main function to test efficient_memset */
int main()
{
    uint8_t buffer[20];

    /* Fill with 0x00 initially */
    memset(buffer, 0x00, sizeof(buffer));

    printf("Before memset:\n");
    print_buffer(buffer, sizeof(buffer));

    /* Call efficient_memset to fill with 0xAA */
    efficient_memset(buffer + 1, 0xAA, 15);  /* Notice unaligned address */

    printf("After efficient_memset (0xAA from buffer[1] for 15 bytes):\n");
    print_buffer(buffer, sizeof(buffer));

    return 0;
}

/*
 Before memset:
 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

 After efficient_memset (0xAA from buffer[1] for 15 bytes):
 00 AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA 00 00 00 00
*/

