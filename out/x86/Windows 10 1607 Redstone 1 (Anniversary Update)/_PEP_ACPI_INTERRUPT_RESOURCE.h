#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_PEP_ACPI_RESOURCE_FLAGS.h>

//0x18 bytes (sizeof)
struct _PEP_ACPI_INTERRUPT_RESOURCE
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    enum _KINTERRUPT_MODE InterruptType;                                    //0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;                            //0x8
    union _PEP_ACPI_RESOURCE_FLAGS Flags;                                   //0xc
    UCHAR Count;                                                            //0x10
    ULONG* Pins;                                                            //0x14
};
/* Used in */
// _PEP_ACPI_RESOURCE

