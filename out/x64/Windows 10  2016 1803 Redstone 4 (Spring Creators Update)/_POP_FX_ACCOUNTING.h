#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _POP_FX_ACCOUNTING
{
    ULONGLONG Lock;                                                         //0x0
    UCHAR Active;                                                           //0x8
    ULONG DripsRequiredState;                                               //0xc
    LONG Level;                                                             //0x10
    LONGLONG ActiveStamp;                                                   //0x18
    ULONGLONG CsActiveTime;                                                 //0x20
    LONGLONG CriticalActiveTime;                                            //0x28
    ULONGLONG CriticalActiveTimeBuckets[5];                                 //0x30
    ULONGLONG CsActiveTimeBuckets[5];                                       //0x58
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE

