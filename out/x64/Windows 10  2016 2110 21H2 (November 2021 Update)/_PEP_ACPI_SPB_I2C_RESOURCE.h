#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x30 bytes (sizeof)
struct _PEP_ACPI_SPB_I2C_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG ConnectionSpeed;                                                  //0x28
    USHORT SlaveAddress;                                                    //0x2c
};
/* Used in */
// _PEP_ACPI_RESOURCE

