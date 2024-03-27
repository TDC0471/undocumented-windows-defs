#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _MACHINE_FRAME
{
    ULONGLONG Rip;                                                          //0x0
    USHORT SegCs;                                                           //0x8
    USHORT Fill1[3];                                                        //0xa
    ULONG EFlags;                                                           //0x10
    ULONG Fill2;                                                            //0x14
    ULONGLONG Rsp;                                                          //0x18
    USHORT SegSs;                                                           //0x20
    USHORT Fill3[3];                                                        //0x22
};
/* Used in */
// _MACHINE_CHECK_CONTEXT

