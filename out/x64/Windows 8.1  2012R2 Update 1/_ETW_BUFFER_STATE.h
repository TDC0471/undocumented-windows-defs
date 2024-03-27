#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ETW_BUFFER_STATE
{
    EtwBufferStateFree = 0,
    EtwBufferStateGeneralLogging = 1,
    EtwBufferStateCSwitch = 2,
    EtwBufferStateFlush = 3,
    EtwBufferStateMaximum = 4
};
/* Used in */
// _WMI_BUFFER_HEADER

