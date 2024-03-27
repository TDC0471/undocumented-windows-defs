#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    LONG (*IdleHandler)(VOID* arg1, ULONG arg2);                            //0x0
    VOID* Context;                                                          //0x4
    ULONG Latency;                                                          //0x8
    ULONG Power;                                                            //0xc
    ULONG TimeCheck;                                                        //0x10
    ULONG StateFlags;                                                       //0x14
    UCHAR PromotePercent;                                                   //0x18
    UCHAR DemotePercent;                                                    //0x19
    UCHAR PromotePercentBase;                                               //0x1a
    UCHAR DemotePercentBase;                                                //0x1b
    UCHAR StateType;                                                        //0x1c
};
/* Used in */
// _PPM_IDLE_STATES

