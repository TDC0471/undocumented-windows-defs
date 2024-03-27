#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPROCESS.h>

//0x30 bytes (sizeof)
struct _KAPC_STATE
{
    struct _LIST_ENTRY ApcListHead[2];                                      //0x0
    struct _KPROCESS* Process;                                              //0x20
    UCHAR KernelApcInProgress;                                              //0x28
    UCHAR KernelApcPending;                                                 //0x29
    UCHAR UserApcPending;                                                   //0x2a
};
/* Used in */
// _KTHREAD

