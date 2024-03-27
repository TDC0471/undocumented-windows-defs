#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _POP_FX_ACCOUNTING
{
    ULONG Lock;                                                             //0x0
    UCHAR Active;                                                           //0x4
    ULONG DripsRequiredState;                                               //0x8
    LONG Level;                                                             //0xc
    LONGLONG ActiveStamp;                                                   //0x10
    ULONGLONG CsActiveTime;                                                 //0x18
    LONGLONG CriticalActiveTime;                                            //0x20
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE

