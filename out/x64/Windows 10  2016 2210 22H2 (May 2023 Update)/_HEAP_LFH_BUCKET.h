#pragma once
/* ------------------ */

#include <_HEAP_LFH_SUBSEGMENT_OWNER.h>
#include <_HEAP_LFH_AFFINITY_SLOT.h>

//0x68 bytes (sizeof)
struct _HEAP_LFH_BUCKET
{
    struct _HEAP_LFH_SUBSEGMENT_OWNER State;                                //0x0
    ULONGLONG TotalBlockCount;                                              //0x38
    ULONGLONG TotalSubsegmentCount;                                         //0x40
    ULONG ReciprocalBlockSize;                                              //0x48
    UCHAR Shift;                                                            //0x4c
    UCHAR ContentionCount;                                                  //0x4d
    ULONGLONG AffinityMappingLock;                                          //0x50
    UCHAR* ProcAffinityMapping;                                             //0x58
    struct _HEAP_LFH_AFFINITY_SLOT** AffinitySlots;                         //0x60
};
/* Used in */
// _HEAP_LFH_CONTEXT

