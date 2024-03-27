#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PEP_ACPI_RESOURCE_TYPE
{
    PepAcpiMemory = 0,
    PepAcpiIoPort = 1,
    PepAcpiInterrupt = 2,
    PepAcpiGpioIo = 3,
    PepAcpiGpioInt = 4,
    PepAcpiSpbI2c = 5,
    PepAcpiSpbSpi = 6,
    PepAcpiSpbUart = 7,
    PepAcpiExtendedMemory = 8,
    PepAcpiExtendedIo = 9
};
/* Used in */
// _PEP_ACPI_EXTENDED_ADDRESS
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_INTERRUPT_RESOURCE
// _PEP_ACPI_IO_MEMORY_RESOURCE
// _PEP_ACPI_RESOURCE
// _PEP_ACPI_SPB_RESOURCE

