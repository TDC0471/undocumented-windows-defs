#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE
{
    VOID* CompletionContext;                                                //0x0
    LONG CompletionStatus;                                                  //0x8
    ULONG DIrpPending:1;                                                    //0xc
    ULONG DIrpCompleted:1;                                                  //0xc
};
/* Used in */
// _POP_FX_DEVICE

