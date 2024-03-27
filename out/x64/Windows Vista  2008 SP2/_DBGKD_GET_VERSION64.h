#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _DBGKD_GET_VERSION64
{
    USHORT MajorVersion;                                                    //0x0
    USHORT MinorVersion;                                                    //0x2
    UCHAR ProtocolVersion;                                                  //0x4
    UCHAR KdSecondaryVersion;                                               //0x5
    USHORT Flags;                                                           //0x6
    USHORT MachineType;                                                     //0x8
    UCHAR MaxPacketType;                                                    //0xa
    UCHAR MaxStateChange;                                                   //0xb
    UCHAR MaxManipulate;                                                    //0xc
    UCHAR Simulation;                                                       //0xd
    USHORT Unused[1];                                                       //0xe
    ULONGLONG KernBase;                                                     //0x10
    ULONGLONG PsLoadedModuleList;                                           //0x18
    ULONGLONG DebuggerDataList;                                             //0x20
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

