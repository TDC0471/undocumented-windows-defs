#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _RTL_RETPOLINE_BINARY_INFO
{
    LONG RetpolineStubsStartRva;                                            //0x0
    ULONG CfgDispatchFunctionPtrRva;                                        //0x4
    ULONG IATRva;                                                           //0x8
    LONG* ImportRvas;                                                       //0xc
    ULONG* IAT;                                                             //0x10
    VOID* ImageBase;                                                        //0x14
};
/* Used in */
// _MI_RETPOLINE_RELOCATION_INFORMATION

