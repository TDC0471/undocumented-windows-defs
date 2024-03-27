#pragma once
/* ------------------ */


//0xc0 bytes (sizeof)
struct _WHEA_AMD_EXTENDED_REGISTERS
{
    ULONGLONG IPID;                                                         //0x0
    ULONGLONG SYND;                                                         //0x8
    ULONGLONG CONFIG;                                                       //0x10
    ULONGLONG DESTAT;                                                       //0x18
    ULONGLONG DEADDR;                                                       //0x20
    ULONGLONG MISC1;                                                        //0x28
    ULONGLONG MISC2;                                                        //0x30
    ULONGLONG MISC3;                                                        //0x38
    ULONGLONG MISC4;                                                        //0x40
    ULONGLONG RasCap;                                                       //0x48
    ULONGLONG Reserved[14];                                                 //0x50
};
/* Used in */
// _WHEA_XPF_MCA_SECTION

