#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>

//0x10 bytes (sizeof)
struct _MMVIEW
{
    ULONGLONG Entry;                                                        //0x0
    union
    {
        ULONGLONG Writable:1;                                               //0x8
        struct _CONTROL_AREA* ControlArea;                                  //0x8
    };
};
/* Used in */
// _MMSESSION

