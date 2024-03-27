#pragma once
/* ------------------ */


//0x4e8 bytes (sizeof)
struct _GDI_TEB_BATCH64
{
    ULONG Offset;                                                           //0x0
    ULONGLONG HDC;                                                          //0x8
    ULONG Buffer[310];                                                      //0x10
};
/* Used in */
// _TEB64

