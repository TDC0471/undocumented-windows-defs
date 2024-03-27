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

//0xe8 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x14
    ULONG EmInfFileSize;                                                    //0x18
    VOID* TriageDumpBlock;                                                  //0x1c
    ULONG LoaderPagesSpanned;                                               //0x20
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x24
    struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;                           //0x28
    VOID* DrvDBImage;                                                       //0x2c
    ULONG DrvDBSize;                                                        //0x30
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x34
    UCHAR* HalpIRQLToTPR;                                                   //0x38
    UCHAR* HalpVectorToIRQL;                                                //0x3c
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x40
    VOID* AcpiTable;                                                        //0x48
    ULONG AcpiTableSize;                                                    //0x4c
    ULONG LastBootSucceeded:1;                                              //0x50
    ULONG LastBootShutdown:1;                                               //0x50
    ULONG IoPortAccessSupported:1;                                          //0x50
    ULONG Reserved:29;                                                      //0x50
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x54
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x58
    VOID* WmdTestResult;                                                    //0x60
    struct _GUID BootIdentifier;                                            //0x64
    ULONG ResumePages;                                                      //0x74
    VOID* DumpHeader;                                                       //0x78
    VOID* BgContext;                                                        //0x7c
    VOID* NumaLocalityInfo;                                                 //0x80
    VOID* NumaGroupAssignment;                                              //0x84
    struct _LIST_ENTRY AttachedHives;                                       //0x88
    ULONG MemoryCachingRequirementsCount;                                   //0x90
    VOID* MemoryCachingRequirements;                                        //0x94
    struct _TPM_BOOT_ENTROPY_LDR_RESULT TpmBootEntropyResult;               //0x98
    ULONGLONG ProcessorCounterFrequency;                                    //0xe0
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

