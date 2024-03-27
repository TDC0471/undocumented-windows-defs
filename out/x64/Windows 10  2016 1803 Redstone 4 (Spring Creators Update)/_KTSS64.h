#pragma once
/* ------------------ */


//0x68 bytes (sizeof)
struct _KTSS64
{
    ULONG Reserved0;                                                        //0x0
    ULONGLONG Rsp0;                                                         //0x4
    ULONGLONG Rsp1;                                                         //0xc
    ULONGLONG Rsp2;                                                         //0x14
    ULONGLONG Ist[8];                                                       //0x1c
    ULONGLONG Reserved1;                                                    //0x5c
    USHORT Reserved2;                                                       //0x64
    USHORT IoMapBase;                                                       //0x66
};
/* Used in */
// _KPCR

