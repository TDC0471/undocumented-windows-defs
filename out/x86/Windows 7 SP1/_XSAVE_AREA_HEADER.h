#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _XSAVE_AREA_HEADER
{
    ULONGLONG Mask;                                                         //0x0
    ULONGLONG Reserved[7];                                                  //0x8
};
/* Used in */
// _XSAVE_AREA

