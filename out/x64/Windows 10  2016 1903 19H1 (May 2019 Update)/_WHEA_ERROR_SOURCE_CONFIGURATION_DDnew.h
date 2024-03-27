#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
    ULONG (*Initialize)(VOID* arg1, ULONG arg2);                            //0x0
    VOID (*Uninitialize)(VOID* arg1);                                       //0x8
    VOID (*Ready)(VOID* arg1, VOID* arg2);                                  //0x10
    ULONG (*Correct)(VOID* arg1, ULONG* arg2);                              //0x18
};
/* Used in */
// _WHEA_DEVICE_DRIVER_DESCRIPTOR

