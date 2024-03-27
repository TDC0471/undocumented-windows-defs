#pragma once
/* ------------------ */

#include <RTL_HP_ENV_HANDLE.h>
#include <_RTL_HEAP_MEMORY_LIMIT_DATA.h>
#include <_RTL_RB_TREE.h>
#include <_RTL_RUN_ONCE.h>
#include <_HEAP_RUNTIME_MEMORY_STATS.h>
#include <_HEAP_SEG_CONTEXT.h>
#include <_HEAP_VS_CONTEXT.h>
#include <_HEAP_LFH_CONTEXT.h>

//0x800 bytes (sizeof)
struct _SEGMENT_HEAP
{
    struct RTL_HP_ENV_HANDLE EnvHandle;                                     //0x0
    ULONG Signature;                                                        //0x10
    ULONG GlobalFlags;                                                      //0x14
    ULONG Interceptor;                                                      //0x18
    USHORT ProcessHeapListIndex;                                            //0x1c
    USHORT AllocatedFromMetadata:1;                                         //0x1e
    union
    {
        struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;                 //0x20
        struct
        {
            ULONGLONG ReservedMustBeZero1;                                  //0x20
            VOID* UserContext;                                              //0x28
            ULONGLONG ReservedMustBeZero2;                                  //0x30
            VOID* Spare;                                                    //0x38
        };
    };
    ULONGLONG LargeMetadataLock;                                            //0x40
    struct _RTL_RB_TREE LargeAllocMetadata;                                 //0x48
    volatile ULONGLONG LargeReservedPages;                                  //0x58
    volatile ULONGLONG LargeCommittedPages;                                 //0x60
    union _RTL_RUN_ONCE StackTraceInitVar;                                  //0x68
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;                             //0x80
    USHORT GlobalLockCount;                                                 //0xd8
    ULONG GlobalLockOwner;                                                  //0xdc
    ULONGLONG ContextExtendLock;                                            //0xe0
    UCHAR* AllocatedBase;                                                   //0xe8
    UCHAR* UncommittedBase;                                                 //0xf0
    UCHAR* ReservedLimit;                                                   //0xf8
    struct _HEAP_SEG_CONTEXT SegContexts[2];                                //0x100
    struct _HEAP_VS_CONTEXT VsContext;                                      //0x280
    struct _HEAP_LFH_CONTEXT LfhContext;                                    //0x340
};
/* Used in */
// _EX_HEAP_POOL_NODE
// _EX_HEAP_SESSION_STATE
// _EX_POOL_HEAP_MANAGER_STATE
// _RTLP_HP_METADATA_HEAP_CTX

