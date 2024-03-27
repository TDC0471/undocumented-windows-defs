#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0x30 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    ULONG Latency;                                                          //0xc
    ULONG BreakEvenDuration;                                                //0x10
    ULONG Power;                                                            //0x14
    ULONG StateFlags;                                                       //0x18
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x1c
    UCHAR StateType;                                                        //0x28
    UCHAR InterruptsEnabled;                                                //0x29
    UCHAR Interruptible;                                                    //0x2a
    UCHAR ContextRetained;                                                  //0x2b
    UCHAR CacheCoherent;                                                    //0x2c
    UCHAR WakesSpuriously;                                                  //0x2d
    UCHAR PlatformOnly;                                                     //0x2e
    UCHAR NoCState;                                                         //0x2f
};
/* Used in */
// _PPM_IDLE_STATES

