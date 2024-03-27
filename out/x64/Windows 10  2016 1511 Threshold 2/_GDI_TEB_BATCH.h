#pragma once
/* ------------------ */


//0x4e8 bytes (sizeof)
struct _GDI_TEB_BATCH
{
    ULONG Offset:31;                                                        //0x0
    ULONG HasRenderingCommand:1;                                            //0x0
    ULONGLONG HDC;                                                          //0x8
    ULONG Buffer[310];                                                      //0x10
};
/* Used in */
// _TEB

