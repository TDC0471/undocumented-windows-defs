#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT
{
    ULONG Size;                                                             //0x0
    ULONG Action;                                                           //0x4
    ULONG Flags;                                                            //0x8
    ULONG OperationStatus;                                                  //0xc
    ULONG ExtendedError;                                                    //0x10
    ULONG TargetDetailedError;                                              //0x14
    ULONG ReservedStatus;                                                   //0x18
    ULONG OutputBlockOffset;                                                //0x1c
    ULONG OutputBlockLength;                                                //0x20
};
