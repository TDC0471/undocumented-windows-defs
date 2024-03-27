#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>

//0x8 bytes (sizeof)
struct _MMVIEW
{
    ULONG Entry;                                                            //0x0
    union
    {
        ULONG Writable:1;                                                   //0x4
        struct _CONTROL_AREA* ControlArea;                                  //0x4
    };
};
/* Used in */
// _MMSESSION

