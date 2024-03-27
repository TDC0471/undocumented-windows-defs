#pragma once
/* ------------------ */

#include <_PNP_REBALANCE_REASON.h>
#include <_PNP_REBALANCE_FAILURE.h>
#include <_DEVICE_NODE.h>
#include <_PNP_REBALANCE_FLAGS.h>
#include <_PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON.h>
#include <_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.h>

//0x80 bytes (sizeof)
struct _PNP_REBALANCE_TRACE_CONTEXT
{
    ULONG DeviceCount[2];                                                   //0x0
    ULONG RebalancePhase;                                                   //0x8
    enum _PNP_REBALANCE_REASON Reason;                                      //0xc
    enum _PNP_REBALANCE_FAILURE Failure[2];                                 //0x10
    struct _DEVICE_NODE* SubtreeRoot[2];                                    //0x18
    UCHAR SubtreeIncludesRoot[2];                                           //0x28
    struct _DEVICE_NODE* TriggerRoot;                                       //0x30
    union _PNP_REBALANCE_FLAGS Flags;                                       //0x38
    ULONGLONG BeginTime[2];                                                 //0x40
    struct _DEVICE_NODE* VetoNode[2];                                       //0x50
    enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON VetoQueryRebalanceReason[2]; //0x60
    struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT ConflictContext;            //0x68
};
/* Used in */
// _DEVICE_NODE

