#pragma once
/* ------------------ */

#include <_EPROCESS.h>
#include <_HANDLE_TABLE_ENTRY_INFO.h>

//0x18 bytes (sizeof)
struct _OB_DUPLICATE_OBJECT_STATE
{
    struct _EPROCESS* SourceProcess;                                        //0x0
    VOID* SourceHandle;                                                     //0x4
    VOID* Object;                                                           //0x8
    ULONG TargetAccess;                                                     //0xc
    struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;                             //0x10
    ULONG HandleAttributes;                                                 //0x14
};
/* Used in */
// _KALPC_HANDLE_DATA

