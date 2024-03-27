#pragma once
/* ------------------ */

#include <_MI_RESUME_WORKITEM.h>
#include <_ETHREAD.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>

//0x80 bytes (sizeof)
struct _MI_SHUTDOWN_STATE
{
    UCHAR CrashDumpInitialized;                                             //0x0
    UCHAR ConnectedStandbyActive;                                           //0x1
    ULONG SystemShutdown;                                                   //0x4
    LONG ShutdownFlushInProgress;                                           //0x8
    struct _MI_RESUME_WORKITEM ResumeItem;                                  //0x10
    struct _ETHREAD* MirrorHoldsPfn;                                        //0x48
    ULONG MirroringActive;                                                  //0x50
    struct _RTL_BITMAP_EX MirrorBitMaps[2];                                 //0x58
    struct _MMPTE* CrashDumpPte;                                            //0x78
};
/* Used in */
// _MI_SYSTEM_INFORMATION

