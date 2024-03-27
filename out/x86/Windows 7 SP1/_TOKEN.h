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

//0x1e0 bytes (sizeof)
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
    ULONG SessionId;                                                        //0x74
    ULONG UserAndGroupCount;                                                //0x78
    ULONG RestrictedSidCount;                                               //0x7c
    ULONG VariableLength;                                                   //0x80
    ULONG DynamicCharged;                                                   //0x84
    ULONG DynamicAvailable;                                                 //0x88
    ULONG DefaultOwnerIndex;                                                //0x8c
    struct _SID_AND_ATTRIBUTES* UserAndGroups;                              //0x90
    struct _SID_AND_ATTRIBUTES* RestrictedSids;                             //0x94
    VOID* PrimaryGroup;                                                     //0x98
    ULONG* DynamicPart;                                                     //0x9c
    struct _ACL* DefaultDacl;                                               //0xa0
    enum _TOKEN_TYPE TokenType;                                             //0xa4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0xa8
    ULONG TokenFlags;                                                       //0xac
    UCHAR TokenInUse;                                                       //0xb0
    ULONG IntegrityLevelIndex;                                              //0xb4
    ULONG MandatoryPolicy;                                                  //0xb8
    struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;                     //0xbc
    struct _LUID OriginatingLogonSession;                                   //0xc0
    struct _SID_AND_ATTRIBUTES_HASH SidHash;                                //0xc8
    struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;                      //0x150
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pSecurityAttributes; //0x1d8
    ULONG VariablePart;                                                     //0x1dc
};
