#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _DISPATCHER_HEADER
{
    union
    {
        struct
        {
            UCHAR Type;                                                     //0x0
            union
            {
                UCHAR Absolute;                                             //0x1
                UCHAR NpxIrql;                                              //0x1
            };
            union
            {
                UCHAR Size;                                                 //0x2
                UCHAR Hand;                                                 //0x2
            };
            union
            {
                UCHAR Inserted;                                             //0x3
                UCHAR DebugActive;                                          //0x3
            };
        };
        volatile LONG Lock;                                                 //0x0
    };
    LONG SignalState;                                                       //0x4
    struct _LIST_ENTRY WaitListHead;                                        //0x8
};
/* Used in */
// _KEVENT
// _KGATE
// _KMUTANT
// _KPROCESS
// _KQUEUE
// _KSEMAPHORE
// _KTHREAD
// _KTIMER

