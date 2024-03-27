#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE
{
    ULONG Flags;                                                            //0x0
    ULONG Shift;                                                            //0x4
    ULONG TableSize;                                                        //0x8
    ULONG Pivot;                                                            //0xc
    ULONG DivisorMask;                                                      //0x10
    ULONG NumEntries;                                                       //0x14
    ULONG NonEmptyBuckets;                                                  //0x18
    ULONG NumEnumerators;                                                   //0x1c
    VOID* Directory;                                                        //0x20
};
/* Used in */
// _SEP_LOWBOX_HANDLES_TABLE
// _SEP_LOWBOX_NUMBER_MAPPING

