#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x60 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    LONG (*IdleCheck)(VOID* arg1);                                          //0x28
    VOID (*IdleHandler)(VOID* arg1);                                        //0x30
    ULONGLONG HvConfig;                                                     //0x38
    VOID* Context;                                                          //0x40
    ULONG Latency;                                                          //0x48
    ULONG Power;                                                            //0x4c
    ULONG TimeCheck;                                                        //0x50
    ULONG StateFlags;                                                       //0x54
    UCHAR PromotePercent;                                                   //0x58
    UCHAR DemotePercent;                                                    //0x59
    UCHAR PromotePercentBase;                                               //0x5a
    UCHAR DemotePercentBase;                                                //0x5b
    UCHAR StateType;                                                        //0x5c
};
/* Used in */
// _PPM_IDLE_STATES

