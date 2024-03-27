#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _I386_LOADER_BLOCK
{
    VOID* CommonDataArea;                                                   //0x0
    ULONG MachineType;                                                      //0x8
    ULONG VirtualBias;                                                      //0xc
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

