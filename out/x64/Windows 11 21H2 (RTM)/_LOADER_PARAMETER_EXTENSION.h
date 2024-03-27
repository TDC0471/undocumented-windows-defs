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
#include <_ETW_BOOT_CONFIG.h>
#include <_BOOT_FIRMWARE_RAMDISK_INFO.h>
#include <_MEMORY_MIRRORING_DATA.h>
#include <_INSTALLED_MEMORY_RANGE.h>

//0xed8 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x18
    ULONG EmInfFileSize;                                                    //0x20
    VOID* TriageDumpBlock;                                                  //0x28
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x30
    struct _SMBIOS3_TABLE_HEADER* SMBiosEPSHeader;                          //0x38
    VOID* DrvDBImage;                                                       //0x40
    ULONG DrvDBSize;                                                        //0x48
    VOID* DrvDBPatchImage;                                                  //0x50
    ULONG DrvDBPatchSize;                                                   //0x58
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x60
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x68
    VOID* AcpiTable;                                                        //0x78
    ULONG AcpiTableSize;                                                    //0x80
    ULONG LastBootSucceeded:1;                                              //0x84
    ULONG LastBootShutdown:1;                                               //0x84
    ULONG IoPortAccessSupported:1;                                          //0x84
    ULONG BootDebuggerActive:1;                                             //0x84
    ULONG StrongCodeGuarantees:1;                                           //0x84
    ULONG HardStrongCodeGuarantees:1;                                       //0x84
    ULONG SidSharingDisabled:1;                                             //0x84
    ULONG TpmInitialized:1;                                                 //0x84
    ULONG VsmConfigured:1;                                                  //0x84
    ULONG IumEnabled:1;                                                     //0x84
    ULONG IsSmbboot:1;                                                      //0x84
    ULONG BootLogEnabled:1;                                                 //0x84
    ULONG DriverVerifierEnabled:1;                                          //0x84
    ULONG SuppressMonitorX:1;                                               //0x84
    ULONG KernelCetEnabled:1;                                               //0x84
    ULONG SuppressSmap:1;                                                   //0x84
    ULONG PointerAuthKernelIpEnabled:1;                                     //0x84
    ULONG SplitLargeNumaNodes:1;                                            //0x84
    ULONG KernelCetAuditModeEnabled:1;                                      //0x84
    ULONG Unused:2;                                                         //0x84
    ULONG FeatureSimulations:6;                                             //0x84
    ULONG MicrocodeSelfHosting:1;                                           //0x84
    ULONG XhciLegacyHandoffSkip:1;                                          //0x84
    ULONG DisableInsiderOptInHVCI:1;                                        //0x84
    ULONG MicrocodeMinVerSupported:1;                                       //0x84
    ULONG GpuIommuEnabled:1;                                                //0x84
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;                  //0x88
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0xe8
    VOID* WmdTestResult;                                                    //0xf8
    struct _GUID BootIdentifier;                                            //0x100
    ULONG ResumePages;                                                      //0x110
    VOID* DumpHeader;                                                       //0x118
    VOID* BgContext;                                                        //0x120
    VOID* NumaLocalityInfo;                                                 //0x128
    VOID* NumaGroupAssignment;                                              //0x130
    struct _LIST_ENTRY AttachedHives;                                       //0x138
    ULONG MemoryCachingRequirementsCount;                                   //0x148
    VOID* MemoryCachingRequirements;                                        //0x150
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0x158
    ULONGLONG ProcessorCounterFrequency;                                    //0x9c0
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x9c8
    struct _GUID HardwareConfigurationId;                                   //0xa08
    struct _LIST_ENTRY HalExtensionModuleList;                              //0xa18
    struct _LIST_ENTRY PrmUpdateModuleList;                                 //0xa28
    struct _LIST_ENTRY PrmFirmwareModuleList;                               //0xa38
    union _LARGE_INTEGER SystemTime;                                        //0xa48
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0xa50
    union
    {
        ULONGLONG BootFlags;                                                //0xa58
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0xa58
            ULONGLONG DbgHiberBoot:1;                                       //0xa58
            ULONGLONG DbgSoftRestart:1;                                     //0xa58
            ULONGLONG DbgMeasuredLaunch:1;                                  //0xa58
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0xa60
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0xa60
            ULONGLONG DbgRtcBootTime:1;                                     //0xa60
            ULONGLONG DbgNoLegacyServices:1;                                //0xa60
        };
    };
    VOID* WfsFPData;                                                        //0xa68
    ULONG WfsFPDataSize;                                                    //0xa70
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0xa78
    VOID* ApiSetSchema;                                                     //0xaa0
    ULONG ApiSetSchemaSize;                                                 //0xaa8
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0xab0
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0xac0
    struct _UNICODE_STRING SmbiosVersion;                                   //0xad0
    struct _UNICODE_STRING EfiVersion;                                      //0xae0
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0xaf0
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0xaf8
    struct _UNICODE_STRING ManufacturingProfile;                            //0xb18
    VOID* BbtBuffer;                                                        //0xb28
    ULONGLONG XsaveAllowedFeatures;                                         //0xb30
    ULONG XsaveFlags;                                                       //0xb38
    VOID* BootOptions;                                                      //0xb40
    ULONG IumEnablement;                                                    //0xb48
    ULONG IumPolicy;                                                        //0xb4c
    LONG IumStatus;                                                         //0xb50
    ULONG BootId;                                                           //0xb54
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0xb58
    ULONG CodeIntegrityDataSize;                                            //0xb60
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xb64
    ULONG SoftRestartCount;                                                 //0xb78
    LONGLONG SoftRestartTime;                                               //0xb80
    VOID* HypercallCodeVa;                                                  //0xb88
    VOID* HalVirtualAddress;                                                //0xb90
    ULONGLONG HalNumberOfBytes;                                             //0xb98
    struct _LEAP_SECOND_DATA* LeapSecondData;                               //0xba0
    ULONG MajorRelease;                                                     //0xba8
    ULONG Reserved1;                                                        //0xbac
    CHAR NtBuildLab[224];                                                   //0xbb0
    CHAR NtBuildLabEx[224];                                                 //0xc90
    struct _LOADER_RESET_REASON ResetReason;                                //0xd70
    ULONG MaxPciBusNumber;                                                  //0xda0
    ULONG FeatureSettings;                                                  //0xda4
    ULONG HotPatchReserveSize;                                              //0xda8
    ULONG RetpolineReserveSize;                                             //0xdac
    struct
    {
        VOID* CodeBase;                                                     //0xdb0
        ULONGLONG CodeSize;                                                 //0xdb8
    } MiniExecutive;                                                        //0xdb0
    struct _VSM_PERFORMANCE_DATA VsmPerformanceData;                        //0xdc0
    struct _NUMA_MEMORY_RANGE* NumaMemoryRanges;                            //0xe00
    ULONG NumaMemoryRangeCount;                                             //0xe08
    ULONG IommuFaultPolicy;                                                 //0xe0c
    struct _LOADER_FEATURE_CONFIGURATION_INFORMATION FeatureConfigurationInformation; //0xe10
    struct _ETW_BOOT_CONFIG EtwBootConfig;                                  //0xe58
    struct _BOOT_FIRMWARE_RAMDISK_INFO* FwRamdiskInfo;                      //0xe70
    VOID* IpmiHwContext;                                                    //0xe78
    ULONGLONG IdleThreadShadowStack;                                        //0xe80
    ULONGLONG TransitionShadowStack;                                        //0xe88
    ULONGLONG* IstShadowStacksTable;                                        //0xe90
    ULONGLONG ReservedForKernelCet[2];                                      //0xe98
    struct _MEMORY_MIRRORING_DATA* MirroringData;                           //0xea8
    union _LARGE_INTEGER Luid;                                              //0xeb0
    struct
    {
        struct _INSTALLED_MEMORY_RANGE* Ranges;                             //0xeb8
        ULONG RangeCount;                                                   //0xec0
    } InstalledMemory;                                                      //0xeb8
    struct _LIST_ENTRY HotPatchList;                                        //0xec8
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

