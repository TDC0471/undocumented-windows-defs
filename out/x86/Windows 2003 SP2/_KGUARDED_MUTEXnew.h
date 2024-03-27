#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KGATE.h>

//0x20 bytes (sizeof)
struct _KGUARDED_MUTEX
{
    LONG Count;                                                             //0x0
    struct _KTHREAD* Owner;                                                 //0x4
    ULONG Contention;                                                       //0x8
    struct _KGATE Gate;                                                     //0xc
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x1c
            SHORT SpecialApcDisable;                                        //0x1e
        };
        ULONG CombinedApcDisable;                                           //0x1c
    };
};
/* Used in */
// _CMHIVE
// _EJOB
// _EPROCESS
// _MMSESSION
// _MM_SESSION_SPACE
// _PNP_DEVICE_EVENT_LIST

