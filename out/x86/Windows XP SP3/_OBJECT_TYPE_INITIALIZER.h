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
#include <_SECURITY_OPERATION_CODE.h>
#include <_OBJECT_NAME_INFORMATION.h>

//0x4c bytes (sizeof)
struct _OBJECT_TYPE_INITIALIZER
{
    USHORT Length;                                                          //0x0
    UCHAR UseDefaultObject;                                                 //0x2
    UCHAR CaseInsensitive;                                                  //0x3
    ULONG InvalidAttributes;                                                //0x4
    struct _GENERIC_MAPPING GenericMapping;                                 //0x8
    ULONG ValidAccessMask;                                                  //0x18
    UCHAR SecurityRequired;                                                 //0x1c
    UCHAR MaintainHandleCount;                                              //0x1d
    UCHAR MaintainTypeList;                                                 //0x1e
    enum _POOL_TYPE PoolType;                                               //0x20
    ULONG DefaultPagedPoolCharge;                                           //0x24
    ULONG DefaultNonPagedPoolCharge;                                        //0x28
    VOID (*DumpProcedure)(VOID* arg1, struct _OBJECT_DUMP_CONTROL* arg2);   //0x2c
    LONG (*OpenProcedure)(enum _OB_OPEN_REASON arg1, struct _EPROCESS* arg2, VOID* arg3, ULONG arg4, ULONG arg5); //0x30
    VOID (*CloseProcedure)(struct _EPROCESS* arg1, VOID* arg2, ULONG arg3, ULONG arg4, ULONG arg5); //0x34
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x38
    LONG (*ParseProcedure)(VOID* arg1, VOID* arg2, struct _ACCESS_STATE* arg3, CHAR arg4, ULONG arg5, struct _UNICODE_STRING* arg6, struct _UNICODE_STRING* arg7, VOID* arg8, struct _SECURITY_QUALITY_OF_SERVICE* arg9, VOID** arg10); //0x3c
    LONG (*SecurityProcedure)(VOID* arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG* arg3, VOID* arg4, ULONG* arg5, VOID** arg6, enum _POOL_TYPE arg7, struct _GENERIC_MAPPING* arg8, CHAR arg9); //0x40
    LONG (*QueryNameProcedure)(VOID* arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION* arg3, ULONG arg4, ULONG* arg5); //0x44
    UCHAR (*OkayToCloseProcedure)(struct _EPROCESS* arg1, VOID* arg2, VOID* arg3, CHAR arg4); //0x48
};
/* Used in */
// _OBJECT_TYPE

