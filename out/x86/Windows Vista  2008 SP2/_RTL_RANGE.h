#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _RTL_RANGE
{
    ULONGLONG Start;                                                        //0x0
    ULONGLONG End;                                                          //0x8
    VOID* UserData;                                                         //0x10
    VOID* Owner;                                                            //0x14
    UCHAR Attributes;                                                       //0x18
    UCHAR Flags;                                                            //0x19
};
/* Used in */
// _ARBITER_INSTANCE

