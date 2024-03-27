#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KSOFTWARE_INTERRUPT_TARGET
{
    KSoftwareInterruptTargetNone = 0,
    KSoftwareInterruptTargetSingleProcessor = 1,
    KSoftwareInterruptTargetMultipleProcessors = 2,
    KSoftwareInterruptTargetMax = 3
};
