#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _MI_DLL_OVERFLOW_AREA
{
    VOID* RangeStart;                                                       //0x0
    VOID* NextVa;                                                           //0x8
    VOID* RangeStartAbove2gb;                                               //0x10
    VOID* NextVaAbove2gb;                                                   //0x18
};
/* Used in */
// _MI_SECTION_STATE
// _MI_SECTION_WOW_STATE

