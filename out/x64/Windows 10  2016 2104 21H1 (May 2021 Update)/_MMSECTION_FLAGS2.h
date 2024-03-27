#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECTION_FLAGS2
{
    USHORT PartitionId:10;                                                  //0x0
    UCHAR NoCrossPartitionAccess:1;                                         //0x2
    UCHAR SubsectionCrossPartitionReferenceOverflow:1;                      //0x2
};
/* Used in */
// _CONTROL_AREA

