#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0x40 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    struct _UNICODE_STRING Name;                                            //0xc
    ULONG Latency;                                                          //0x14
    ULONG BreakEvenDuration;                                                //0x18
    ULONG Power;                                                            //0x1c
    ULONG StateFlags;                                                       //0x20
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x24
    UCHAR StateType;                                                        //0x38
    UCHAR InterruptsEnabled;                                                //0x39
    UCHAR Interruptible;                                                    //0x3a
    UCHAR ContextRetained;                                                  //0x3b
    UCHAR CacheCoherent;                                                    //0x3c
    UCHAR WakesSpuriously;                                                  //0x3d
    UCHAR PlatformOnly;                                                     //0x3e
    UCHAR NoCState;                                                         //0x3f
};
/* Used in */
// _PPM_IDLE_STATES

