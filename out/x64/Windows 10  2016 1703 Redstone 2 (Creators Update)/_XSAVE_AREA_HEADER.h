#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _XSAVE_AREA_HEADER
{
    ULONGLONG Mask;                                                         //0x0
    ULONGLONG CompactionMask;                                               //0x8
    ULONGLONG Reserved2[6];                                                 //0x10
};
/* Used in */
// _XSAVE_AREA

