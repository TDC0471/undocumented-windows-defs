#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _OBJECT_REF_STACK_INFO
{
    ULONG Sequence;                                                         //0x0
    USHORT Index;                                                           //0x4
    USHORT NumTraces;                                                       //0x6
    ULONG Tag;                                                              //0x8
};
/* Used in */
// _OBJECT_REF_INFO

