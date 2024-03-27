#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_MI_DEFERRED_PFNS_TO_FREE.h>

//0x240 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    struct _GROUP_AFFINITY* GroupAffinity;                                  //0x0
    USHORT GroupAffinityCount;                                              //0x8
    USHORT ProcessorCount[3];                                               //0xa
    USHORT UsableProcessorCount[3];                                         //0x10
    struct _MI_NODE_NUMBER_ZERO_BASED ProcessorNode;                        //0x18
    struct _GROUP_AFFINITY ForwardProgressGroupAffinity;                    //0x20
    volatile LONG LargePageListOpLock;                                      //0x30
    struct _MI_WRITE_CALIBRATION WriteCalibration[3][3];                    //0x38
    volatile LONG IoPfnLock;                                                //0x180
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];                 //0x188
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;                     //0x208
    volatile LONG DeferredPfnsToFreeLock;                                   //0x228
};
/* Used in */
// _MI_SYSTEM_NODE_NONPAGED_POOL

