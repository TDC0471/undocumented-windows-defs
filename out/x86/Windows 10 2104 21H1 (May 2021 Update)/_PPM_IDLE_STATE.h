#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0x44 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    struct _UNICODE_STRING Name;                                            //0xc
    ULONG Latency;                                                          //0x14
    ULONG BreakEvenDuration;                                                //0x18
    ULONG Power;                                                            //0x1c
    ULONG StateFlags;                                                       //0x20
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x24
    UCHAR StateType;                                                        //0x3c
    UCHAR InterruptsEnabled;                                                //0x3d
    UCHAR Interruptible;                                                    //0x3e
    UCHAR ContextRetained;                                                  //0x3f
    UCHAR CacheCoherent;                                                    //0x40
    UCHAR WakesSpuriously;                                                  //0x41
    UCHAR PlatformOnly;                                                     //0x42
    UCHAR NoCState;                                                         //0x43
};
/* Used in */
// _PPM_IDLE_STATES

