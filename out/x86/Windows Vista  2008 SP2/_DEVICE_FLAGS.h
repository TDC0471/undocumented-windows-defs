#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _DEVICE_FLAGS
{
    ULONG Failed:1;                                                         //0x0
    ULONG ReadOnly:1;                                                       //0x0
    ULONG Removable:1;                                                      //0x0
    ULONG ConsoleIn:1;                                                      //0x0
    ULONG ConsoleOut:1;                                                     //0x0
    ULONG Input:1;                                                          //0x0
    ULONG Output:1;                                                         //0x0
};
/* Used in */
// _CONFIGURATION_COMPONENT

