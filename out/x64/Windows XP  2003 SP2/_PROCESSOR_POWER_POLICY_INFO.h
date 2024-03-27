#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _PROCESSOR_POWER_POLICY_INFO
{
    ULONG TimeCheck;                                                        //0x0
    ULONG DemoteLimit;                                                      //0x4
    ULONG PromoteLimit;                                                     //0x8
    UCHAR DemotePercent;                                                    //0xc
    UCHAR PromotePercent;                                                   //0xd
    UCHAR Spare[2];                                                         //0xe
    ULONG AllowDemotion:1;                                                  //0x10
    ULONG AllowPromotion:1;                                                 //0x10
    ULONG Reserved:30;                                                      //0x10
};
/* Used in */
// _PROCESSOR_POWER_POLICY

