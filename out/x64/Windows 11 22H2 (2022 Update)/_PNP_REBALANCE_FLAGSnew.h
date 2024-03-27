#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _PNP_REBALANCE_FLAGS
{
    struct
    {
        ULONG RebalanceDueToDynamicPartitioning:1;                          //0x0
        ULONG ResetDeviceWhileStopped:1;                                    //0x0
        ULONG Reserved:30;                                                  //0x0
    } u;                                                                    //0x0
    ULONG AsUlong;                                                          //0x0
};
/* Used in */
// _PNP_DEVICE_ACTION_REQUEST_ARGUMENT
// _PNP_REBALANCE_TRACE_CONTEXT

