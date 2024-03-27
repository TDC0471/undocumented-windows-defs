#pragma once
/* ------------------ */

#include <_PROFILE_PARAMETER_BLOCK.h>
#include <_HEADLESS_LOADER_BLOCK.h>
#include <_SMBIOS_TABLE_HEADER.h>
#include <_NETWORK_LOADER_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_LOADER_PERFORMANCE_DATA.h>
#include <_GUID.h>

//0x7c bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    ULONG MajorVersion;                                                     //0x14
    ULONG MinorVersion;                                                     //0x18
    VOID* EmInfFileImage;                                                   //0x1c
    ULONG EmInfFileSize;                                                    //0x20
    VOID* TriageDumpBlock;                                                  //0x24
    ULONG LoaderPagesSpanned;                                               //0x28
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x2c
    struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;                           //0x30
    VOID* DrvDBImage;                                                       //0x34
    ULONG DrvDBSize;                                                        //0x38
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x3c
    UCHAR* HalpIRQLToTPR;                                                   //0x40
    UCHAR* HalpVectorToIRQL;                                                //0x44
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x48
    VOID* AcpiTable;                                                        //0x50
    ULONG AcpiTableSize;                                                    //0x54
    ULONG BootViaWinload:1;                                                 //0x58
    ULONG Reserved:31;                                                      //0x58
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x5c
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x60
    VOID* WmdTestResult;                                                    //0x68
    struct _GUID BootIdentifier;                                            //0x6c
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

