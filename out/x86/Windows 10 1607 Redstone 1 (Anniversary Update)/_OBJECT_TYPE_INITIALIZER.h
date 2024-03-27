#pragma once
/* ------------------ */

#include <_GENERIC_MAPPING.h>
#include <_POOL_TYPE.h>
#include <_OBJECT_DUMP_CONTROL.h>
#include <_OB_OPEN_REASON.h>
#include <_EPROCESS.h>
#include <_ACCESS_STATE.h>
#include <_UNICODE_STRING.h>
#include <_SECURITY_QUALITY_OF_SERVICE.h>
#include <_OB_EXTENDED_PARSE_PARAMETERS.h>
#include <_SECURITY_OPERATION_CODE.h>
#include <_OBJECT_NAME_INFORMATION.h>

//0x58 bytes (sizeof)
struct _OBJECT_TYPE_INITIALIZER
{
    USHORT Length;                                                          //0x0
    union
    {
        UCHAR ObjectTypeFlags;                                              //0x2
        struct
        {
            UCHAR CaseInsensitive:1;                                        //0x2
            UCHAR UnnamedObjectsOnly:1;                                     //0x2
            UCHAR UseDefaultObject:1;                                       //0x2
            UCHAR SecurityRequired:1;                                       //0x2
            UCHAR MaintainHandleCount:1;                                    //0x2
            UCHAR MaintainTypeList:1;                                       //0x2
            UCHAR SupportsObjectCallbacks:1;                                //0x2
            UCHAR CacheAligned:1;                                           //0x2
        };
    };
    union
    {
        UCHAR ObjectTypeFlags2;                                             //0x3
        struct
        {
            UCHAR UseExtendedParameters:1;                                  //0x3
            UCHAR Reserved:7;                                               //0x3
        };
    };
    ULONG ObjectTypeCode;                                                   //0x4
    ULONG InvalidAttributes;                                                //0x8
    struct _GENERIC_MAPPING GenericMapping;                                 //0xc
    ULONG ValidAccessMask;                                                  //0x1c
    ULONG RetainAccess;                                                     //0x20
    enum _POOL_TYPE PoolType;                                               //0x24
    ULONG DefaultPagedPoolCharge;                                           //0x28
    ULONG DefaultNonPagedPoolCharge;                                        //0x2c
    VOID (*DumpProcedure)(VOID* arg1, struct _OBJECT_DUMP_CONTROL* arg2);   //0x30
    LONG (*OpenProcedure)(enum _OB_OPEN_REASON arg1, CHAR arg2, struct _EPROCESS* arg3, VOID* arg4, ULONG* arg5, ULONG arg6); //0x34
    VOID (*CloseProcedure)(struct _EPROCESS* arg1, VOID* arg2, ULONG arg3, ULONG arg4); //0x38
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x3c
    union
    {
        LONG (*ParseProcedure)(VOID* arg1, VOID* arg2, struct _ACCESS_STATE* arg3, CHAR arg4, ULONG arg5, struct _UNICODE_STRING* arg6, struct _UNICODE_STRING* arg7, VOID* arg8, struct _SECURITY_QUALITY_OF_SERVICE* arg9, VOID** arg10); //0x40
        LONG (*ParseProcedureEx)(VOID* arg1, VOID* arg2, struct _ACCESS_STATE* arg3, CHAR arg4, ULONG arg5, struct _UNICODE_STRING* arg6, struct _UNICODE_STRING* arg7, VOID* arg8, struct _SECURITY_QUALITY_OF_SERVICE* arg9, struct _OB_EXTENDED_PARSE_PARAMETERS* arg10, VOID** arg11); //0x40
    };
    LONG (*SecurityProcedure)(VOID* arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG* arg3, VOID* arg4, ULONG* arg5, VOID** arg6, enum _POOL_TYPE arg7, struct _GENERIC_MAPPING* arg8, CHAR arg9); //0x44
    LONG (*QueryNameProcedure)(VOID* arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION* arg3, ULONG arg4, ULONG* arg5, CHAR arg6); //0x48
    UCHAR (*OkayToCloseProcedure)(struct _EPROCESS* arg1, VOID* arg2, VOID* arg3, CHAR arg4); //0x4c
    ULONG WaitObjectFlagMask;                                               //0x50
    USHORT WaitObjectFlagOffset;                                            //0x54
    USHORT WaitObjectPointerOffset;                                         //0x56
};
/* Used in */
// _OBJECT_TYPE

