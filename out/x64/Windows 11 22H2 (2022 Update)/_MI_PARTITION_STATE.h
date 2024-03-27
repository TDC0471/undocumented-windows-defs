#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MI_PARTITION.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_HUGE_PFN.h>

//0xac0 bytes (sizeof)
struct _MI_PARTITION_STATE
{
    ULONGLONG PartitionLock;                                                //0x0
    struct _EX_PUSH_LOCK PartitionIdLock;                                   //0x8
    ULONGLONG InitialPartitionIdBits;                                       //0x10
    struct _LIST_ENTRY PartitionList;                                       //0x18
    struct _RTL_BITMAP* PartitionIdBitmap;                                  //0x28
    struct _RTL_BITMAP InitialPartitionIdBitmap;                            //0x30
    struct _MI_PARTITION* TempPartitionPointers[1];                         //0x40
    struct _MI_PARTITION** Partition;                                       //0x48
    ULONGLONG TotalNodePagesInChildPartitions[64];                          //0x50
    ULONGLONG TotalSpecialPurposeMemoryInChildPartitions[64][4];            //0x250
    ULONG CrossPartitionDenials;                                            //0xa50
    UCHAR MultiplePartitionsExist;                                          //0xa54
    ULONGLONG ChildPartitionBytes;                                          //0xa58
    struct _RTL_BITMAP_EX HugeIoPfnBitMap;                                  //0xa60
    struct _MI_HUGE_PFN* HugePfnDatabase;                                   //0xa70
    ULONG* HugePfnLockArray;                                                //0xa78
    ULONGLONG HugeRangesLock;                                               //0xa80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

