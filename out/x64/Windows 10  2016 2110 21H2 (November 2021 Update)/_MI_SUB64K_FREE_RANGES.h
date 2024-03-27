#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_LIST_ENTRY.h>
#include <_MMVAD_SHORT.h>

//0x38 bytes (sizeof)
struct _MI_SUB64K_FREE_RANGES
{
    struct _RTL_BITMAP_EX BitMap;                                           //0x0
    struct _LIST_ENTRY ListEntry;                                           //0x10
    struct _MMVAD_SHORT* Vad;                                               //0x20
    ULONG SetBits;                                                          //0x28
    ULONG FullSetBits;                                                      //0x2c
    ULONG SubListIndex:2;                                                   //0x30
    ULONG Hint:30;                                                          //0x30
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

