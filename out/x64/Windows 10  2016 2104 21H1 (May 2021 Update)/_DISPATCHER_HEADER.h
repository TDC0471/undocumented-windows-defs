#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _DISPATCHER_HEADER
{
    union
    {
        volatile LONG Lock;                                                 //0x0
        LONG LockNV;                                                        //0x0
        struct
        {
            UCHAR Type;                                                     //0x0
            UCHAR Signalling;                                               //0x1
            UCHAR Size;                                                     //0x2
            UCHAR Reserved1;                                                //0x3
        };
        struct
        {
            UCHAR TimerType;                                                //0x0
            union
            {
                UCHAR TimerControlFlags;                                    //0x1
                struct
                {
                    UCHAR Absolute:1;                                       //0x1
                    UCHAR Wake:1;                                           //0x1
                    UCHAR EncodedTolerableDelay:6;                          //0x1
                };
            };
            UCHAR Hand;                                                     //0x2
            union
            {
                UCHAR TimerMiscFlags;                                       //0x3
                struct
                {
                    UCHAR Index:6;                                          //0x3
                    UCHAR Inserted:1;                                       //0x3
                    volatile UCHAR Expired:1;                               //0x3
                };
            };
        };
        struct
        {
            UCHAR Timer2Type;                                               //0x0
            union
            {
                UCHAR Timer2Flags;                                          //0x1
                struct
                {
                    UCHAR Timer2Inserted:1;                                 //0x1
                    UCHAR Timer2Expiring:1;                                 //0x1
                    UCHAR Timer2CancelPending:1;                            //0x1
                    UCHAR Timer2SetPending:1;                               //0x1
                    UCHAR Timer2Running:1;                                  //0x1
                    UCHAR Timer2Disabled:1;                                 //0x1
                    UCHAR Timer2ReservedFlags:2;                            //0x1
                };
            };
            UCHAR Timer2ComponentId;                                        //0x2
            UCHAR Timer2RelativeId;                                         //0x3
        };
        struct
        {
            UCHAR QueueType;                                                //0x0
            union
            {
                UCHAR QueueControlFlags;                                    //0x1
                struct
                {
                    UCHAR Abandoned:1;                                      //0x1
                    UCHAR DisableIncrement:1;                               //0x1
                    UCHAR QueueReservedControlFlags:6;                      //0x1
                };
            };
            UCHAR QueueSize;                                                //0x2
            UCHAR QueueReserved;                                            //0x3
        };
        struct
        {
            UCHAR ThreadType;                                               //0x0
            UCHAR ThreadReserved;                                           //0x1
            union
            {
                UCHAR ThreadControlFlags;                                   //0x2
                struct
                {
                    UCHAR CycleProfiling:1;                                 //0x2
                    UCHAR CounterProfiling:1;                               //0x2
                    UCHAR GroupScheduling:1;                                //0x2
                    UCHAR AffinitySet:1;                                    //0x2
                    UCHAR Tagged:1;                                         //0x2
                    UCHAR EnergyProfiling:1;                                //0x2
                    UCHAR SchedulerAssist:1;                                //0x2
                    UCHAR ThreadReservedControlFlags:1;                     //0x2
                };
            };
            union
            {
                UCHAR DebugActive;                                          //0x3
                struct
                {
                    UCHAR ActiveDR7:1;                                      //0x3
                    UCHAR Instrumented:1;                                   //0x3
                    UCHAR Minimal:1;                                        //0x3
                    UCHAR Reserved4:2;                                      //0x3
                    UCHAR AltSyscall:1;                                     //0x3
                    UCHAR UmsScheduled:1;                                   //0x3
                    UCHAR UmsPrimary:1;                                     //0x3
                };
            };
        };
        struct
        {
            UCHAR MutantType;                                               //0x0
            UCHAR MutantSize;                                               //0x1
            UCHAR DpcActive;                                                //0x2
            UCHAR MutantReserved;                                           //0x3
        };
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
// _KTIMER2

