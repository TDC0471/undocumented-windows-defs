#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x20 bytes (sizeof)
struct _PEP_ACPI_SPB_I2C_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG ConnectionSpeed;                                                  //0x18
    USHORT SlaveAddress;                                                    //0x1c
};
/* Used in */
// _PEP_ACPI_RESOURCE

