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
        ULONGLONG Sequence:48;                                              //0x0
        ULONGLONG Reserved:4;                                               //0x8
        ULONGLONG NextEntry:60;                                             //0x8
    } HeaderX64;                                                            //0x0
};
/* Used in */
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_LOOKASIDE
// _KPRCB
// _MMPAGING_FILE
// _PF_KERNEL_GLOBALS
// _VF_TARGET_VERIFIED_DRIVER_DATA
