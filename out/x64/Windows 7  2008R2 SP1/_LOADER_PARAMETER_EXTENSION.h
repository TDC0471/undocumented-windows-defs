#pragma once
/* ------------------ */

#include <_PROFILE_PARAMETER_BLOCK.h>
#include <_HEADLESS_LOADER_BLOCK.h>
#include <_SMBIOS_TABLE_HEADER.h>
#include <_NETWORK_LOADER_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_LOADER_PERFORMANCE_DATA.h>
#include <_GUID.h>
#include <_TPM_BOOT_ENTROPY_LDR_RESULT.h>

//0x148 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x18
    ULONG EmInfFileSize;                                                    //0x20
    VOID* TriageDumpBlock;                                                  //0x28
    ULONGLONG LoaderPagesSpanned;                                           //0x30
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x38
    struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;                           //0x40
    VOID* DrvDBImage;                                                       //0x48
    ULONG DrvDBSize;                                                        //0x50
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x58
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x60
    VOID* AcpiTable;                                                        //0x70
    ULONG AcpiTableSize;                                                    //0x78
    ULONG LastBootSucceeded:1;                                              //0x7c
    ULONG LastBootShutdown:1;                                               //0x7c
    ULONG IoPortAccessSupported:1;                                          //0x7c
    ULONG Reserved:29;                                                      //0x7c
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x80
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x88
    VOID* WmdTestResult;                                                    //0x98
    struct _GUID BootIdentifier;                                            //0xa0
    ULONG ResumePages;                                                      //0xb0
    VOID* DumpHeader;                                                       //0xb8
    VOID* BgContext;                                                        //0xc0
    VOID* NumaLocalityInfo;                                                 //0xc8
    VOID* NumaGroupAssignment;                                              //0xd0
    struct _LIST_ENTRY AttachedHives;                                       //0xd8
    ULONG MemoryCachingRequirementsCount;                                   //0xe8
    VOID* MemoryCachingRequirements;                                        //0xf0
    struct _TPM_BOOT_ENTROPY_LDR_RESULT TpmBootEntropyResult;               //0xf8
    ULONGLONG ProcessorCounterFrequency;                                    //0x140
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

