#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_DEVNODE_STATE
{
    DeviceNodeUnspecified = 768,
    DeviceNodeUninitialized = 769,
    DeviceNodeInitialized = 770,
    DeviceNodeDriversAdded = 771,
    DeviceNodeResourcesAssigned = 772,
    DeviceNodeStartPending = 773,
    DeviceNodeStartCompletion = 774,
    DeviceNodeStartPostWork = 775,
    DeviceNodeStarted = 776,
    DeviceNodeQueryStopped = 777,
    DeviceNodeStopped = 778,
    DeviceNodeRestartCompletion = 779,
    DeviceNodeEnumeratePending = 780,
    DeviceNodeEnumerateCompletion = 781,
    DeviceNodeAwaitingQueuedDeletion = 782,
    DeviceNodeAwaitingQueuedRemoval = 783,
    DeviceNodeQueryRemoved = 784,
    DeviceNodeRemovePendingCloses = 785,
    DeviceNodeRemoved = 786,
    DeviceNodeDeletePendingCloses = 787,
    DeviceNodeDeleted = 788
};
/* Used in */
// _DEVICE_NODE

