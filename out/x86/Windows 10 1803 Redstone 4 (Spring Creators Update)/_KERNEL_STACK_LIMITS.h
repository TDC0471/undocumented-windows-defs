#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KERNEL_STACK_LIMITS
{
    BugcheckStackLimits = 0,
    DPCStackLimits = 1,
    ExpandedStackLimits = 2,
    NormalStackLimits = 3,
    Win32kStackLimits = 4,
    SwapBusyStackLimits = 5,
    IsrStackLimits = 6,
    DebuggerStackLimits = 7,
    MaximumStackLimits = 8
};
/* Used in */
// _VI_DEADLOCK_GLOBALS
