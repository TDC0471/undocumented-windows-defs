#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_HEAP_VAMGR_VASPACE.h>

//0x30 bytes (sizeof)
struct _HEAP_VAMGR_ALLOCATOR
{
    ULONGLONG TreeLock;                                                     //0x0
    struct _RTL_RB_TREE FreeRanges;                                         //0x8
    struct _HEAP_VAMGR_VASPACE* VaSpace;                                    //0x18
    VOID* PartitionHandle;                                                  //0x20
    USHORT ChunksPerRegion;                                                 //0x28
    USHORT RefCount;                                                        //0x2a
    UCHAR AllocatorIndex;                                                   //0x2c
    UCHAR NumaNode;                                                         //0x2d
    UCHAR LockType:1;                                                       //0x2e
    UCHAR MemoryType:2;                                                     //0x2e
    UCHAR ConstrainedVA:1;                                                  //0x2e
    UCHAR AllowFreeHead:1;                                                  //0x2e
    UCHAR Spare0:3;                                                         //0x2e
    UCHAR Spare1;                                                           //0x2f
};
/* Used in */
// _HEAP_VAMGR_CTX

