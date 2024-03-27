#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_PEP_ACPI_RESOURCE_FLAGS.h>
#include <_UNICODE_STRING.h>

//0x28 bytes (sizeof)
struct _PEP_ACPI_SPB_RESOURCE
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    union _PEP_ACPI_RESOURCE_FLAGS Flags;                                   //0x4
    USHORT TypeSpecificFlags;                                               //0x8
    UCHAR ResourceSourceIndex;                                              //0xa
    struct _UNICODE_STRING* ResourceSourceName;                             //0x10
    CHAR* VendorData;                                                       //0x18
    USHORT VendorDataLength;                                                //0x20
};
/* Used in */
// _PEP_ACPI_SPB_I2C_RESOURCE
// _PEP_ACPI_SPB_SPI_RESOURCE
// _PEP_ACPI_SPB_UART_RESOURCE

