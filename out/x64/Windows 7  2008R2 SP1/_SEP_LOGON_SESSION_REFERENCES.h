#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>
#include <_UNICODE_STRING.h>

//0x50 bytes (sizeof)
struct _SEP_LOGON_SESSION_REFERENCES
{
    struct _SEP_LOGON_SESSION_REFERENCES* Next;                             //0x0
    struct _LUID LogonId;                                                   //0x8
    struct _LUID BuddyLogonId;                                              //0x10
    ULONG ReferenceCount;                                                   //0x18
    ULONG Flags;                                                            //0x1c
    struct _DEVICE_MAP* pDeviceMap;                                         //0x20
    VOID* Token;                                                            //0x28
    struct _UNICODE_STRING AccountName;                                     //0x30
    struct _UNICODE_STRING AuthorityName;                                   //0x40
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

