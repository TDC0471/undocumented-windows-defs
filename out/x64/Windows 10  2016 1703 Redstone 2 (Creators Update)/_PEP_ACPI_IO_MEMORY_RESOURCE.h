#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _PEP_ACPI_IO_MEMORY_RESOURCE
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    UCHAR Information;                                                      //0x4
    union _LARGE_INTEGER MinimumAddress;                                    //0x8
    union _LARGE_INTEGER MaximumAddress;                                    //0x10
    ULONG Alignment;                                                        //0x18
    ULONG Length;                                                           //0x1c
};
/* Used in */
// _PEP_ACPI_RESOURCE

