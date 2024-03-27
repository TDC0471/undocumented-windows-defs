#pragma once
/* ------------------ */

#include <_TOKEN_SOURCE.h>
#include <_LUID.h>
#include <_LARGE_INTEGER.h>
#include <_ERESOURCE.h>
#include <_SEP_TOKEN_PRIVILEGES.h>
#include <_SEP_AUDIT_POLICY.h>
#include <_SID_AND_ATTRIBUTES.h>
#include <_ACL.h>
#include <_TOKEN_TYPE.h>
#include <_SECURITY_IMPERSONATION_LEVEL.h>
#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_SID_AND_ATTRIBUTES_HASH.h>
#include <_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.h>
#include <_SEP_LOWBOX_NUMBER_ENTRY.h>
#include <_SEP_LOWBOX_HANDLES_ENTRY.h>
#include <_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.h>
#include <_TOKEN.h>
#include <_SEP_SID_VALUES_BLOCK.h>

//0x478 bytes (sizeof)
struct _TOKEN
{
    struct _TOKEN_SOURCE TokenSource;                                       //0x0
    struct _LUID TokenId;                                                   //0x10
    struct _LUID AuthenticationId;                                          //0x18
    struct _LUID ParentTokenId;                                             //0x20
    union _LARGE_INTEGER ExpirationTime;                                    //0x28
    struct _ERESOURCE* TokenLock;                                           //0x30
    struct _LUID ModifiedId;                                                //0x38
    struct _SEP_TOKEN_PRIVILEGES Privileges;                                //0x40
    struct _SEP_AUDIT_POLICY AuditPolicy;                                   //0x58
    ULONG SessionId;                                                        //0x78
    ULONG UserAndGroupCount;                                                //0x7c
    ULONG RestrictedSidCount;                                               //0x80
    ULONG VariableLength;                                                   //0x84
    ULONG DynamicCharged;                                                   //0x88
    ULONG DynamicAvailable;                                                 //0x8c
    ULONG DefaultOwnerIndex;                                                //0x90
    struct _SID_AND_ATTRIBUTES* UserAndGroups;                              //0x98
    struct _SID_AND_ATTRIBUTES* RestrictedSids;                             //0xa0
    VOID* PrimaryGroup;                                                     //0xa8
    ULONG* DynamicPart;                                                     //0xb0
    struct _ACL* DefaultDacl;                                               //0xb8
    enum _TOKEN_TYPE TokenType;                                             //0xc0
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0xc4
    ULONG TokenFlags;                                                       //0xc8
    UCHAR TokenInUse;                                                       //0xcc
    ULONG IntegrityLevelIndex;                                              //0xd0
    ULONG MandatoryPolicy;                                                  //0xd4
    struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;                     //0xd8
    struct _LUID OriginatingLogonSession;                                   //0xe0
    struct _SID_AND_ATTRIBUTES_HASH SidHash;                                //0xe8
    struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;                      //0x1f8
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pSecurityAttributes; //0x308
    VOID* Package;                                                          //0x310
    struct _SID_AND_ATTRIBUTES* Capabilities;                               //0x318
    ULONG CapabilityCount;                                                  //0x320
    struct _SID_AND_ATTRIBUTES_HASH CapabilitiesHash;                       //0x328
    struct _SEP_LOWBOX_NUMBER_ENTRY* LowboxNumberEntry;                     //0x438
    struct _SEP_LOWBOX_HANDLES_ENTRY* LowboxHandlesEntry;                   //0x440
    struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* pClaimAttributes;       //0x448
    VOID* TrustLevelSid;                                                    //0x450
    struct _TOKEN* TrustLinkedToken;                                        //0x458
    VOID* IntegrityLevelSidValue;                                           //0x460
    struct _SEP_SID_VALUES_BLOCK* TokenSidValues;                           //0x468
    ULONGLONG VariablePart;                                                 //0x470
};
/* Used in */
// _TOKEN

