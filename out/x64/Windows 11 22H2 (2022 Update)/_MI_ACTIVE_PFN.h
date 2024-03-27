#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_ACTIVE_PFN
{
    union
    {
        struct
        {
            ULONGLONG Tradable:1;                                           //0x0
            ULONGLONG NonPagedBuddy:43;                                     //0x0
        } Leaf;                                                             //0x0
        struct
        {
            ULONGLONG Tradable:1;                                           //0x0
            ULONGLONG WsleAge:3;                                            //0x0
            ULONGLONG OldestWsleLeafEntries:10;                             //0x0
            ULONGLONG OldestWsleLeafAge:3;                                  //0x0
            ULONGLONG NonPagedBuddy:43;                                     //0x0
        } PageTable;                                                        //0x0
        ULONGLONG EntireActiveField;                                        //0x0
    };
};
/* Used in */
// _MMPFN

