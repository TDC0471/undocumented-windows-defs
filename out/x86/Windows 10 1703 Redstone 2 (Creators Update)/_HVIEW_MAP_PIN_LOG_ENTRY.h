#pragma once
/* ------------------ */

#include <_KTHREAD.h>

//0x30 bytes (sizeof)
struct _HVIEW_MAP_PIN_LOG_ENTRY
{
    ULONG ViewOffset;                                                       //0x0
    UCHAR Pinned;                                                           //0x4
    ULONGLONG PinMask;                                                      //0x8
    struct _KTHREAD* Thread;                                                //0x10
    VOID* Stack[6];                                                         //0x14
};
/* Used in */
// _HVIEW_MAP_PIN_LOG

