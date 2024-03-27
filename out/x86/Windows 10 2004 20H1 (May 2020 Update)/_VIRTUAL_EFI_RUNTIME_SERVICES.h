#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _VIRTUAL_EFI_RUNTIME_SERVICES
{
    ULONG GetTime;                                                          //0x0
    ULONG SetTime;                                                          //0x4
    ULONG GetWakeupTime;                                                    //0x8
    ULONG SetWakeupTime;                                                    //0xc
    ULONG SetVirtualAddressMap;                                             //0x10
    ULONG ConvertPointer;                                                   //0x14
    ULONG GetVariable;                                                      //0x18
    ULONG GetNextVariableName;                                              //0x1c
    ULONG SetVariable;                                                      //0x20
    ULONG GetNextHighMonotonicCount;                                        //0x24
    ULONG ResetSystem;                                                      //0x28
    ULONG UpdateCapsule;                                                    //0x2c
    ULONG QueryCapsuleCapabilities;                                         //0x30
    ULONG QueryVariableInfo;                                                //0x34
};
/* Used in */
// _EFI_FIRMWARE_INFORMATION

