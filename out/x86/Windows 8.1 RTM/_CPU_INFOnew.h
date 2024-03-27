#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _CPU_INFO
{
    ULONG AsUINT32[4];                                                      //0x0
    struct
    {
        ULONG Eax;                                                          //0x0
        ULONG Ebx;                                                          //0x4
    };
    struct
    {
        ULONG Ecx;                                                          //0x8
    };
    ULONG Edx;                                                              //0xc
};
