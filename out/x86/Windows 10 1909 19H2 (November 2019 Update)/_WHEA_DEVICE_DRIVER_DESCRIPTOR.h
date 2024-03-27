#pragma once
/* ------------------ */

#include <_WHEA_ERROR_SOURCE_CONFIGURATION_DD.h>

//0x14 bytes (sizeof)
struct _WHEA_DEVICE_DRIVER_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Enabled;                                                          //0x2
    UCHAR Reserved;                                                         //0x3
    struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;                      //0x4
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

