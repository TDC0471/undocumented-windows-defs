#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KSCHEDULING_GROUP_POLICY
{
    union
    {
        ULONG Value;                                                        //0x0
        USHORT Weight;                                                      //0x0
        struct
        {
            USHORT MinRate;                                                 //0x0
            USHORT MaxRate;                                                 //0x2
        };
    };
    union
    {
        ULONG AllFlags;                                                     //0x4
        struct
        {
            ULONG Type:1;                                                   //0x4
            ULONG Disabled:1;                                               //0x4
            ULONG Spare1:30;                                                //0x4
        };
    };
};
/* Used in */
// _KSCHEDULING_GROUP

