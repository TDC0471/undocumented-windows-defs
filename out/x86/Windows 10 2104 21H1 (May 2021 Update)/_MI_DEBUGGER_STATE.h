#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x90 bytes (sizeof)
struct _MI_DEBUGGER_STATE
{
    UCHAR TransientWrite;                                                   //0x0
    UCHAR CodePageEdited;                                                   //0x1
    struct _MMPTE* DebugPte;                                                //0x4
    ULONG PoisonedTb;                                                       //0x8
    volatile LONG InDebugger;                                               //0xc
    VOID* volatile Pfns[32];                                                //0x10
};
/* Used in */
// _MI_SYSTEM_INFORMATION

