#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>

//0x18 bytes (sizeof)
struct _SEP_LOGON_SESSION_REFERENCES
{
    struct _SEP_LOGON_SESSION_REFERENCES* Next;                             //0x0
    struct _LUID LogonId;                                                   //0x4
    ULONG ReferenceCount;                                                   //0xc
    ULONG Flags;                                                            //0x10
    struct _DEVICE_MAP* pDeviceMap;                                         //0x14
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

