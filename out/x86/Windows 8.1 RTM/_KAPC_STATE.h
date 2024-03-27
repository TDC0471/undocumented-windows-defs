#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KPROCESS.h>

//0x18 bytes (sizeof)
struct _KAPC_STATE
{
    struct _LIST_ENTRY ApcListHead[2];                                      //0x0
    struct _KPROCESS* Process;                                              //0x10
    union
    {
        UCHAR InProgressFlags;                                              //0x14
        struct
        {
            UCHAR KernelApcInProgress:1;                                    //0x14
            UCHAR SpecialApcInProgress:1;                                   //0x14
        };
    };
    UCHAR KernelApcPending;                                                 //0x15
    UCHAR UserApcPending;                                                   //0x16
};
/* Used in */
// _KTHREAD

