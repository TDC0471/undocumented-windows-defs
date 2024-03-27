#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ETW_RT_EVENT_LOSS
{
    EtwRtEventNoLoss = 0,
    EtwRtEventLost = 1,
    EtwRtBufferLost = 2,
    EtwRtBackupLost = 3,
    EtwRtEventLossMax = 4
};
/* Used in */
// _WMI_LOGGER_CONTEXT

