#pragma once
/* ------------------ */

#include <_WHEA_NMI_ERROR_FLAGS.h>

//0xc bytes (sizeof)
struct _WHEA_NMI_ERROR
{
    UCHAR Data[8];                                                          //0x0
    union _WHEA_NMI_ERROR_FLAGS Flags;                                      //0x8
};
/* Used in */
// _WHEA_ERROR_PACKET

