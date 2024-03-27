#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x20 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    ULONG Latency;                                                          //0xc
    ULONG Power;                                                            //0x10
    ULONG StateFlags;                                                       //0x14
    UCHAR StateType;                                                        //0x18
    UCHAR InterruptsEnabled;                                                //0x19
    UCHAR Interruptible;                                                    //0x1a
    UCHAR ContextRetained;                                                  //0x1b
    UCHAR CacheCoherent;                                                    //0x1c
};
/* Used in */
// _PPM_IDLE_STATES

