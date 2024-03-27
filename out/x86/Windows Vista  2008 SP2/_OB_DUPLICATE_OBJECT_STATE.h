#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_OBJECT_TYPE.h>
#include <_HANDLE_TABLE_ENTRY_INFO.h>

//0x1c bytes (sizeof)
struct _OB_DUPLICATE_OBJECT_STATE
{
    struct _EPROCESS* SourceProcess;                                        //0x0
    VOID* SourceHandle;                                                     //0x4
    VOID* Object;                                                           //0x8
    struct _OBJECT_TYPE* ObjectType;                                        //0xc
    ULONG TargetAccess;                                                     //0x10
    struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;                             //0x14
    ULONG HandleAttributes;                                                 //0x18
};
/* Used in */
// _KALPC_HANDLE_DATA

