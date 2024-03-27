#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_PEP_ACPI_IO_MEMORY_RESOURCE.h>
#include <_PEP_ACPI_INTERRUPT_RESOURCE.h>
#include <_PEP_ACPI_GPIO_RESOURCE.h>
#include <_PEP_ACPI_SPB_I2C_RESOURCE.h>
#include <_PEP_ACPI_SPB_SPI_RESOURCE.h>
#include <_PEP_ACPI_SPB_UART_RESOURCE.h>
#include <_PEP_ACPI_EXTENDED_ADDRESS.h>

//0x48 bytes (sizeof)
union _PEP_ACPI_RESOURCE
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    struct _PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;                           //0x0
    struct _PEP_ACPI_INTERRUPT_RESOURCE Interrupt;                          //0x0
    struct _PEP_ACPI_GPIO_RESOURCE Gpio;                                    //0x0
    struct _PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;                               //0x0
    struct _PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;                               //0x0
    struct _PEP_ACPI_SPB_UART_RESOURCE SpbUart;                             //0x0
    struct _PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;                      //0x0
};
