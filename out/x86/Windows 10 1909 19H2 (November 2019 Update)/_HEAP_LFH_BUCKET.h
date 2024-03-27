#pragma once
/* ------------------ */

#include <_HEAP_LFH_SUBSEGMENT_OWNER.h>
#include <_HEAP_LFH_AFFINITY_SLOT.h>

//0x38 bytes (sizeof)
struct _HEAP_LFH_BUCKET
{
    struct _HEAP_LFH_SUBSEGMENT_OWNER State;                                //0x0
    ULONG TotalBlockCount;                                                  //0x1c
    ULONG TotalSubsegmentCount;                                             //0x20
    ULONG ReciprocalBlockSize;                                              //0x24
    UCHAR Shift;                                                            //0x28
    UCHAR ContentionCount;                                                  //0x29
    ULONG AffinityMappingLock;                                              //0x2c
    UCHAR* ProcAffinityMapping;                                             //0x30
    struct _HEAP_LFH_AFFINITY_SLOT** AffinitySlots;                         //0x34
};
/* Used in */
// _HEAP_LFH_CONTEXT

