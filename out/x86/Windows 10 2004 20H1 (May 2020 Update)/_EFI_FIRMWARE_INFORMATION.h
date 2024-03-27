#pragma once
/* ------------------ */

#include <_VIRTUAL_EFI_RUNTIME_SERVICES.h>
#include <_LIST_ENTRY.h>

//0x24 bytes (sizeof)
struct _EFI_FIRMWARE_INFORMATION
{
    ULONG FirmwareVersion;                                                  //0x0
    struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;        //0x4
    LONG SetVirtualAddressMapStatus;                                        //0x8
    ULONG MissedMappingsCount;                                              //0xc
    struct _LIST_ENTRY FirmwareResourceList;                                //0x10
    VOID* EfiMemoryMap;                                                     //0x18
    ULONG EfiMemoryMapSize;                                                 //0x1c
    ULONG EfiMemoryMapDescriptorSize;                                       //0x20
};
/* Used in */
// _FIRMWARE_INFORMATION_LOADER_BLOCK

