#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>
#include <_UNICODE_STRING.h>
#include <_SEP_LOWBOX_HANDLES_TABLE.h>
#include <_EX_PUSH_LOCK.h>
#include <_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.h>
#include <_SEP_SID_VALUES_BLOCK.h>
#include <_OB_HANDLE_REVOCATION_BLOCK.h>
#include <_EJOB.h>

//0xb0 bytes (sizeof)
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
    struct _EX_PUSH_LOCK SharedDataLock;                                    //0x68
    struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* SharedClaimAttributes;  //0x70
    struct _SEP_SID_VALUES_BLOCK* SharedSidValues;                          //0x78
    struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock;                     //0x80
    struct _EJOB* ServerSilo;                                               //0xa0
    struct _LUID SiblingAuthId;                                             //0xa8
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

