#pragma once
/* ------------------ */


//0x68 bytes (sizeof)
struct _FAST_ERESOURCE
{
    VOID* Reserved1[3];                                                     //0x0
    ULONG Reserved2;                                                        //0x18
    VOID* Reserved3[4];                                                     //0x20
    ULONG Reserved4[4];                                                     //0x40
    VOID* Reserved5;                                                        //0x50
    VOID* Reserved6[2];                                                     //0x58
};
