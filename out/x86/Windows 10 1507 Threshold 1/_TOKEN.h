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

//0x298 bytes (sizeof)
struct _TOKEN
{
    struct _TOKEN_SOURCE TokenSource;                                       //0x0
    struct _LUID TokenId;                                                   //0x10
    struct _LUID AuthenticationId;                                          //0x18
    struct _LUID ParentTokenId;                                             //0x20
    union _LARGE_INTEGER ExpirationTime;                                    //0x28
    struct _ERESOURCE* TokenLock;                                           //0x30
    struct _LUID ModifiedId;                                                //0x34
    struct _SEP_TOKEN_PRIVILEGES Privileges;                                //0x40
    struct _SEP_AUDIT_POLICY AuditPolicy;                                   //0x58
    ULONG SessionId;                                                        //0x78
    ULONG UserAndGroupCount;                                                //0x7c
    ULONG RestrictedSidCount;                                               //0x80
    ULONG VariableLength;                                                   //0x84
    ULONG DynamicCharged;                                                   //0x88
    ULONG DynamicAvailable;                                                 //0x8c
    ULONG DefaultOwnerIndex;                                                //0x90
    struct _SID_AND_ATTRIBUTES* UserAndGroups;                              //0x94
    struct _SID_AND_ATTRIBUTES* RestrictedSids;                             //0x98
    VOID* PrimaryGroup;                                                     //0x9c
    ULONG* DynamicPart;                                                     //0xa0
    struct _ACL* DefaultDacl;                                               //0xa4
    enum _TOKEN_TYPE TokenType;                                             //0xa8
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0xac
    ULONG TokenFlags;                                                       //0xb0
    UCHAR TokenInUse;                                                       //0xb4
    ULONG IntegrityLevelIndex;                                              //0xb8
    ULONG MandatoryPolicy;                                                  //0xbc
    struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;                     //0xc0
    struct _LUID OriginatingLogonSession;                                   //0xc4
    struct _SID_AND_ATTRIBUTES_HASH SidHash;                                //0xcc
    struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;                      //0x154
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pSecurityAttributes; //0x1dc
    VOID* Package;                                                          //0x1e0
    struct _SID_AND_ATTRIBUTES* Capabilities;                               //0x1e4
    ULONG CapabilityCount;                                                  //0x1e8
    struct _SID_AND_ATTRIBUTES_HASH CapabilitiesHash;                       //0x1ec
    struct _SEP_LOWBOX_NUMBER_ENTRY* LowboxNumberEntry;                     //0x274
    struct _SEP_LOWBOX_HANDLES_ENTRY* LowboxHandlesEntry;                   //0x278
    struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION* pClaimAttributes;       //0x27c
    VOID* TrustLevelSid;                                                    //0x280
    struct _TOKEN* TrustLinkedToken;                                        //0x284
    VOID* IntegrityLevelSidValue;                                           //0x288
    struct _SEP_SID_VALUES_BLOCK* TokenSidValues;                           //0x28c
    ULONG VariablePart;                                                     //0x290
};
/* Used in */
// _TOKEN

