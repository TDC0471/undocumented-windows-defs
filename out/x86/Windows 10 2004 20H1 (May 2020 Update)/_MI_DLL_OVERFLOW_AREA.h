#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_DLL_OVERFLOW_AREA
{
    VOID* RangeStart;                                                       //0x0
    VOID* NextVa;                                                           //0x4
};
/* Used in */
// _MI_SECTION_STATE

