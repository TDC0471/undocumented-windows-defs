#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_TRACE_ENABLE_CONTEXT.h>
#include <_TRACE_ENABLE_INFO.h>

//0x170 bytes (sizeof)
struct _ETW_GUID_ENTRY
{
    struct _LIST_ENTRY GuidList;                                            //0x0
    volatile LONG RefCount;                                                 //0x10
    struct _GUID Guid;                                                      //0x14
    struct _LIST_ENTRY RegListHead;                                         //0x28
    VOID* SecurityDescriptor;                                               //0x38
    struct _TRACE_ENABLE_CONTEXT LegacyEnableContext;                       //0x40
    ULONG LegacyProviderEnabled;                                            //0x48
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;                           //0x50
    struct _TRACE_ENABLE_INFO EnableInfo[8];                                //0x70
};
/* Used in */
// _ETW_REG_ENTRY

