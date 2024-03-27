#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPARTITION.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>

//0x88 bytes (sizeof)
struct _EPARTITION
{
    VOID* MmPartition;                                                      //0x0
    VOID* CcPartition;                                                      //0x8
    VOID* ExPartition;                                                      //0x10
    VOID* SmPartition;                                                      //0x18
    LONGLONG HardReferenceCount;                                            //0x20
    LONGLONG OpenHandleCount;                                               //0x28
    struct _LIST_ENTRY ActivePartitionLinks;                                //0x30
    struct _EPARTITION* ParentPartition;                                    //0x40
    struct _WORK_QUEUE_ITEM TeardownWorkItem;                               //0x48
    struct _EX_PUSH_LOCK TeardownLock;                                      //0x68
    struct _EPROCESS* SystemProcess;                                        //0x70
    VOID* SystemProcessHandle;                                              //0x78
    union
    {
        ULONG PartitionFlags;                                               //0x80
        ULONG PairedWithJob:1;                                              //0x80
    };
};
/* Used in */
// _CC_PARTITION
// _EPARTITION
// _ETW_PARTITION_CONTEXT
// _EX_PARTITION
// _MI_PARTITION_CORE
// _MI_SPECIAL_PURPOSE_MEMORY_STATE

