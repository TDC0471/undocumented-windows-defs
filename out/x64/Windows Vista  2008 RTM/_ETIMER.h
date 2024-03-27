#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KAPC.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>

//0x108 bytes (sizeof)
struct _ETIMER
{
    struct _KTIMER KeTimer;                                                 //0x0
    struct _KAPC TimerApc;                                                  //0x40
    struct _KDPC TimerDpc;                                                  //0x98
    struct _LIST_ENTRY ActiveTimerListEntry;                                //0xd8
    ULONGLONG Lock;                                                         //0xe8
    LONG Period;                                                            //0xf0
    UCHAR ApcAssociated;                                                    //0xf4
    UCHAR WakeTimer;                                                        //0xf5
    struct _LIST_ENTRY WakeTimerListEntry;                                  //0xf8
};
