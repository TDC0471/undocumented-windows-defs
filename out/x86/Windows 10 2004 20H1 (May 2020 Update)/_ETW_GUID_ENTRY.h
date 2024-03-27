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

//0x178 bytes (sizeof)
struct _ETW_GUID_ENTRY
{
    struct _LIST_ENTRY GuidList;                                            //0x0
    struct _LIST_ENTRY SiloGuidList;                                        //0x8
    volatile LONG RefCount;                                                 //0x10
    struct _GUID Guid;                                                      //0x14
    struct _LIST_ENTRY RegListHead;                                         //0x24
    VOID* SecurityDescriptor;                                               //0x2c
    union
    {
        struct _ETW_LAST_ENABLE_INFO LastEnable;                            //0x30
        ULONGLONG MatchId;                                                  //0x30
    };
    struct _TRACE_ENABLE_INFO ProviderEnableInfo;                           //0x40
    struct _TRACE_ENABLE_INFO EnableInfo[8];                                //0x60
    struct _ETW_FILTER_HEADER* FilterData;                                  //0x160
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x164
    struct _ETW_GUID_ENTRY* HostEntry;                                      //0x168
    struct _EX_PUSH_LOCK Lock;                                              //0x16c
    struct _ETHREAD* LockOwner;                                             //0x170
};
/* Used in */
// _ETW_GUID_ENTRY
// _ETW_REG_ENTRY
// _ETW_SILODRIVERSTATE

