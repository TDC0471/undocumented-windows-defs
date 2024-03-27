#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _SLIST_HEADER
{
    struct
    {
        ULONGLONG Alignment;                                                //0x0
        ULONGLONG Region;                                                   //0x8
    };
    struct
    {
        ULONGLONG Depth:16;                                                 //0x0
        ULONGLONG Sequence:9;                                               //0x0
        ULONGLONG NextEntry:39;                                             //0x0
        ULONGLONG HeaderType:1;                                             //0x8
        ULONGLONG Init:1;                                                   //0x8
        ULONGLONG Reserved:59;                                              //0x8
        ULONGLONG Region:3;                                                 //0x8
    } Header8;                                                              //0x0
    struct
    {
        ULONGLONG Depth:16;                                                 //0x0
        ULONGLONG Sequence:48;                                              //0x0
        ULONGLONG HeaderType:1;                                             //0x8
        ULONGLONG Reserved:3;                                               //0x8
        ULONGLONG NextEntry:60;                                             //0x8
    } HeaderX64;                                                            //0x0
};
/* Used in */
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_LOOKASIDE
// _KPRCB
// _PF_KERNEL_GLOBALS
// _VF_TARGET_VERIFIED_DRIVER_DATA

