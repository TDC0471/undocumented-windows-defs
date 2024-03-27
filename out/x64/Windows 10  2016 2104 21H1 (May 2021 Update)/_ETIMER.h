#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KAPC.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_DIAGNOSTIC_CONTEXT.h>

//0x138 bytes (sizeof)
struct _ETIMER
{
    struct _KTIMER KeTimer;                                                 //0x0
    ULONGLONG Lock;                                                         //0x40
    struct _KAPC TimerApc;                                                  //0x48
    struct _KDPC TimerDpc;                                                  //0xa0
    struct _LIST_ENTRY ActiveTimerListEntry;                                //0xe0
    ULONG Period;                                                           //0xf0
    union
    {
        CHAR TimerFlags;                                                    //0xf4
        struct
        {
            UCHAR ApcAssociated:1;                                          //0xf4
            UCHAR FlushDpcs:1;                                              //0xf4
            UCHAR Paused:1;                                                 //0xf4
            UCHAR Spare1:5;                                                 //0xf4
        };
    };
    UCHAR DueTimeType;                                                      //0xf5
    USHORT Spare2;                                                          //0xf6
    struct _DIAGNOSTIC_CONTEXT* volatile WakeReason;                        //0xf8
    struct _LIST_ENTRY WakeTimerListEntry;                                  //0x100
    VOID* VirtualizedTimerCookie;                                           //0x110
    struct _LIST_ENTRY VirtualizedTimerLinks;                               //0x118
    ULONGLONG DueTime;                                                      //0x128
    ULONG CoalescingWindow;                                                 //0x130
};
