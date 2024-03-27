#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _FAULT_INFORMATION_ARM64_FLAGS
{
    ULONG WriteNotRead:1;                                                   //0x0
    ULONG InstructionNotData:1;                                             //0x0
    ULONG Privileged:1;                                                     //0x0
    ULONG FaultAddressValid:1;                                              //0x0
    ULONG Reserved:28;                                                      //0x0
};
/* Used in */
// _FAULT_INFORMATION_ARM64

