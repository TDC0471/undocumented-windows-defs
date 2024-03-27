#pragma once
/* ------------------ */

#include <_PROFILE_PARAMETER_BLOCK.h>
#include <_HEADLESS_LOADER_BLOCK.h>
#include <_SMBIOS3_TABLE_HEADER.h>
#include <_NETWORK_LOADER_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_LOADER_PERFORMANCE_DATA.h>
#include <_GUID.h>
#include <_BOOT_ENTROPY_LDR_RESULT.h>
#include <_LOADER_PARAMETER_HYPERVISOR_EXTENSION.h>
#include <_LARGE_INTEGER.h>
#include <_LOADER_BUGCHECK_PARAMETERS.h>
#include <_UNICODE_STRING.h>
#include <_DEBUG_DEVICE_DESCRIPTOR.h>
#include <_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.h>
#include <_LOADER_PARAMETER_CI_EXTENSION.h>
#include <_LOADER_HIVE_RECOVERY_INFO.h>
#include <_LEAP_SECOND_DATA.h>
#include <_LOADER_RESET_REASON.h>

//0xc88 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x14
    ULONG EmInfFileSize;                                                    //0x18
    VOID* TriageDumpBlock;                                                  //0x1c
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x20
    struct _SMBIOS3_TABLE_HEADER* SMBiosEPSHeader;                          //0x24
    VOID* DrvDBImage;                                                       //0x28
    ULONG DrvDBSize;                                                        //0x2c
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x30
    UCHAR* HalpIRQLToTPR;                                                   //0x34
    UCHAR* HalpVectorToIRQL;                                                //0x38
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x3c
    VOID* AcpiTable;                                                        //0x44
    ULONG AcpiTableSize;                                                    //0x48
    ULONG LastBootSucceeded:1;                                              //0x4c
    ULONG LastBootShutdown:1;                                               //0x4c
    ULONG IoPortAccessSupported:1;                                          //0x4c
    ULONG BootDebuggerActive:1;                                             //0x4c
    ULONG StrongCodeGuarantees:1;                                           //0x4c
    ULONG HardStrongCodeGuarantees:1;                                       //0x4c
    ULONG SidSharingDisabled:1;                                             //0x4c
    ULONG TpmInitialized:1;                                                 //0x4c
    ULONG VsmConfigured:1;                                                  //0x4c
    ULONG IumEnabled:1;                                                     //0x4c
    ULONG IsSmbboot:1;                                                      //0x4c
    ULONG BootLogEnabled:1;                                                 //0x4c
    ULONG DriverVerifierEnabled:1;                                          //0x4c
    ULONG Unused:8;                                                         //0x4c
    ULONG FeatureSimulations:6;                                             //0x4c
    ULONG MicrocodeSelfHosting:1;                                           //0x4c
    ULONG XhciLegacyHandoffSkip:1;                                          //0x4c
    ULONG DisableInsiderOptInHVCI:1;                                        //0x4c
    ULONG MicrocodeMinVerSupported:1;                                       //0x4c
    ULONG GpuIommuEnabled:1;                                                //0x4c
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;                  //0x50
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x98
    VOID* WmdTestResult;                                                    //0xa0
    struct _GUID BootIdentifier;                                            //0xa4
    ULONG ResumePages;                                                      //0xb4
    VOID* DumpHeader;                                                       //0xb8
    VOID* BgContext;                                                        //0xbc
    VOID* NumaLocalityInfo;                                                 //0xc0
    VOID* NumaGroupAssignment;                                              //0xc4
    struct _LIST_ENTRY AttachedHives;                                       //0xc8
    ULONG MemoryCachingRequirementsCount;                                   //0xd0
    VOID* MemoryCachingRequirements;                                        //0xd4
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0xd8
    ULONGLONG ProcessorCounterFrequency;                                    //0x940
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x948
    struct _GUID HardwareConfigurationId;                                   //0x988
    struct _LIST_ENTRY HalExtensionModuleList;                              //0x998
    union _LARGE_INTEGER SystemTime;                                        //0x9a0
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0x9a8
    union
    {
        ULONGLONG BootFlags;                                                //0x9b0
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0x9b0
            ULONGLONG DbgHiberBoot:1;                                       //0x9b0
            ULONGLONG DbgSoftRestart:1;                                     //0x9b0
            ULONGLONG DbgMeasuredLaunch:1;                                  //0x9b0
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0x9b8
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0x9b8
            ULONGLONG DbgRtcBootTime:1;                                     //0x9b8
            ULONGLONG DbgNoLegacyServices:1;                                //0x9b8
        };
    };
    VOID* WfsFPData;                                                        //0x9c0
    ULONG WfsFPDataSize;                                                    //0x9c4
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0x9c8
    VOID* ApiSetSchema;                                                     //0x9dc
    ULONG ApiSetSchemaSize;                                                 //0x9e0
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0x9e4
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0x9ec
    struct _UNICODE_STRING SmbiosVersion;                                   //0x9f4
    struct _UNICODE_STRING EfiVersion;                                      //0x9fc
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0xa04
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0xa08
    struct _UNICODE_STRING ManufacturingProfile;                            //0xa28
    VOID* BbtBuffer;                                                        //0xa30
    ULONGLONG XsaveAllowedFeatures;                                         //0xa38
    ULONG XsaveFlags;                                                       //0xa40
    VOID* BootOptions;                                                      //0xa44
    ULONG IumEnablement;                                                    //0xa48
    ULONG IumPolicy;                                                        //0xa4c
    LONG IumStatus;                                                         //0xa50
    ULONG BootId;                                                           //0xa54
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0xa58
    ULONG CodeIntegrityDataSize;                                            //0xa5c
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xa60
    ULONG SoftRestartCount;                                                 //0xa74
    LONGLONG SoftRestartTime;                                               //0xa78
    struct _LEAP_SECOND_DATA* LeapSecondData;                               //0xa80
    ULONG MajorRelease;                                                     //0xa84
    ULONG Reserved1;                                                        //0xa88
    CHAR NtBuildLab[224];                                                   //0xa8c
    CHAR NtBuildLabEx[224];                                                 //0xb6c
    struct _LOADER_RESET_REASON ResetReason;                                //0xc50
    ULONG MaxPciBusNumber;                                                  //0xc80
    ULONG FeatureSettings;                                                  //0xc84
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

