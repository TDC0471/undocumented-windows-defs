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
#include <_VSM_PERFORMANCE_DATA.h>
#include <_NUMA_MEMORY_RANGE.h>
#include <_LOADER_FEATURE_CONFIGURATION_INFORMATION.h>

//0xd30 bytes (sizeof)
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
    VOID* DrvDBPatchImage;                                                  //0x30
    ULONG DrvDBPatchSize;                                                   //0x34
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x38
    UCHAR* HalpIRQLToTPR;                                                   //0x3c
    UCHAR* HalpVectorToIRQL;                                                //0x40
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x44
    VOID* AcpiTable;                                                        //0x4c
    ULONG AcpiTableSize;                                                    //0x50
    ULONG LastBootSucceeded:1;                                              //0x54
    ULONG LastBootShutdown:1;                                               //0x54
    ULONG IoPortAccessSupported:1;                                          //0x54
    ULONG BootDebuggerActive:1;                                             //0x54
    ULONG StrongCodeGuarantees:1;                                           //0x54
    ULONG HardStrongCodeGuarantees:1;                                       //0x54
    ULONG SidSharingDisabled:1;                                             //0x54
    ULONG TpmInitialized:1;                                                 //0x54
    ULONG VsmConfigured:1;                                                  //0x54
    ULONG IumEnabled:1;                                                     //0x54
    ULONG IsSmbboot:1;                                                      //0x54
    ULONG BootLogEnabled:1;                                                 //0x54
    ULONG DriverVerifierEnabled:1;                                          //0x54
    ULONG SuppressMonitorX:1;                                               //0x54
    ULONG KernelCetEnabled:1;                                               //0x54
    ULONG SuppressSmap:1;                                                   //0x54
    ULONG Unused:5;                                                         //0x54
    ULONG FeatureSimulations:6;                                             //0x54
    ULONG MicrocodeSelfHosting:1;                                           //0x54
    ULONG XhciLegacyHandoffSkip:1;                                          //0x54
    ULONG DisableInsiderOptInHVCI:1;                                        //0x54
    ULONG MicrocodeMinVerSupported:1;                                       //0x54
    ULONG GpuIommuEnabled:1;                                                //0x54
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;                  //0x58
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0xb8
    VOID* WmdTestResult;                                                    //0xc0
    struct _GUID BootIdentifier;                                            //0xc4
    ULONG ResumePages;                                                      //0xd4
    VOID* DumpHeader;                                                       //0xd8
    VOID* BgContext;                                                        //0xdc
    VOID* NumaLocalityInfo;                                                 //0xe0
    VOID* NumaGroupAssignment;                                              //0xe4
    struct _LIST_ENTRY AttachedHives;                                       //0xe8
    ULONG MemoryCachingRequirementsCount;                                   //0xf0
    VOID* MemoryCachingRequirements;                                        //0xf4
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0xf8
    ULONGLONG ProcessorCounterFrequency;                                    //0x960
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x968
    struct _GUID HardwareConfigurationId;                                   //0x9a8
    struct _LIST_ENTRY HalExtensionModuleList;                              //0x9b8
    union _LARGE_INTEGER SystemTime;                                        //0x9c0
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0x9c8
    union
    {
        ULONGLONG BootFlags;                                                //0x9d0
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0x9d0
            ULONGLONG DbgHiberBoot:1;                                       //0x9d0
            ULONGLONG DbgSoftRestart:1;                                     //0x9d0
            ULONGLONG DbgMeasuredLaunch:1;                                  //0x9d0
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0x9d8
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0x9d8
            ULONGLONG DbgRtcBootTime:1;                                     //0x9d8
            ULONGLONG DbgNoLegacyServices:1;                                //0x9d8
        };
    };
    VOID* WfsFPData;                                                        //0x9e0
    ULONG WfsFPDataSize;                                                    //0x9e4
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0x9e8
    VOID* ApiSetSchema;                                                     //0x9fc
    ULONG ApiSetSchemaSize;                                                 //0xa00
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0xa04
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0xa0c
    struct _UNICODE_STRING SmbiosVersion;                                   //0xa14
    struct _UNICODE_STRING EfiVersion;                                      //0xa1c
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0xa24
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0xa28
    struct _UNICODE_STRING ManufacturingProfile;                            //0xa48
    VOID* BbtBuffer;                                                        //0xa50
    ULONGLONG XsaveAllowedFeatures;                                         //0xa58
    ULONG XsaveFlags;                                                       //0xa60
    VOID* BootOptions;                                                      //0xa64
    ULONG IumEnablement;                                                    //0xa68
    ULONG IumPolicy;                                                        //0xa6c
    LONG IumStatus;                                                         //0xa70
    ULONG BootId;                                                           //0xa74
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0xa78
    ULONG CodeIntegrityDataSize;                                            //0xa7c
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xa80
    ULONG SoftRestartCount;                                                 //0xa94
    LONGLONG SoftRestartTime;                                               //0xa98
    struct _LEAP_SECOND_DATA* LeapSecondData;                               //0xaa0
    ULONG MajorRelease;                                                     //0xaa4
    ULONG Reserved1;                                                        //0xaa8
    CHAR NtBuildLab[224];                                                   //0xaac
    CHAR NtBuildLabEx[224];                                                 //0xb8c
    struct _LOADER_RESET_REASON ResetReason;                                //0xc70
    ULONG MaxPciBusNumber;                                                  //0xca0
    ULONG FeatureSettings;                                                  //0xca4
    ULONG HotPatchReserveSize;                                              //0xca8
    ULONG RetpolineReserveSize;                                             //0xcac
    struct _VSM_PERFORMANCE_DATA VsmPerformanceData;                        //0xcb0
    struct _NUMA_MEMORY_RANGE* NumaMemoryRanges;                            //0xcf0
    ULONG NumaMemoryRangeCount;                                             //0xcf4
    ULONG IommuFaultPolicy;                                                 //0xcf8
    struct _LOADER_FEATURE_CONFIGURATION_INFORMATION FeatureConfigurationInformation; //0xcfc
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

