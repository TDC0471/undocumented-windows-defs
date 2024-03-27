#pragma once
/* ------------------ */

#include <_PRIVILEGE_SET.h>
#include <_GENERIC_MAPPING.h>
#include <_GUID.h>
#include <_ACCESS_REASONS.h>

//0xd8 bytes (sizeof)
struct _AUX_ACCESS_DATA
{
    struct _PRIVILEGE_SET* PrivilegesUsed;                                  //0x0
    struct _GENERIC_MAPPING GenericMapping;                                 //0x8
    ULONG AccessesToAudit;                                                  //0x18
    ULONG MaximumAuditMask;                                                 //0x1c
    struct _GUID TransactionId;                                             //0x20
    VOID* NewSecurityDescriptor;                                            //0x30
    VOID* ExistingSecurityDescriptor;                                       //0x38
    VOID* ParentSecurityDescriptor;                                         //0x40
    VOID (*DeRefSecurityDescriptor)(VOID* arg1, VOID* arg2);                //0x48
    VOID* SDLock;                                                           //0x50
    struct _ACCESS_REASONS AccessReasons;                                   //0x58
};
