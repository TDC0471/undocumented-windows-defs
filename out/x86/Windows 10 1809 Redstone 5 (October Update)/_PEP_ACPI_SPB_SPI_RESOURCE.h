#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x24 bytes (sizeof)
struct _PEP_ACPI_SPB_SPI_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG ConnectionSpeed;                                                  //0x18
    UCHAR DataBitLength;                                                    //0x1c
    UCHAR Phase;                                                            //0x1d
    UCHAR Polarity;                                                         //0x1e
    USHORT DeviceSelection;                                                 //0x20
};
/* Used in */
// _PEP_ACPI_RESOURCE

