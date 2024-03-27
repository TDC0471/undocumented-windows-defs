#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>

//0x4 bytes (sizeof)
union _MMVIEW_CONTROL_AREA
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG Writable:1;                                                       //0x0
    ULONG ExceptionForInPageErrors:1;                                       //0x0
    ULONG Unused:1;                                                         //0x0
    ULONG UsedForControlArea:29;                                            //0x0
};
/* Used in */
// _MMVIEW

