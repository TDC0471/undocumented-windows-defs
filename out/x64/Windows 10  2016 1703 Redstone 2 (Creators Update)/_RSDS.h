#pragma once
/* ------------------ */

#include <_GUID.h>

//0x1c bytes (sizeof)
struct _RSDS
{
    ULONG Signature;                                                        //0x0
    struct _GUID Guid;                                                      //0x4
    ULONG Age;                                                              //0x14
    CHAR PdbName[1];                                                        //0x18
};
/* Used in */
// _CVDD

