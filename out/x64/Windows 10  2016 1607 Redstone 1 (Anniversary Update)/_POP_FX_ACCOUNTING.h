#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _POP_FX_ACCOUNTING
{
    ULONGLONG Lock;                                                         //0x0
    UCHAR Active;                                                           //0x8
    ULONG DripsRequiredState;                                               //0xc
    LONG Level;                                                             //0x10
    LONGLONG ActiveStamp;                                                   //0x18
    ULONGLONG CsActiveTime;                                                 //0x20
    LONGLONG CriticalActiveTime;                                            //0x28
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE

