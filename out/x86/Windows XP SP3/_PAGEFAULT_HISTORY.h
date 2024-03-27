#pragma once
/* ------------------ */

#include <_PROCESS_WS_WATCH_INFORMATION.h>

//0x18 bytes (sizeof)
struct _PAGEFAULT_HISTORY
{
    ULONG CurrentIndex;                                                     //0x0
    ULONG MaxIndex;                                                         //0x4
    ULONG SpinLock;                                                         //0x8
    VOID* Reserved;                                                         //0xc
    struct _PROCESS_WS_WATCH_INFORMATION WatchInfo[1];                      //0x10
};
/* Used in */
// _EPROCESS

