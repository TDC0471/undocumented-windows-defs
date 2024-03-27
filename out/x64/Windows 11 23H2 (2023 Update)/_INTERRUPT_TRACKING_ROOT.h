#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_VECTOR_DATA.h>
#include <_INTERRUPT_STEERING_MODE.h>
#include <_GROUP_AFFINITY.h>

//0xe0 bytes (sizeof)
struct _INTERRUPT_TRACKING_ROOT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY TrackingEntryList;                                   //0x10
    ULONG Gsiv;                                                             //0x20
    struct _INTERRUPT_VECTOR_DATA VectorData;                               //0x28
    enum _INTERRUPT_STEERING_MODE SteeringMode;                             //0x80
    UCHAR EnableSteering;                                                   //0x84
    struct _GROUP_AFFINITY CpuSetMask;                                      //0x88
    ULONGLONG AffinityEpoch;                                                //0x98
    struct _GROUP_AFFINITY CurrentTarget;                                   //0xa0
    struct _GROUP_AFFINITY NextTarget;                                      //0xb0
    ULONGLONG TimeDelta;                                                    //0xc0
    VOID* RedirectHandle;                                                   //0xc8
    struct _LIST_ENTRY SteerQueueLink;                                      //0xd0
};
/* Used in */
// _INTERRUPT_TRACKING_ENTRY

