#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x40 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    struct _KAFFINITY_EX DomainMembers;                                     //0x0
    LONG (*IdleCheck)(VOID* arg1);                                          //0xc
    VOID (*IdleHandler)(VOID* arg1);                                        //0x10
    ULONGLONG HvConfig;                                                     //0x18
    VOID* Context;                                                          //0x20
    ULONG Latency;                                                          //0x24
    ULONG Power;                                                            //0x28
    ULONG TimeCheck;                                                        //0x2c
    ULONG StateFlags;                                                       //0x30
    UCHAR PromotePercent;                                                   //0x34
    UCHAR DemotePercent;                                                    //0x35
    UCHAR PromotePercentBase;                                               //0x36
    UCHAR DemotePercentBase;                                                //0x37
    UCHAR StateType;                                                        //0x38
};
/* Used in */
// _PPM_IDLE_STATES

