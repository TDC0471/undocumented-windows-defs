#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _PPM_IDLE_STATE
{
    LONG (*IdleHandler)(VOID* arg1, ULONG arg2);                            //0x0
    VOID* Context;                                                          //0x8
    ULONG Latency;                                                          //0x10
    ULONG Power;                                                            //0x14
    ULONG TimeCheck;                                                        //0x18
    ULONG StateFlags;                                                       //0x1c
    UCHAR PromotePercent;                                                   //0x20
    UCHAR DemotePercent;                                                    //0x21
    UCHAR PromotePercentBase;                                               //0x22
    UCHAR DemotePercentBase;                                                //0x23
    UCHAR StateType;                                                        //0x24
};
/* Used in */
// _PPM_IDLE_STATES

