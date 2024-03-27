#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_DEVNODE_STATE
{
    DeviceNodeUnspecified = 768,
    DeviceNodeUninitialized = 769,
    DeviceNodeUninitializedPending = 770,
    DeviceNodeInitializedPending = 771,
    DeviceNodeInitialized = 772,
    DeviceNodeDriversAdded = 773,
    DeviceNodeResourcesAssigned = 774,
    DeviceNodeStartPending = 775,
    DeviceNodeStartCompletion = 776,
    DeviceNodeStartPostWork = 777,
    DeviceNodeStarted = 778,
    DeviceNodeQueryStopped = 779,
    DeviceNodeStopped = 780,
    DeviceNodeRestartCompletion = 781,
    DeviceNodeEnumeratePending = 782,
    DeviceNodeEnumerateCompletion = 783,
    DeviceNodeAwaitingQueuedDeletion = 784,
    DeviceNodeAwaitingQueuedRemoval = 785,
    DeviceNodeQueryRemoved = 786,
    DeviceNodeRemovePendingCloses = 787,
    DeviceNodeRemoved = 788,
    DeviceNodeDeletePendingCloses = 789,
    DeviceNodeDeleted = 790,
    MaxDeviceNodeState = 791
};
/* Used in */
// _DEVICE_NODE
// _PNP_DEVICE_COMPLETION_REQUEST

