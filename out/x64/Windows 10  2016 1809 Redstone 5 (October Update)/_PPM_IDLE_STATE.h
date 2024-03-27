#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0xf8 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    struct _UNICODE_STRING Name;                                            //0xa8
    ULONG Latency;                                                          //0xb8
    ULONG BreakEvenDuration;                                                //0xbc
    ULONG Power;                                                            //0xc0
    ULONG StateFlags;                                                       //0xc4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0xc8
    UCHAR StateType;                                                        //0xf0
    UCHAR InterruptsEnabled;                                                //0xf1
    UCHAR Interruptible;                                                    //0xf2
    UCHAR ContextRetained;                                                  //0xf3
    UCHAR CacheCoherent;                                                    //0xf4
    UCHAR WakesSpuriously;                                                  //0xf5
    UCHAR PlatformOnly;                                                     //0xf6
    UCHAR NoCState;                                                         //0xf7
};
/* Used in */
// _PPM_IDLE_STATES

