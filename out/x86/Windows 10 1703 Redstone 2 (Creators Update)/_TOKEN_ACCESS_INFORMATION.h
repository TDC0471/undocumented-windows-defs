#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES_HASH.h>
#include <_TOKEN_PRIVILEGES.h>
#include <_LUID.h>
#include <_TOKEN_TYPE.h>
#include <_SECURITY_IMPERSONATION_LEVEL.h>
#include <_TOKEN_MANDATORY_POLICY.h>

//0x38 bytes (sizeof)
struct _TOKEN_ACCESS_INFORMATION
{
    struct _SID_AND_ATTRIBUTES_HASH* SidHash;                               //0x0
    struct _SID_AND_ATTRIBUTES_HASH* RestrictedSidHash;                     //0x4
    struct _TOKEN_PRIVILEGES* Privileges;                                   //0x8
    struct _LUID AuthenticationId;                                          //0xc
    enum _TOKEN_TYPE TokenType;                                             //0x14
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x18
    struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;                         //0x1c
    ULONG Flags;                                                            //0x20
    ULONG AppContainerNumber;                                               //0x24
    VOID* PackageSid;                                                       //0x28
    struct _SID_AND_ATTRIBUTES_HASH* CapabilitiesHash;                      //0x2c
    VOID* TrustLevelSid;                                                    //0x30
    VOID* SecurityAttributes;                                               //0x34
};
/* Used in */
// _WMI_LOGGER_CONTEXT

