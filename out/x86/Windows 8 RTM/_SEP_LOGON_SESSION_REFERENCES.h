#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>
#include <_UNICODE_STRING.h>
#include <_SEP_LOWBOX_HANDLES_TABLE.h>

//0x3c bytes (sizeof)
struct _SEP_LOGON_SESSION_REFERENCES
{
    struct _SEP_LOGON_SESSION_REFERENCES* Next;                             //0x0
    struct _LUID LogonId;                                                   //0x4
    struct _LUID BuddyLogonId;                                              //0xc
    ULONG ReferenceCount;                                                   //0x14
    ULONG Flags;                                                            //0x18
    struct _DEVICE_MAP* pDeviceMap;                                         //0x1c
    VOID* Token;                                                            //0x20
    struct _UNICODE_STRING AccountName;                                     //0x24
    struct _UNICODE_STRING AuthorityName;                                   //0x2c
    struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable;                    //0x34
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

