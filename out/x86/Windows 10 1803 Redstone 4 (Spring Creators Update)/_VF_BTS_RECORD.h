#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _VF_BTS_RECORD
{
    VOID* JumpedFrom;                                                       //0x0
    VOID* JumpedTo;                                                         //0x4
    ULONG Unused1:3;                                                        //0x8
    ULONG Predicted:4;                                                      //0x8
    ULONG Unused2:25;                                                       //0x8
};
