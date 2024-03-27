#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>

//0x8 bytes (sizeof)
union _MMVIEW_CONTROL_AREA
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONGLONG Writable:1;                                                   //0x0
    ULONGLONG ExceptionForInPageErrors:1;                                   //0x0
    ULONGLONG Unused:1;                                                     //0x0
    ULONGLONG UsedForControlArea:61;                                        //0x0
};
/* Used in */
// _MMVIEW

