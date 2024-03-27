#pragma once
/* ------------------ */

#include <_MI_RESUME_WORKITEM.h>
#include <_ETHREAD.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>

//0x80 bytes (sizeof)
struct _MI_SHUTDOWN_STATE
{
    ULONG StandbyListDiscard;                                               //0x0
    UCHAR CrashDumpInitialized;                                             //0x4
    UCHAR ConnectedStandbyActive;                                           //0x5
    ULONG SystemShutdown;                                                   //0x8
    LONG ShutdownFlushInProgress;                                           //0xc
    struct _MI_RESUME_WORKITEM ResumeItem;                                  //0x10
    UCHAR FreeListDiscard;                                                  //0x48
    struct _ETHREAD* MirrorHoldsPfn;                                        //0x50
    ULONG MirroringActive;                                                  //0x58
    struct _RTL_BITMAP_EX* MirrorBitMap;                                    //0x60
    struct _RTL_BITMAP_EX* MirrorBitMapInterlocked;                         //0x68
    VOID* MirrorListLocks;                                                  //0x70
    struct _MMPTE* CrashDumpPte;                                            //0x78
};
/* Used in */
// _MI_SYSTEM_INFORMATION

