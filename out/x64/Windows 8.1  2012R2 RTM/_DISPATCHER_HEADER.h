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
                    UCHAR Wake:1;                                           //0x1
                    UCHAR EncodedTolerableDelay:6;                          //0x1
                };
                UCHAR QueueControlFlags;                                    //0x1
                struct
                {
                    UCHAR Abandoned:1;                                      //0x1
                    UCHAR DisableIncrement:1;                               //0x1
                };
                UCHAR Signalling;                                           //0x1
                UCHAR Timer2Flags;                                          //0x1
                struct
                {
                    UCHAR Timer2Inserted:1;                                 //0x1
                    UCHAR Timer2Expiring:1;                                 //0x1
                    UCHAR Timer2CancelPending:1;                            //0x1
                    UCHAR Timer2SetPending:1;                               //0x1
                    UCHAR Timer2Running:1;                                  //0x1
                    UCHAR Timer2Disabled:1;                                 //0x1
                    UCHAR Reserved1:2;                                      //0x1
                };
            };
            union
            {
                UCHAR ThreadControlFlags;                                   //0x2
                struct
                {
                    UCHAR CycleProfiling:1;                                 //0x2
                    UCHAR CounterProfiling:1;                               //0x2
                    UCHAR GroupScheduling:1;                                //0x2
                    UCHAR AffinitySet:1;                                    //0x2
                    UCHAR Reserved2:4;                                      //0x2
                };
                UCHAR Hand;                                                 //0x2
                UCHAR Reserved3;                                            //0x2
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
                    UCHAR Minimal:1;                                        //0x3
                    UCHAR Reserved4:3;                                      //0x3
                    UCHAR UmsScheduled:1;                                   //0x3
                    UCHAR UmsPrimary:1;                                     //0x3
                };
                UCHAR DpcActive;                                            //0x3
                UCHAR Reserved5;                                            //0x3
            };
        };
        volatile LONG Lock;                                                 //0x0
        LONG LockNV;                                                        //0x0
    };
    LONG SignalState;                                                       //0x4
    struct _LIST_ENTRY WaitListHead;                                        //0x8
};
/* Used in */
// _KEVENT
// _KGATE
// _KMUTANT
// _KPRIQUEUE
// _KPROCESS
// _KQUEUE
// _KSEMAPHORE
// _KTHREAD
// _KTIMER

