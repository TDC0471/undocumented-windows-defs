#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MMVAD_SHORT.h>

//0x20 bytes (sizeof)
struct _MI_SUB64K_FREE_RANGES
{
    struct _RTL_BITMAP BitMap;                                              //0x0
    struct _LIST_ENTRY ListEntry;                                           //0x8
    struct _MMVAD_SHORT* Vad;                                               //0x10
    ULONG SetBits;                                                          //0x14
    ULONG FullSetBits;                                                      //0x18
    ULONG SubListIndex:2;                                                   //0x1c
    ULONG Hint:30;                                                          //0x1c
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

