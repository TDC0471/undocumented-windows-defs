#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0xc0 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    ULONG Latency;                                                          //0xa8
    ULONG Power;                                                            //0xac
    ULONG StateFlags;                                                       //0xb0
    UCHAR StateType;                                                        //0xb4
    UCHAR InterruptsEnabled;                                                //0xb5
    UCHAR Interruptible;                                                    //0xb6
    UCHAR ContextRetained;                                                  //0xb7
    UCHAR CacheCoherent;                                                    //0xb8
};
/* Used in */
// _PPM_IDLE_STATES

