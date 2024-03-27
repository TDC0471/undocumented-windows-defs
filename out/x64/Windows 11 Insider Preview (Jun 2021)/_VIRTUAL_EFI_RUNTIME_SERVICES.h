#pragma once
/* ------------------ */


//0x70 bytes (sizeof)
struct _VIRTUAL_EFI_RUNTIME_SERVICES
{
    ULONGLONG GetTime;                                                      //0x0
    ULONGLONG SetTime;                                                      //0x8
    ULONGLONG GetWakeupTime;                                                //0x10
    ULONGLONG SetWakeupTime;                                                //0x18
    ULONGLONG SetVirtualAddressMap;                                         //0x20
    ULONGLONG ConvertPointer;                                               //0x28
    ULONGLONG GetVariable;                                                  //0x30
    ULONGLONG GetNextVariableName;                                          //0x38
    ULONGLONG SetVariable;                                                  //0x40
    ULONGLONG GetNextHighMonotonicCount;                                    //0x48
    ULONGLONG ResetSystem;                                                  //0x50
    ULONGLONG UpdateCapsule;                                                //0x58
    ULONGLONG QueryCapsuleCapabilities;                                     //0x60
    ULONGLONG QueryVariableInfo;                                            //0x68
};
/* Used in */
// _EFI_FIRMWARE_INFORMATION
// _KSR_FIRMWARE_INFORMATION

