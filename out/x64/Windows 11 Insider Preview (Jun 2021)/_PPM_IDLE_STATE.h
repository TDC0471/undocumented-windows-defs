#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_VETO_ACCOUNTING.h>

//0x158 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    struct _UNICODE_STRING Name;                                            //0x108
    ULONG Latency;                                                          //0x118
    ULONG BreakEvenDuration;                                                //0x11c
    ULONG Power;                                                            //0x120
    ULONG StateFlags;                                                       //0x124
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x128
    UCHAR StateType;                                                        //0x150
    UCHAR InterruptsEnabled;                                                //0x151
    UCHAR Interruptible;                                                    //0x152
    UCHAR ContextRetained;                                                  //0x153
    UCHAR CacheCoherent;                                                    //0x154
    UCHAR WakesSpuriously;                                                  //0x155
    UCHAR PlatformOnly;                                                     //0x156
    UCHAR NoCState;                                                         //0x157
};
/* Used in */
// _PPM_IDLE_STATES

