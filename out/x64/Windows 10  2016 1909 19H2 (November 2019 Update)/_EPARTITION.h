#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPARTITION.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>

//0x80 bytes (sizeof)
struct _EPARTITION
{
    VOID* MmPartition;                                                      //0x0
    VOID* CcPartition;                                                      //0x8
    VOID* ExPartition;                                                      //0x10
    LONGLONG HardReferenceCount;                                            //0x18
    LONGLONG OpenHandleCount;                                               //0x20
    struct _LIST_ENTRY ActivePartitionLinks;                                //0x28
    struct _EPARTITION* ParentPartition;                                    //0x38
    struct _WORK_QUEUE_ITEM TeardownWorkItem;                               //0x40
    struct _EX_PUSH_LOCK TeardownLock;                                      //0x60
    struct _EPROCESS* SystemProcess;                                        //0x68
    VOID* SystemProcessHandle;                                              //0x70
    union
    {
        ULONG PartitionFlags;                                               //0x78
        ULONG PairedWithJob:1;                                              //0x78
    };
};
/* Used in */
// _CC_PARTITION
// _EPARTITION
// _EX_PARTITION
// _MI_LARGEPAGE_VAD_INFO
// _MI_PARTITION_CORE

