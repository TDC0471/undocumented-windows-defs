#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _DBGKD_GET_VERSION32
{
    USHORT MajorVersion;                                                    //0x0
    USHORT MinorVersion;                                                    //0x2
    USHORT ProtocolVersion;                                                 //0x4
    USHORT Flags;                                                           //0x6
    ULONG KernBase;                                                         //0x8
    ULONG PsLoadedModuleList;                                               //0xc
    USHORT MachineType;                                                     //0x10
    USHORT ThCallbackStack;                                                 //0x12
    USHORT NextCallback;                                                    //0x14
    USHORT FramePointer;                                                    //0x16
    ULONG KiCallUserMode;                                                   //0x18
    ULONG KeUserCallbackDispatcher;                                         //0x1c
    ULONG BreakpointWithStatus;                                             //0x20
    ULONG DebuggerDataList;                                                 //0x24
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

