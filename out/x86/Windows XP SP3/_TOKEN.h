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

//0xa8 bytes (sizeof)
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
    struct _SID_AND_ATTRIBUTES* RestrictedSids;                             //0x6c
    VOID* PrimaryGroup;                                                     //0x70
    struct _LUID_AND_ATTRIBUTES* Privileges;                                //0x74
    ULONG* DynamicPart;                                                     //0x78
    struct _ACL* DefaultDacl;                                               //0x7c
    enum _TOKEN_TYPE TokenType;                                             //0x80
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x84
    ULONG TokenFlags;                                                       //0x88
    UCHAR TokenInUse;                                                       //0x8c
    struct _SECURITY_TOKEN_PROXY_DATA* ProxyData;                           //0x90
    struct _SECURITY_TOKEN_AUDIT_DATA* AuditData;                           //0x94
    struct _LUID OriginatingLogonSession;                                   //0x98
    ULONG VariablePart;                                                     //0xa0
};
