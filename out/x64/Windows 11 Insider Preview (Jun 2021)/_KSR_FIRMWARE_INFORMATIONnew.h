#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_VIRTUAL_EFI_RUNTIME_SERVICES.h>
#include <_MEMORY_CACHING_REQUIREMENTS.h>
#include <_INBV_DISPLAY_CONTEXT.h>
#include <DEBUG_MEMORY_REQUIREMENTS.h>
#include <_PHYSICAL_MEMORY_RANGE.h>
#include <_KSR_CAPABILITIES.h>

//0x148 bytes (sizeof)
struct _KSR_FIRMWARE_INFORMATION
{
    ULONG Version;                                                          //0x0
    struct _UNICODE_STRING EfiVersionString;                                //0x8
    struct _VIRTUAL_EFI_RUNTIME_SERVICES EfiRuntimeServices;                //0x18
    VOID* EfiMemoryMap;                                                     //0x88
    ULONG EfiMemoryMapSize;                                                 //0x90
    ULONG EfiMemoryMapDescriptorSize;                                       //0x94
    struct _MEMORY_CACHING_REQUIREMENTS* CachingRequirements;               //0x98
    ULONG CachingRequirementsCount;                                         //0xa0
    VOID* Smbios;                                                           //0xa8
    struct _INBV_DISPLAY_CONTEXT* DisplayContext;                           //0xb0
    VOID* SecureBootPolicy;                                                 //0xb8
    ULONG SecureBootPolicySize;                                             //0xc0
    struct DEBUG_MEMORY_REQUIREMENTS DebugDeviceMemory;                     //0xc8
    ULONG SoftRestartCount;                                                 //0xe8
    VOID* CodeIntegrityPolicy;                                              //0xf0
    ULONG CodeIntegrityPolicySize;                                          //0xf8
    VOID* EfiMemoryAttributes;                                              //0x100
    VOID* Esrt;                                                             //0x108
    ULONG EsrtSize;                                                         //0x110
    VOID* CodeIntegrityPolicyHash;                                          //0x118
    ULONG CodeIntegrityPolicyHashSize;                                      //0x120
    VOID* CodeIntegrityPolicyOriginalHash;                                  //0x128
    ULONG CodeIntegrityPolicyOriginalHashSize;                              //0x130
    struct _PHYSICAL_MEMORY_RANGE* BadPageRanges;                           //0x138
    ULONG BadPageRangeCount;                                                //0x140
    union _KSR_CAPABILITIES Capabilities;                                   //0x144
};
