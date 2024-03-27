#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_ETW_LAST_ENABLE_INFO.h>
#include <_TRACE_ENABLE_INFO.h>
#include <_ETW_FILTER_HEADER.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>

//0x190 bytes (sizeof)
struct _ETW_GUID_ENTRY
{
    struct _LIST_ENTRY GuidList;                                            //0x0
    volatile LONGLONG RefCount;                                             //0x10
    struct _GUID Guid;                                                      //0x18
    struct _LIST_ENTRY RegListHead;                                         //0x28
    VOID* SecurityDescriptor;                                               //0x38
    union
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;                            //0x40
        ULONGLONG MatchId;                                                  //0x40
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;                           //0x50
    struct _TRACE_ENABLE_INFO EnableInfo[8];                                //0x70
    struct _ETW_FILTER_HEADER* FilterData;                                  //0x170
    UCHAR HostSilo;                                                         //0x178
    struct _EX_PUSH_LOCK Lock;                                              //0x180
    struct _ETHREAD* LockOwner;                                             //0x188
};
/* Used in */
// _ETW_REG_ENTRY
// _ETW_SILODRIVERSTATE

