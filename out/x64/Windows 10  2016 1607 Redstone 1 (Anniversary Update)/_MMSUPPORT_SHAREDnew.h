#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _MMSUPPORT_SHARED
{
    volatile LONG WorkingSetLock;                                           //0x0
    ULONGLONG ReleasedCommitDebt;                                           //0x8
    ULONGLONG ResetPagesRepurposedCount;                                    //0x10
    VOID* WsSwapSupport;                                                    //0x18
    VOID* CommitReleaseContext;                                             //0x20
    VOID* AccessLog;                                                        //0x28
    ULONGLONG ChargedWslePages;                                             //0x30
    ULONGLONG ActualWslePages;                                              //0x38
    ULONGLONG WorkingSetSizeOverhead;                                       //0x40
};
/* Used in */
// _MI_VISIBLE_STATE
// _MMSUPPORT_FULL
