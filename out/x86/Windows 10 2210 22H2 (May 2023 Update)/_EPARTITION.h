#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPARTITION.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>

//0x40 bytes (sizeof)
struct _EPARTITION
{
    VOID* MmPartition;                                                      //0x0
    VOID* CcPartition;                                                      //0x4
    VOID* ExPartition;                                                      //0x8
    LONG HardReferenceCount;                                                //0xc
    LONG OpenHandleCount;                                                   //0x10
    struct _LIST_ENTRY ActivePartitionLinks;                                //0x14
    struct _EPARTITION* ParentPartition;                                    //0x1c
    struct _WORK_QUEUE_ITEM TeardownWorkItem;                               //0x20
    struct _EX_PUSH_LOCK TeardownLock;                                      //0x30
    struct _EPROCESS* SystemProcess;                                        //0x34
    VOID* SystemProcessHandle;                                              //0x38
    union
    {
        ULONG PartitionFlags;                                               //0x3c
        ULONG PairedWithJob:1;                                              //0x3c
    };
};
/* Used in */
// _CC_PARTITION
// _EPARTITION
// _ETW_PARTITION_CONTEXT
// _EX_PARTITION
// _MI_LARGEPAGE_VAD_INFO
// _MI_PARTITION_CORE

