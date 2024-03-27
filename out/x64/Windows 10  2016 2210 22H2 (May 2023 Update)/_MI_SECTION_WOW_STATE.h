#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_MI_DLL_OVERFLOW_AREA.h>
#include <_SECTION.h>
#include <_CONTROL_AREA.h>

//0x40 bytes (sizeof)
struct _MI_SECTION_WOW_STATE
{
    struct _RTL_BITMAP_EX ImageBitMap;                                      //0x0
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;                              //0x10
    struct _SECTION* CfgBitMapSection;                                      //0x30
    struct _CONTROL_AREA* CfgBitMapControlArea;                             //0x38
};
/* Used in */
// _MI_SECTION_STATE

