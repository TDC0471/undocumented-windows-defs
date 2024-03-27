#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_ETW_LAST_ENABLE_INFO.h>
#include <_TRACE_ENABLE_INFO.h>
#include <_EVENT_FILTER_HEADER.h>

//0x178 bytes (sizeof)
struct _ETW_GUID_ENTRY
{
    struct _LIST_ENTRY GuidList;                                            //0x0
    volatile LONG RefCount;                                                 //0x8
    struct _GUID Guid;                                                      //0xc
    struct _LIST_ENTRY RegListHead;                                         //0x1c
    VOID* SecurityDescriptor;                                               //0x24
    union
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;                            //0x28
        ULONGLONG MatchId;                                                  //0x28
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;                           //0x38
    struct _TRACE_ENABLE_INFO EnableInfo[8];                                //0x58
    struct _EVENT_FILTER_HEADER* FilterData[8];                             //0x158
};
/* Used in */
// _ETW_REG_ENTRY

