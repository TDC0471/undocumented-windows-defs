#pragma once
/* ------------------ */

#include <_MI_RESUME_WORKITEM.h>
#include <_ETHREAD.h>
#include <_RTL_BITMAP.h>
#include <_MMPTE.h>

//0x48 bytes (sizeof)
struct _MI_SHUTDOWN_STATE
{
    UCHAR CrashDumpInitialized;                                             //0x0
    UCHAR ConnectedStandbyActive;                                           //0x1
    UCHAR ZeroPageFileAtShutdown;                                           //0x2
    ULONG SystemShutdown;                                                   //0x4
    LONG ShutdownFlushInProgress;                                           //0x8
    ULONG MirroringActive;                                                  //0xc
    struct _MI_RESUME_WORKITEM ResumeItem;                                  //0x10
    struct _ETHREAD* MirrorHoldsPfn;                                        //0x30
    struct _RTL_BITMAP MirrorBitMaps[2];                                    //0x34
    struct _MMPTE* CrashDumpPte;                                            //0x44
};
/* Used in */
// _MI_SYSTEM_INFORMATION

