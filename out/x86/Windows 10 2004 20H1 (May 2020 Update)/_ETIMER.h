#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KAPC.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_DIAGNOSTIC_CONTEXT.h>

//0xb8 bytes (sizeof)
struct _ETIMER
{
    struct _KTIMER KeTimer;                                                 //0x0
    ULONG Lock;                                                             //0x28
    struct _KAPC TimerApc;                                                  //0x2c
    struct _KDPC TimerDpc;                                                  //0x5c
    struct _LIST_ENTRY ActiveTimerListEntry;                                //0x7c
    ULONG Period;                                                           //0x84
    union
    {
        CHAR TimerFlags;                                                    //0x88
        struct
        {
            UCHAR ApcAssociated:1;                                          //0x88
            UCHAR FlushDpcs:1;                                              //0x88
            UCHAR Paused:1;                                                 //0x88
            UCHAR Spare1:5;                                                 //0x88
        };
    };
    UCHAR DueTimeType;                                                      //0x89
    USHORT Spare2;                                                          //0x8a
    struct _DIAGNOSTIC_CONTEXT* volatile WakeReason;                        //0x8c
    struct _LIST_ENTRY WakeTimerListEntry;                                  //0x90
    VOID* VirtualizedTimerCookie;                                           //0x98
    struct _LIST_ENTRY VirtualizedTimerLinks;                               //0x9c
    ULONGLONG DueTime;                                                      //0xa8
    ULONG CoalescingWindow;                                                 //0xb0
};
