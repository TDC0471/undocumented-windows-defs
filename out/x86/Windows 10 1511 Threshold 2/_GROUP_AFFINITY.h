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
// _INTERRUPT_VECTOR_DATA
// _KNODE
// _KTHREAD

