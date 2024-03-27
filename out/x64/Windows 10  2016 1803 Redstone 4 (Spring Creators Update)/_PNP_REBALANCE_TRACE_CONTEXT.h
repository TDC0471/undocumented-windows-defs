#pragma once
/* ------------------ */

#include <_PNP_REBALANCE_REASON.h>
#include <_PNP_REBALANCE_FAILURE.h>
#include <_DEVICE_NODE.h>
#include <_PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON.h>
#include <_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.h>

//0x70 bytes (sizeof)
struct _PNP_REBALANCE_TRACE_CONTEXT
{
    ULONG DeviceCount;                                                      //0x0
    ULONG RebalancePhase;                                                   //0x4
    enum _PNP_REBALANCE_REASON Reason[2];                                   //0x8
    enum _PNP_REBALANCE_FAILURE Failure[2];                                 //0x10
    struct _DEVICE_NODE* SubtreeRoot;                                       //0x18
    UCHAR SubtreeIncludesRoot;                                              //0x20
    struct _DEVICE_NODE* TriggerRoot;                                       //0x28
    UCHAR RebalanceDueToDynamicPartitioning;                                //0x30
    ULONGLONG BeginTime;                                                    //0x38
    struct _DEVICE_NODE* VetoNode[2];                                       //0x40
    enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON VetoQueryRebalanceReason[2]; //0x50
    struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT ConflictContext;            //0x58
};
/* Used in */
// _DEVICE_NODE

