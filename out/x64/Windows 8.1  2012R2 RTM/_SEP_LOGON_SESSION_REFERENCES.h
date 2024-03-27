#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>
#include <_UNICODE_STRING.h>
#include <_SEP_LOWBOX_HANDLES_TABLE.h>

//0x68 bytes (sizeof)
struct _SEP_LOGON_SESSION_REFERENCES
{
    struct _SEP_LOGON_SESSION_REFERENCES* Next;                             //0x0
    struct _LUID LogonId;                                                   //0x8
    struct _LUID BuddyLogonId;                                              //0x10
    LONGLONG ReferenceCount;                                                //0x18
    ULONG Flags;                                                            //0x20
    struct _DEVICE_MAP* pDeviceMap;                                         //0x28
    VOID* Token;                                                            //0x30
    struct _UNICODE_STRING AccountName;                                     //0x38
    struct _UNICODE_STRING AuthorityName;                                   //0x48
    struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable;                    //0x58
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

