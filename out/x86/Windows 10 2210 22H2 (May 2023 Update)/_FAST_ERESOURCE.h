#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _FAST_ERESOURCE
{
    VOID* Reserved1[3];                                                     //0x0
    ULONG Reserved2;                                                        //0xc
    VOID* Reserved3[4];                                                     //0x10
    ULONG Reserved4[4];                                                     //0x20
    VOID* Reserved6[2];                                                     //0x30
};
