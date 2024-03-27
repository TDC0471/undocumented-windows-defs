#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _RTL_RANGE
{
    ULONGLONG Start;                                                        //0x0
    ULONGLONG End;                                                          //0x8
    VOID* UserData;                                                         //0x10
    VOID* Owner;                                                            //0x18
    UCHAR Attributes;                                                       //0x20
    UCHAR Flags;                                                            //0x21
};
/* Used in */
// _ARBITER_INSTANCE

