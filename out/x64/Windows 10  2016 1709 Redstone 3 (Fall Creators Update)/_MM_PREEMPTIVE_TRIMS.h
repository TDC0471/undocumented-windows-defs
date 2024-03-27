#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MM_PREEMPTIVE_TRIMS
{
    MmPreemptForNonPaged = 0,
    MmPreemptForPaged = 1,
    MmPreemptForNonPagedPriority = 2,
    MmPreemptForPagedPriority = 3,
    MmMaximumPreempt = 4
};
