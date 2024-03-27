#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _FAULT_INFORMATION_ARM64_TYPE
{
    UnsupportedUpstreamTransaction = 0,
    AddressSizeFault = 1,
    TlbMatchConflict = 2,
    ExternalFault = 3,
    PermissionFault = 4,
    AccessFlagFault = 5,
    TranslationFault = 6,
    MaxFaultType = 7
};
/* Used in */
// _FAULT_INFORMATION_ARM64
// _FAULT_INFORMATION_X64

