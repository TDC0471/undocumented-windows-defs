#pragma once
/* ------------------ */

#include <_TOKEN_SOURCE.h>
#include <_LUID.h>
#include <_LARGE_INTEGER.h>
#include <_ERESOURCE.h>
#include <_SEP_AUDIT_POLICY.h>
#include <_SID_AND_ATTRIBUTES.h>
#include <_LUID_AND_ATTRIBUTES.h>
#include <_ACL.h>
#include <_TOKEN_TYPE.h>
#include <_SECURITY_IMPERSONATION_LEVEL.h>
#include <_SECURITY_TOKEN_PROXY_DATA.h>
#include <_SECURITY_TOKEN_AUDIT_DATA.h>
#include <_SEP_LOGON_SESSION_REFERENCES.h>

//0xd0 bytes (sizeof)
struct _TOKEN
{
    struct _TOKEN_SOURCE TokenSource;                                       //0x0
    struct _LUID TokenId;                                                   //0x10
    struct _LUID AuthenticationId;                                          //0x18
    struct _LUID ParentTokenId;                                             //0x20
    union _LARGE_INTEGER ExpirationTime;                                    //0x28
    struct _ERESOURCE* TokenLock;                                           //0x30
    struct _SEP_AUDIT_POLICY AuditPolicy;                                   //0x38
    struct _LUID ModifiedId;                                                //0x40
    ULONG SessionId;                                                        //0x48
    ULONG UserAndGroupCount;                                                //0x4c
    ULONG RestrictedSidCount;                                               //0x50
    ULONG PrivilegeCount;                                                   //0x54
    ULONG VariableLength;                                                   //0x58
    ULONG DynamicCharged;                                                   //0x5c
    ULONG DynamicAvailable;                                                 //0x60
    ULONG DefaultOwnerIndex;                                                //0x64
    struct _SID_AND_ATTRIBUTES* UserAndGroups;                              //0x68
    struct _SID_AND_ATTRIBUTES* RestrictedSids;                             //0x70
    VOID* PrimaryGroup;                                                     //0x78
    struct _LUID_AND_ATTRIBUTES* Privileges;                                //0x80
    ULONG* DynamicPart;                                                     //0x88
    struct _ACL* DefaultDacl;                                               //0x90
    enum _TOKEN_TYPE TokenType;                                             //0x98
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x9c
    UCHAR TokenFlags;                                                       //0xa0
    UCHAR TokenInUse;                                                       //0xa1
    struct _SECURITY_TOKEN_PROXY_DATA* ProxyData;                           //0xa8
    struct _SECURITY_TOKEN_AUDIT_DATA* AuditData;                           //0xb0
    struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;                     //0xb8
    struct _LUID OriginatingLogonSession;                                   //0xc0
    ULONG VariablePart;                                                     //0xc8
};
