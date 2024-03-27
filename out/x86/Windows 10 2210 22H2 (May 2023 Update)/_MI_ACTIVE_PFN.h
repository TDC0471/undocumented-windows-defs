#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_ACTIVE_PFN
{
    union
    {
        struct
        {
            ULONG Tradable:1;                                               //0x0
            ULONG NonPagedBuddy:28;                                         //0x0
        } Leaf;                                                             //0x0
        struct
        {
            ULONG Tradable:1;                                               //0x0
            ULONG WsleAge:3;                                                //0x0
            ULONG NonPagedBuddy:28;                                         //0x0
        } PageTable;                                                        //0x0
        ULONG EntireActiveField;                                            //0x0
    };
};
/* Used in */
// _MMPFN

