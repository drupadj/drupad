
#include <stdint.h>
#include <stdbool.h>

#define SPI_BASE_ADDR    0x40008000    // Example base address for SPI
#define SPI_CR1          *(volatile uint32_t *)(SPI_BASE_ADDR + 0x00) // Control Register 1
#define SPI_CR2          *(volatile uint32_t *)(SPI_BASE_ADDR + 0x04) // Control Register 2
#define SPI_SR           *(volatile uint32_t *)(SPI_BASE_ADDR + 0x08) // Status Register
#define SPI_DR           *(volatile uint32_t *)(SPI_BASE_ADDR + 0x0C) // Data Register

#define DMA1_BASE_ADDR   0x40020000    // Example base address for DMA1
#define DMA1_ISR          *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x00) // DMA Interrupt Status Register
#define DMA1_IFCR         *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x04) // DMA Interrupt Flag Clear Register
#define DMA1_CCR1         *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x08) // DMA Channel 1 Config Register
#define DMA1_CNDTR1       *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x0C) // DMA Channel 1 Number of Data Register
#define DMA1_CPAR1        *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x10) // DMA Channel 1 Peripheral Address Register
#define DMA1_CMAR1        *(volatile uint32_t *)(DMA1_BASE_ADDR + 0x14) // DMA Channel 1 Memory Address Register

// SPI configuration parameters
#define SPI_BAUDRATE      16    // Example baud rate
#define SPI_POLARITY       0     // Clock Polarity
#define SPI_PHASE          0    // Clock Phase

void SPI_Init()
{
    // Configure SPI in Master Mode, 8-bit data frame, and other settings
    SPI_CR1 &= ~0x01;               // Disable SPI
    SPI_CR1 = 0x00000000;           // Clear all settings
    SPI_CR1 |= (1 << 6);            // Enable SPI (SPE)
    SPI_CR1 |= (1 << 2);            // Master mode (MSTR = 1)
    SPI_CR1 |= (SPI_BAUDRATE << 3); // Set Baudrate
    SPI_CR1 |= (SPI_POLARITY << 1); // Set Clock Polarity (CPOL)
    SPI_CR1 |= (SPI_PHASE << 0);    // Set Clock Phase (CPHA)
    SPI_CR1 |= (1 << 8);            // Enable 8-bit data frame format (DFF)
}

void DMA_Init(uint32_t *data, uint32_t size)
{
    // Configure DMA for SPI TX (Memory to SPI Data Register)
    DMA1_CCR1 &= ~0x01;              // Disable DMA channel 1
    DMA1_CCR1 = 0x00000000;          // Clear previous settings

    // Set DMA transfer direction (memory to peripheral)
    DMA1_CCR1 |= (1 << 4);           // Memory to Peripheral (DIR = 1)
    DMA1_CCR1 |= (1 << 7);           // Enable circular mode if continuous transfer is needed (CIRC = 1)
    DMA1_CCR1 |= (1 << 5);           // Enable peripheral increment mode (PINC = 1)

    // Set the number of data items to transfer
    DMA1_CNDTR1 = size;             // Number of data words (bytes/4 for 32-bit or 1 for 8-bit)

    // Set the peripheral address (SPI data register)
    DMA1_CPAR1 = (uint32_t)&SPI_DR;

    // Set the memory address (address of the data buffer)
    DMA1_CMAR1 = (uint32_t)data;

    // Enable DMA channel 1
    DMA1_CCR1 |= (1 << 0);           // Enable DMA channel
}

void SPI_DMA_Transmit(uint32_t *data, uint32_t size)
{
    // Ensure the SPI peripheral is enabled
    SPI_Init();

    // Initialize DMA for SPI transmission
    DMA_Init(data, size);

    // Enable the SPI DMA (TX)
    SPI_CR2 |= (1 << 1);  // Enable SPI TX DMA (TXDMAEN)

    // Start the DMA transfer
    DMA1_CCR1 |= (1 << 0); // Enable DMA channel

    // Optionally, wait for DMA transfer to complete or handle with interrupts
    while (!(SPI_SR & (1 << 1))) {  // Wait until the SPI TX buffer is empty (TXE)
        // Wait for DMA to finish transmitting
    }

    // Disable DMA after transfer completion
    DMA1_CCR1 &= ~0x01;  // Disable DMA channel 1
    SPI_CR2 &= ~(1 << 1); // Disable SPI TX DMA
}

/* Optional */
void DMA1_Channel1_IRQHandler(void)
{
    if (DMA1_ISR & (1 << 1))
    {   // Check for DMA transfer complete interrupt
        // Clear interrupt flag
        DMA1_IFCR |= (1 << 1);
        // Handle post-transfer operations, like disabling DMA or triggering another action
    }
}

void SPI_IRQHandler(void)
{
    if (SPI_SR & (1 << 1))
    {   // Check for SPI TX buffer empty (TXE flag)
        // Handle any post-SPI operations
    }
}

