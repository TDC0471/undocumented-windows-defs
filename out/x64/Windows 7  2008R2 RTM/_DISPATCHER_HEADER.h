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
                UCHAR TimerControlFlags;                                    //0x1
                struct
                {
                    UCHAR Absolute:1;                                       //0x1
                    UCHAR Coalescable:1;                                    //0x1
                    UCHAR KeepShifting:1;                                   //0x1
                    UCHAR EncodedTolerableDelay:5;                          //0x1
                };
                UCHAR Abandoned;                                            //0x1
                UCHAR Signalling;                                           //0x1
            };
            union
            {
                UCHAR ThreadControlFlags;                                   //0x2
                struct
                {
                    UCHAR CpuThrottled:1;                                   //0x2
                    UCHAR CycleProfiling:1;                                 //0x2
                    UCHAR CounterProfiling:1;                               //0x2
                    UCHAR Reserved:5;                                       //0x2
                };
                UCHAR Hand;                                                 //0x2
                UCHAR Size;                                                 //0x2
            };
            union
            {
                UCHAR TimerMiscFlags;                                       //0x3
                struct
                {
                    UCHAR Index:6;                                          //0x3
                    UCHAR Inserted:1;                                       //0x3
                    volatile UCHAR Expired:1;                               //0x3
                };
                UCHAR DebugActive;                                          //0x3
                struct
                {
                    UCHAR ActiveDR7:1;                                      //0x3
                    UCHAR Instrumented:1;                                   //0x3
                    UCHAR Reserved2:4;                                      //0x3
                    UCHAR UmsScheduled:1;                                   //0x3
                    UCHAR UmsPrimary:1;                                     //0x3
                };
                UCHAR DpcActive;                                            //0x3
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

