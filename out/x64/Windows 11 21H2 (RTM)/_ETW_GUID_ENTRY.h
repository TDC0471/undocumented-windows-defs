#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_ETW_LAST_ENABLE_INFO.h>
#include <_TRACE_ENABLE_INFO.h>
#include <_ETW_FILTER_HEADER.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_ETW_GUID_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>

//0x1a8 bytes (sizeof)
struct _ETW_GUID_ENTRY
{
    struct _LIST_ENTRY GuidList;                                            //0x0
    struct _LIST_ENTRY SiloGuidList;                                        //0x10
    volatile LONGLONG RefCount;                                             //0x20
    struct _GUID Guid;                                                      //0x28
    struct _LIST_ENTRY RegListHead;                                         //0x38
    VOID* SecurityDescriptor;                                               //0x48
    union
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;                            //0x50
        ULONGLONG MatchId;                                                  //0x50
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;                           //0x60
    struct _TRACE_ENABLE_INFO EnableInfo[8];                                //0x80
    struct _ETW_FILTER_HEADER* FilterData;                                  //0x180
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x188
    struct _ETW_GUID_ENTRY* HostEntry;                                      //0x190
    struct _EX_PUSH_LOCK Lock;                                              //0x198
    struct _ETHREAD* LockOwner;                                             //0x1a0
};
/* Used in */
// _ETW_GUID_ENTRY
// _ETW_REG_ENTRY
// _ETW_SILODRIVERSTATE

