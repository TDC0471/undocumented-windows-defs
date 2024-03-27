#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x38 bytes (sizeof)
struct _PEP_ACPI_SPB_SPI_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG ConnectionSpeed;                                                  //0x28
    UCHAR DataBitLength;                                                    //0x2c
    UCHAR Phase;                                                            //0x2d
    UCHAR Polarity;                                                         //0x2e
    USHORT DeviceSelection;                                                 //0x30
};
/* Used in */
// _PEP_ACPI_RESOURCE

