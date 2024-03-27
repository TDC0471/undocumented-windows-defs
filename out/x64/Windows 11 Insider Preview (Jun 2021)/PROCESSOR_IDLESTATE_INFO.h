#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct PROCESSOR_IDLESTATE_INFO
{
    ULONG TimeCheck;                                                        //0x0
    UCHAR DemotePercent;                                                    //0x4
    UCHAR PromotePercent;                                                   //0x5
    UCHAR Spare[2];                                                         //0x6
};
/* Used in */
// PROCESSOR_IDLESTATE_POLICY

