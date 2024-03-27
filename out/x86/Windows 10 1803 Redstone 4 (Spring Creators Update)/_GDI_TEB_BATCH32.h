#pragma once
/* ------------------ */


//0x4e0 bytes (sizeof)
struct _GDI_TEB_BATCH32
{
    ULONG Offset:31;                                                        //0x0
    ULONG HasRenderingCommand:1;                                            //0x0
    ULONG HDC;                                                              //0x4
    ULONG Buffer[310];                                                      //0x8
};
/* Used in */
// _TEB32

