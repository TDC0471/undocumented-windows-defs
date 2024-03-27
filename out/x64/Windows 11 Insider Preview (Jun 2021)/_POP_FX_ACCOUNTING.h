#pragma once
/* ------------------ */

#include <_POP_FX_ACTIVE_TIME_ACCOUNTING.h>

//0xe0 bytes (sizeof)
struct _POP_FX_ACCOUNTING
{
    ULONGLONG Lock;                                                         //0x0
    UCHAR Active;                                                           //0x8
    ULONG DripsRequiredState;                                               //0xc
    LONG Level;                                                             //0x10
    LONGLONG ActiveStamp;                                                   //0x18
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;           //0x20
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;   //0x80
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE

