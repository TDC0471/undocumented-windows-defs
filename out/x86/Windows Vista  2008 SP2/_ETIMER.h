#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KAPC.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>

//0x98 bytes (sizeof)
struct _ETIMER
{
    struct _KTIMER KeTimer;                                                 //0x0
    struct _KAPC TimerApc;                                                  //0x28
    struct _KDPC TimerDpc;                                                  //0x58
    struct _LIST_ENTRY ActiveTimerListEntry;                                //0x78
    ULONG Lock;                                                             //0x80
    LONG Period;                                                            //0x84
    UCHAR ApcAssociated;                                                    //0x88
    UCHAR WakeTimer;                                                        //0x89
    struct _LIST_ENTRY WakeTimerListEntry;                                  //0x8c
};
