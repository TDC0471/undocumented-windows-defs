#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECTION_FLAGS2
{
    ULONG PartitionId:10;                                                   //0x0
    ULONG NumberOfChildViews:22;                                            //0x0
};
/* Used in */
// _CONTROL_AREA

