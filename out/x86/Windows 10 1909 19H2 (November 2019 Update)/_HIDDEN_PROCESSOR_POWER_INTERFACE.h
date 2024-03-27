#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _HIDDEN_PROCESSOR_POWER_INTERFACE
{
    ULONG Version;                                                          //0x0
    LONG (*ReadPerfMsr)(ULONG arg1, ULONG arg2, ULONGLONG* arg3);           //0x4
    LONG (*WritePerfMsr)(ULONG arg1, ULONG arg2, ULONGLONG arg3, ULONGLONG arg4); //0x8
    LONG (*ReadPerfIoPort)(ULONG arg1, USHORT arg2, USHORT arg3, ULONG* arg4); //0xc
    LONG (*WritePerfIoPort)(ULONG arg1, USHORT arg2, USHORT arg3, ULONG arg4, ULONG arg5); //0x10
};
/* Used in */
// HAL_PRIVATE_DISPATCH

