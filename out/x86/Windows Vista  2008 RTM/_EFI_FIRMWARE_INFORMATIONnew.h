#pragma once
/* ------------------ */

#include <_VIRTUAL_EFI_RUNTIME_SERVICES.h>

//0x10 bytes (sizeof)
struct _EFI_FIRMWARE_INFORMATION
{
    ULONG FirmwareVersion;                                                  //0x0
    struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;        //0x4
    LONG SetVirtualAddressMapStatus;                                        //0x8
    ULONG MissedMappingsCount;                                              //0xc
};
/* Used in */
// _FIRMWARE_INFORMATION_LOADER_BLOCK

