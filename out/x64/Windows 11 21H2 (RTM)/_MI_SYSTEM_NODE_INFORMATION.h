#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_MI_DEFERRED_PFNS_TO_FREE.h>

//0x140 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    struct _GROUP_AFFINITY GroupAffinity;                                   //0x0
    USHORT ProcessorCount;                                                  //0x10
    VOID* BootZeroPageTimesPerProcessor;                                    //0x18
    ULONGLONG CyclesToZeroOneLargePage;                                     //0x20
    ULONGLONG* ScaledCyclesToZeroOneLargePage;                              //0x28
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x30
    volatile LONG IoPfnLock;                                                //0x80
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];                 //0x88
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;                     //0x108
    volatile LONG DeferredPfnsToFreeLock;                                   //0x128
};
/* Used in */
// _MI_SYSTEM_NODE_NONPAGED_POOL

