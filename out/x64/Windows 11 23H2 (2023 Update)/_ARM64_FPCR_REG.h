#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _ARM64_FPCR_REG
{
    ULONG Value;                                                            //0x0
    ULONG res0_1:8;                                                         //0x0
    ULONG IOE:1;                                                            //0x0
    ULONG DZE:1;                                                            //0x0
    ULONG OFE:1;                                                            //0x0
    ULONG UFE:1;                                                            //0x0
    ULONG IXE:1;                                                            //0x0
    ULONG res0_2:2;                                                         //0x0
    ULONG IDE:1;                                                            //0x0
    ULONG Len:3;                                                            //0x0
    ULONG FZ16:1;                                                           //0x0
    ULONG Stride:2;                                                         //0x0
    ULONG RMode:2;                                                          //0x0
    ULONG FZ:1;                                                             //0x0
    ULONG DN:1;                                                             //0x0
    ULONG AHP:1;                                                            //0x0
    ULONG res0_3:5;                                                         //0x0
};
