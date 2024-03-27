#pragma once
/* ------------------ */


//0x2c bytes (sizeof)
struct _MMSUPPORT_SHARED
{
    volatile LONG WorkingSetLock;                                           //0x0
    LONG GoodCitizenWaiting;                                                //0x4
    ULONG ReleasedCommitDebt;                                               //0x8
    ULONG ResetPagesRepurposedCount;                                        //0xc
    VOID* WsSwapSupport;                                                    //0x10
    VOID* CommitReleaseContext;                                             //0x14
    volatile LONG WorkingSetCoreLock;                                       //0x18
    VOID* AccessLog;                                                        //0x1c
    volatile ULONG ChargedWslePages;                                        //0x20
    ULONG ActualWslePages;                                                  //0x24
    VOID* ShadowMapping;                                                    //0x28
};
/* Used in */
// _MI_VISIBLE_STATE
// _MMSUPPORT_FULL

