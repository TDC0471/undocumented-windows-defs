#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _MMSUPPORT_SHARED
{
    volatile LONG WorkingSetLock;                                           //0x0
    LONG GoodCitizenWaiting;                                                //0x4
    ULONG ReleasedCommitDebt;                                               //0x8
    ULONG ResetPagesRepurposedCount;                                        //0xc
    VOID* WsSwapSupport;                                                    //0x10
    VOID* CommitReleaseContext;                                             //0x14
    VOID* AccessLog;                                                        //0x18
    volatile ULONG ChargedWslePages;                                        //0x1c
    ULONG ActualWslePages;                                                  //0x20
    ULONG WorkingSetCoreLock;                                               //0x40
    VOID* ShadowMapping;                                                    //0x44
};
/* Used in */
// _MI_VISIBLE_STATE
// _MMSUPPORT_FULL

