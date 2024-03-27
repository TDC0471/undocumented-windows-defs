#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0xd8 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    ULONG Latency;                                                          //0xa8
    ULONG BreakEvenDuration;                                                //0xac
    ULONG Power;                                                            //0xb0
    ULONG StateFlags;                                                       //0xb4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0xb8
    UCHAR StateType;                                                        //0xd0
    UCHAR InterruptsEnabled;                                                //0xd1
    UCHAR Interruptible;                                                    //0xd2
    UCHAR ContextRetained;                                                  //0xd3
    UCHAR CacheCoherent;                                                    //0xd4
    UCHAR WakesSpuriously;                                                  //0xd5
    UCHAR PlatformOnly;                                                     //0xd6
    UCHAR NoCState;                                                         //0xd7
};
/* Used in */
// _PPM_IDLE_STATES

