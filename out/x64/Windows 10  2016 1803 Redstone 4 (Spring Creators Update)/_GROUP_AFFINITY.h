#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _GROUP_AFFINITY
{
    ULONGLONG Mask;                                                         //0x0
    USHORT Group;                                                           //0x8
    USHORT Reserved[3];                                                     //0xa
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _INTERRUPT_VECTOR_DATA
// _KNODE
// _KTHREAD

