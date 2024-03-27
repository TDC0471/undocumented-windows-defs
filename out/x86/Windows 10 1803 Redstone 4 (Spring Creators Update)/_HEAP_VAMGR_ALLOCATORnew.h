#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_HEAP_VAMGR_VASPACE.h>

//0x1c bytes (sizeof)
struct _HEAP_VAMGR_ALLOCATOR
{
    ULONG TreeLock;                                                         //0x0
    struct _RTL_RB_TREE FreeRanges;                                         //0x4
    struct _HEAP_VAMGR_VASPACE* VaSpace;                                    //0xc
    VOID* PartitionHandle;                                                  //0x10
    USHORT ChunksPerRegion;                                                 //0x14
    USHORT RefCount;                                                        //0x16
    UCHAR AllocatorIndex;                                                   //0x18
    UCHAR NumaNode;                                                         //0x19
    UCHAR LockType:1;                                                       //0x1a
    UCHAR MemoryType:2;                                                     //0x1a
    UCHAR ConstrainedVA:1;                                                  //0x1a
    UCHAR AllowFreeHead:1;                                                  //0x1a
    UCHAR Spare0:3;                                                         //0x1a
    UCHAR Spare1;                                                           //0x1b
};
/* Used in */
// _HEAP_VAMGR_CTX

