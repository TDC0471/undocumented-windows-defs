#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _GROUP_AFFINITY
{
    ULONG Mask;                                                             //0x0
    USHORT Group;                                                           //0x4
    USHORT Reserved[3];                                                     //0x6
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _INTERRUPT_VECTOR_DATA
// _KNODE
// _KTHREAD

