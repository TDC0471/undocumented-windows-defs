#pragma once
/* ------------------ */

#include <_KIST_BASE_FRAME.h>

//0x20 bytes (sizeof)
struct _KIST_LINK_FRAME
{
    struct _KIST_BASE_FRAME* IstBaseFrame;                                  //0x0
    ULONG Signature;                                                        //0x8
    ULONG Reserved0;                                                        //0xc
    ULONGLONG Reserved[2];                                                  //0x10
};
/* Used in */
// _KIST_BASE_FRAME

