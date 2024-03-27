#pragma once
/* ------------------ */

#include <_MI_RESUME_WORKITEM.h>
#include <_ETHREAD.h>
#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x4c bytes (sizeof)
struct _MI_SHUTDOWN_STATE
{
    ULONG StandbyListDiscard;                                               //0x0
    UCHAR CrashDumpInitialized;                                             //0x4
    UCHAR ConnectedStandbyActive;                                           //0x5
    ULONG SystemShutdown;                                                   //0x8
    LONG ShutdownFlushInProgress;                                           //0xc
    struct _MI_RESUME_WORKITEM ResumeItem;                                  //0x10
    UCHAR FreeListDiscard;                                                  //0x30
    struct _ETHREAD* MirrorHoldsPfn;                                        //0x34
    ULONG MirroringActive;                                                  //0x38
    struct _RTL_BITMAP* MirrorBitMap;                                       //0x3c
    struct _RTL_BITMAP* MirrorBitMapInterlocked;                            //0x40
    VOID* MirrorListLocks;                                                  //0x44
    struct _MMPTE* CrashDumpPte;                                            //0x48
};
/* Used in */
// _MI_SYSTEM_INFORMATION

