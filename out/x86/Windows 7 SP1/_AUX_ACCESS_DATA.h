#pragma once
/* ------------------ */

#include <_PRIVILEGE_SET.h>
#include <_GENERIC_MAPPING.h>
#include <_GUID.h>
#include <_ACCESS_REASONS.h>

//0xc0 bytes (sizeof)
struct _AUX_ACCESS_DATA
{
    struct _PRIVILEGE_SET* PrivilegesUsed;                                  //0x0
    struct _GENERIC_MAPPING GenericMapping;                                 //0x4
    ULONG AccessesToAudit;                                                  //0x14
    ULONG MaximumAuditMask;                                                 //0x18
    struct _GUID TransactionId;                                             //0x1c
    VOID* NewSecurityDescriptor;                                            //0x2c
    VOID* ExistingSecurityDescriptor;                                       //0x30
    VOID* ParentSecurityDescriptor;                                         //0x34
    VOID (*DeRefSecurityDescriptor)(VOID* arg1, VOID* arg2);                //0x38
    VOID* SDLock;                                                           //0x3c
    struct _ACCESS_REASONS AccessReasons;                                   //0x40
};
