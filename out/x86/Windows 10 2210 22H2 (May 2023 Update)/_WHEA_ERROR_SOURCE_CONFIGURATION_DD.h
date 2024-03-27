#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
    LONG (*Initialize)(VOID* arg1, ULONG arg2);                             //0x0
    VOID (*Uninitialize)(VOID* arg1);                                       //0x4
    LONG (*Correct)(VOID* arg1, ULONG* arg2);                               //0x8
};
/* Used in */
// _WHEA_DEVICE_DRIVER_DESCRIPTOR

