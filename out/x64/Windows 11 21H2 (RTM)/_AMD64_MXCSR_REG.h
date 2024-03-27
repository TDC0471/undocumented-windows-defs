#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _AMD64_MXCSR_REG
{
    ULONG Value;                                                            //0x0
    ULONG IE:1;                                                             //0x0
    ULONG DE:1;                                                             //0x0
    ULONG ZE:1;                                                             //0x0
    ULONG OE:1;                                                             //0x0
    ULONG UE:1;                                                             //0x0
    ULONG PE:1;                                                             //0x0
    ULONG DAZ:1;                                                            //0x0
    ULONG IM:1;                                                             //0x0
    ULONG DM:1;                                                             //0x0
    ULONG ZM:1;                                                             //0x0
    ULONG OM:1;                                                             //0x0
    ULONG UM:1;                                                             //0x0
    ULONG PM:1;                                                             //0x0
    ULONG RC:2;                                                             //0x0
    ULONG FZ:1;                                                             //0x0
    ULONG res:16;                                                           //0x0
};
