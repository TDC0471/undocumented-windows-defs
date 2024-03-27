#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _I386_LOADER_BLOCK
{
    VOID* CommonDataArea;                                                   //0x0
    ULONG MachineType;                                                      //0x4
    ULONG VirtualBias;                                                      //0x8
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

