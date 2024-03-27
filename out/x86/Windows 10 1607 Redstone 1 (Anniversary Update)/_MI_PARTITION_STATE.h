#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MI_PARTITION.h>

//0x38 bytes (sizeof)
struct _MI_PARTITION_STATE
{
    ULONG PartitionLock;                                                    //0x0
    struct _EX_PUSH_LOCK PartitionIdLock;                                   //0x4
    ULONGLONG InitialPartitionIdBits;                                       //0x8
    struct _LIST_ENTRY PartitionList;                                       //0x10
    struct _RTL_BITMAP* PartitionIdBitmap;                                  //0x18
    struct _RTL_BITMAP InitialPartitionIdBitmap;                            //0x1c
    struct _MI_PARTITION* TempPartitionPointers[1];                         //0x24
    struct _MI_PARTITION** Partition;                                       //0x28
    ULONG TotalPagesInChildPartitions;                                      //0x2c
    ULONG CrossPartitionDenials;                                            //0x30
};
/* Used in */
// _MI_SYSTEM_INFORMATION

