#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _ARM64_FPSR_REG
{
    ULONG Value;                                                            //0x0
    ULONG IOC:1;                                                            //0x0
    ULONG DZC:1;                                                            //0x0
    ULONG OFC:1;                                                            //0x0
    ULONG UFC:1;                                                            //0x0
    ULONG IXC:1;                                                            //0x0
    ULONG res0_1:2;                                                         //0x0
    ULONG IDC:1;                                                            //0x0
    ULONG res0_2:19;                                                        //0x0
    ULONG QC:1;                                                             //0x0
    ULONG V:1;                                                              //0x0
    ULONG C:1;                                                              //0x0
    ULONG Z:1;                                                              //0x0
    ULONG N:1;                                                              //0x0
};
