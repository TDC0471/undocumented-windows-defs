#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_LUID.h>
#include <_DEVICE_MAP.h>
#include <_UNICODE_STRING.h>
#include <_SEP_CACHED_HANDLES_TABLE.h>
#include <_EX_PUSH_LOCK.h>
#include <_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.h>
#include <_SEP_SID_VALUES_BLOCK.h>
#include <_OB_HANDLE_REVOCATION_BLOCK.h>
#include <_EJOB.h>
#include <_LIST_ENTRY.h>

//0x6c bytes (sizeof)
struct _SEP_LOGON_SESSION_REFERENCES
{
    struct _SEP_LOGON_SESSION_REFERENCES* Next;                             //0x0
    struct _LUID LogonId;                                                   //0x4
    struct _LUID BuddyLogonId;                                              //0xc
    LONG ReferenceCount;                                                    //0x14
    ULONG Flags;                                                            //0x18
    struct _DEVICE_MAP* pDeviceMap;                                         //0x1c
    VOID* Token;                                                            //0x20
    struct _UNICODE_STRING AccountName;                                     //0x24
    struct _UNICODE_STRING AuthorityName;                                   //0x2c
    struct _SEP_CACHED_HANDLES_TABLE CachedHandlesTable;                    //0x34
    struct _EX_PUSH_LOCK SharedDataLock;                                    //0x3c
    struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* SharedClaimAttributes;  //0x40
    struct _SEP_SID_VALUES_BLOCK* SharedSidValues;                          //0x44
    struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock;                     //0x48
    struct _EJOB* ServerSilo;                                               //0x58
    struct _LUID SiblingAuthId;                                             //0x5c
    struct _LIST_ENTRY TokenList;                                           //0x64
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _SEP_SILOSTATE
// _TOKEN

