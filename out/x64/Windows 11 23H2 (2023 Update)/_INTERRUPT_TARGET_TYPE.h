#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INTERRUPT_TARGET_TYPE
{
    InterruptTargetInvalid = 0,
    InterruptTargetAllIncludingSelf = 1,
    InterruptTargetAllExcludingSelf = 2,
    InterruptTargetSelfOnly = 3,
    InterruptTargetPhysical = 4,
    InterruptTargetLogicalFlat = 5,
    InterruptTargetLogicalClustered = 6,
    InterruptTargetRemapIndex = 7,
    InterruptTargetHypervisor = 8
};
/* Used in */
// _INTERRUPT_TARGET

