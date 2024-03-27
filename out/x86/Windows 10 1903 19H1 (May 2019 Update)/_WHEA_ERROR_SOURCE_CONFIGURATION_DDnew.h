#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
    ULONG (*Initialize)(VOID* arg1, ULONG arg2);                            //0x0
    VOID (*Uninitialize)(VOID* arg1);                                       //0x4
    VOID (*Ready)(VOID* arg1, VOID* arg2);                                  //0x8
    ULONG (*Correct)(VOID* arg1, ULONG* arg2);                              //0xc
};
/* Used in */
// _WHEA_DEVICE_DRIVER_DESCRIPTOR

