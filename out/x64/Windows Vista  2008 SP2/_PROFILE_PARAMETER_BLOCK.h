#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PROFILE_PARAMETER_BLOCK
{
    USHORT Status;                                                          //0x0
    USHORT Reserved;                                                        //0x2
    USHORT DockingState;                                                    //0x4
    USHORT Capabilities;                                                    //0x6
    ULONG DockID;                                                           //0x8
    ULONG SerialNumber;                                                     //0xc
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

