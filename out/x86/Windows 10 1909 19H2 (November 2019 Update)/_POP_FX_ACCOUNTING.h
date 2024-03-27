#pragma once
/* ------------------ */

#include <_POP_FX_ACTIVE_TIME_ACCOUNTING.h>

//0xd8 bytes (sizeof)
struct _POP_FX_ACCOUNTING
{
    ULONG Lock;                                                             //0x0
    UCHAR Active;                                                           //0x4
    ULONG DripsRequiredState;                                               //0x8
    LONG Level;                                                             //0xc
    LONGLONG ActiveStamp;                                                   //0x10
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsActiveTimeAccounting;           //0x18
    struct _POP_FX_ACTIVE_TIME_ACCOUNTING CsCriticalActiveTimeAccounting;   //0x78
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE

