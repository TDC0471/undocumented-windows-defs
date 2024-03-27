#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE
{
    VOID* CompletionContext;                                                //0x0
    LONG CompletionStatus;                                                  //0x4
    ULONG DIrpPending:1;                                                    //0x8
    ULONG DIrpCompleted:1;                                                  //0x8
};
/* Used in */
// _POP_FX_DEVICE

