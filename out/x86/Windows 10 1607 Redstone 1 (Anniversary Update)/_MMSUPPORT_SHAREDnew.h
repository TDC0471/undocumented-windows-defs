#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _MMSUPPORT_SHARED
{
    volatile LONG WorkingSetLock;                                           //0x0
    ULONG ReleasedCommitDebt;                                               //0x4
    ULONG ResetPagesRepurposedCount;                                        //0x8
    VOID* WsSwapSupport;                                                    //0xc
    VOID* CommitReleaseContext;                                             //0x10
    VOID* AccessLog;                                                        //0x14
    ULONG ChargedWslePages;                                                 //0x18
    ULONG ActualWslePages;                                                  //0x1c
    ULONG WorkingSetSizeOverhead;                                           //0x20
};
/* Used in */
// _MI_VISIBLE_STATE
// _MMSUPPORT_FULL

