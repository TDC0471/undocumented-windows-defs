#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_LIST_ENTRY.h>
#include <_MMVAD_SHORT.h>

//0x30 bytes (sizeof)
struct _MI_SUB64K_FREE_RANGES
{
    struct _RTL_BITMAP_EX BitMap;                                           //0x0
    struct _LIST_ENTRY ListEntry;                                           //0x10
    struct _MMVAD_SHORT* Vad;                                               //0x20
    USHORT SubListIndex;                                                    //0x28
    USHORT Hint;                                                            //0x2a
    ULONG SetBits;                                                          //0x2c
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

