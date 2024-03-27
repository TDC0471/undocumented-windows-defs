#pragma once
/* ------------------ */

#include <_LUID.h>
#include <_SECURITY_SUBJECT_CONTEXT.h>
#include <_INITIAL_PRIVILEGE_SET.h>
#include <_PRIVILEGE_SET.h>
#include <_UNICODE_STRING.h>

//0x74 bytes (sizeof)
struct _ACCESS_STATE
{
    struct _LUID OperationID;                                               //0x0
    UCHAR SecurityEvaluated;                                                //0x8
    UCHAR GenerateAudit;                                                    //0x9
    UCHAR GenerateOnClose;                                                  //0xa
    UCHAR PrivilegesAllocated;                                              //0xb
    ULONG Flags;                                                            //0xc
    ULONG RemainingDesiredAccess;                                           //0x10
    ULONG PreviouslyGrantedAccess;                                          //0x14
    ULONG OriginalDesiredAccess;                                            //0x18
    struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;                //0x1c
    VOID* SecurityDescriptor;                                               //0x2c
    VOID* AuxData;                                                          //0x30
    union
    {
        struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;                  //0x34
        struct _PRIVILEGE_SET PrivilegeSet;                                 //0x34
    } Privileges;                                                           //0x34
    UCHAR AuditPrivileges;                                                  //0x60
    struct _UNICODE_STRING ObjectName;                                      //0x64
    struct _UNICODE_STRING ObjectTypeName;                                  //0x6c
};
/* Used in */
// _IO_SECURITY_CONTEXT
// _OBJECT_TYPE_INITIALIZER

