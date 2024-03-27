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

//0x580 bytes (sizeof)
struct _SEGMENT_HEAP
{
    struct RTL_HP_ENV_HANDLE EnvHandle;                                     //0x0
    ULONG Signature;                                                        //0x8
    ULONG GlobalFlags;                                                      //0xc
    ULONG Interceptor;                                                      //0x10
    USHORT ProcessHeapListIndex;                                            //0x14
    USHORT AllocatedFromMetadata:1;                                         //0x16
    union
    {
        struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;                 //0x18
        struct
        {
            ULONG ReservedMustBeZero1;                                      //0x18
            VOID* UserContext;                                              //0x1c
            ULONG ReservedMustBeZero2;                                      //0x20
            VOID* Spare;                                                    //0x24
        };
    };
    ULONG LargeMetadataLock;                                                //0x40
    struct _RTL_RB_TREE LargeAllocMetadata;                                 //0x44
    volatile ULONG LargeReservedPages;                                      //0x4c
    volatile ULONG LargeCommittedPages;                                     //0x50
    union _RTL_RUN_ONCE StackTraceInitVar;                                  //0x54
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;                             //0x80
    USHORT GlobalLockCount;                                                 //0xac
    ULONG GlobalLockOwner;                                                  //0xb0
    ULONG ContextExtendLock;                                                //0xb4
    UCHAR* AllocatedBase;                                                   //0xb8
    UCHAR* UncommittedBase;                                                 //0xbc
    UCHAR* ReservedLimit;                                                   //0xc0
    struct _HEAP_SEG_CONTEXT SegContexts[2];                                //0x100
    struct _HEAP_VS_CONTEXT VsContext;                                      //0x200
    struct _HEAP_LFH_CONTEXT LfhContext;                                    //0x2c0
};
/* Used in */
// _EX_HEAP_POOL_NODE
// _EX_HEAP_SESSION_STATE
// _EX_POOL_HEAP_MANAGER_STATE
// _RTLP_HP_METADATA_HEAP_CTX

