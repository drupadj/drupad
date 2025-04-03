/*
    BareMetal Driver Design:

    The SPI driver can be designed in several stages:

    1.Initialization: Configure SPI settings such as clock polarity, phase, and data frame size.
    2.Transmit Data: Write data to the SPI data register and initiate the transfer.
    3.Receive Data: Read the received data from the SPI data register once transfer is complete.
    4.Deinitialize: Disable SPI after the communication is complete.
*/

#include <stdint.h>
#include <stdbool.h>

/* Define SPI registers (Assume base address for SPI hardware) */
#define SPI_BASE_ADDR    0x40008000
#define SPI_CR1          *(volatile uint32_t *)(SPI_BASE_ADDR + 0x00) /* Control Register 1 */
#define SPI_CR2          *(volatile uint32_t *)(SPI_BASE_ADDR + 0x04) /* Control Register 2 */
#define SPI_SR           *(volatile uint32_t *)(SPI_BASE_ADDR + 0x08) /* Status Register */
#define SPI_DR           *(volatile uint32_t *)(SPI_BASE_ADDR + 0x0C) /* Data Register */

/* Define SPI settings (Configurable) */
#define SPI_BAUDRATE     16  /* Example Baudrate */
#define SPI_POLARITY     0   /* CPOL Clock Polarity */
#define SPI_PHASE        0   /* CPHA Clock Phase */
#define SPI_DFF          0   /* Data Frame Format (8-bit) */

/* This function configures the SPI hardware for the master mode, 
setting parameters like baud rate, polarity, phase, and data frame format */
void SPI_Init()
{
    /* Reset SPI */
    SPI_CR1 &= ~0x01; 		/* Disable SPI */
    SPI_CR1 = 0x00000000; 	/* Clear SPI configuration */

    /* Set SPI mode (Master) */
    SPI_CR1 |= (1 << 2);   		/* MSTR = 1 (Master mode) */
    SPI_CR1 |= (1 << 6);   		/* SPE = 1 (Enable SPI) */
    SPI_CR1 |= (SPI_BAUDRATE << 3);  	/* Set Baudrate */
    SPI_CR1 |= (SPI_POLARITY << 1);  	/* Set Clock Polarity */
    SPI_CR1 |= (SPI_PHASE << 0);     	/* Set Clock Phase */

    /* Set 8-bit Data frame format */
    if (SPI_DFF)
    {
        SPI_CR1 |= (1 << 11); /* Set DFF = 1 for 16-bit data frame format */
    }

    /* Enable SPI */
    SPI_CR1 |= (1 << 6);  /* SPE = 1 (SPI enable) */
}

/*This function sends a byte of data over the SPI bus. 
 * It waits for the transmit buffer to be empty before writing the data
 * Wait until TXE flag is set to send data  */
void SPI_SendData(uint8_t data)
{
    while (!(SPI_SR & (1 << 1)))
    {
        /* Wait for the TXE flag to become 1 (buffer empty) */
    }
    SPI_DR = data;  /* Write data to data register */
}

/* This function waits for the receive buffer to be full before reading the received data. */
uint8_t SPI_ReceiveData()
{
    while (!(SPI_SR & (1 << 0)))
    {
        /* Wait until RX buffer is not empty */
    }
    return (uint8_t)(SPI_DR);  /* Read data from data register */
}

/* Function to deinitialize SPI */
void SPI_Deinit()
{
    SPI_CR1 &= ~0x01;  /* Disable SPI */
}

int main()
{
    uint8_t data = 0xA5;  /* Example data to send */

    /* Initialize SPI */
    SPI_Init();

    /* Send data */
    SPI_SendData(data);

    /* Receive data */
    uint8_t received_data = SPI_ReceiveData();

    /* Deinitialize SPI */
    SPI_Deinit();

    return 0;
}

