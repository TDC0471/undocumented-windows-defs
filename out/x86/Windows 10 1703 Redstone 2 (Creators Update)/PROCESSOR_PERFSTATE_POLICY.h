#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct PROCESSOR_PERFSTATE_POLICY
{
    ULONG Revision;                                                         //0x0
    UCHAR MaxThrottle;                                                      //0x4
    UCHAR MinThrottle;                                                      //0x5
    UCHAR BusyAdjThreshold;                                                 //0x6
    union
    {
        UCHAR Spare;                                                        //0x7
        union
        {
            UCHAR AsUCHAR;                                                  //0x7
            UCHAR NoDomainAccounting:1;                                     //0x7
            UCHAR IncreasePolicy:2;                                         //0x7
            UCHAR DecreasePolicy:2;                                         //0x7
            UCHAR Reserved:3;                                               //0x7
        } Flags;                                                            //0x7
    };
    ULONG TimeCheck;                                                        //0x8
    ULONG IncreaseTime;                                                     //0xc
    ULONG DecreaseTime;                                                     //0x10
    ULONG IncreasePercent;                                                  //0x14
    ULONG DecreasePercent;                                                  //0x18
};
