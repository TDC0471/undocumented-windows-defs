#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x118 bytes (sizeof)
struct _MI_DEBUGGER_STATE
{
    UCHAR TransientWrite;                                                   //0x0
    UCHAR CodePageEdited;                                                   //0x1
    struct _MMPTE* DebugPte;                                                //0x8
    ULONG PoisonedTb;                                                       //0x10
    volatile LONG InDebugger;                                               //0x14
    VOID* volatile Pfns[32];                                                //0x18
};
/* Used in */
// _MI_SYSTEM_INFORMATION

