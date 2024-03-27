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

//0xdd0 bytes (sizeof)
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
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x50
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x58
    VOID* AcpiTable;                                                        //0x68
    ULONG AcpiTableSize;                                                    //0x70
    ULONG LastBootSucceeded:1;                                              //0x74
    ULONG LastBootShutdown:1;                                               //0x74
    ULONG IoPortAccessSupported:1;                                          //0x74
    ULONG BootDebuggerActive:1;                                             //0x74
    ULONG StrongCodeGuarantees:1;                                           //0x74
    ULONG HardStrongCodeGuarantees:1;                                       //0x74
    ULONG SidSharingDisabled:1;                                             //0x74
    ULONG TpmInitialized:1;                                                 //0x74
    ULONG VsmConfigured:1;                                                  //0x74
    ULONG IumEnabled:1;                                                     //0x74
    ULONG IsSmbboot:1;                                                      //0x74
    ULONG BootLogEnabled:1;                                                 //0x74
    ULONG DriverVerifierEnabled:1;                                          //0x74
    ULONG SuppressMonitorX:1;                                               //0x74
    ULONG Unused:7;                                                         //0x74
    ULONG FeatureSimulations:6;                                             //0x74
    ULONG MicrocodeSelfHosting:1;                                           //0x74
    ULONG XhciLegacyHandoffSkip:1;                                          //0x74
    ULONG DisableInsiderOptInHVCI:1;                                        //0x74
    ULONG MicrocodeMinVerSupported:1;                                       //0x74
    ULONG GpuIommuEnabled:1;                                                //0x74
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;                  //0x78
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0xd8
    VOID* WmdTestResult;                                                    //0xe8
    struct _GUID BootIdentifier;                                            //0xf0
    ULONG ResumePages;                                                      //0x100
    VOID* DumpHeader;                                                       //0x108
    VOID* BgContext;                                                        //0x110
    VOID* NumaLocalityInfo;                                                 //0x118
    VOID* NumaGroupAssignment;                                              //0x120
    struct _LIST_ENTRY AttachedHives;                                       //0x128
    ULONG MemoryCachingRequirementsCount;                                   //0x138
    VOID* MemoryCachingRequirements;                                        //0x140
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0x148
    ULONGLONG ProcessorCounterFrequency;                                    //0x9b0
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x9b8
    struct _GUID HardwareConfigurationId;                                   //0x9f8
    struct _LIST_ENTRY HalExtensionModuleList;                              //0xa08
    union _LARGE_INTEGER SystemTime;                                        //0xa18
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0xa20
    union
    {
        ULONGLONG BootFlags;                                                //0xa28
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0xa28
            ULONGLONG DbgHiberBoot:1;                                       //0xa28
            ULONGLONG DbgSoftRestart:1;                                     //0xa28
            ULONGLONG DbgMeasuredLaunch:1;                                  //0xa28
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0xa30
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0xa30
            ULONGLONG DbgRtcBootTime:1;                                     //0xa30
            ULONGLONG DbgNoLegacyServices:1;                                //0xa30
        };
    };
    VOID* WfsFPData;                                                        //0xa38
    ULONG WfsFPDataSize;                                                    //0xa40
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0xa48
    VOID* ApiSetSchema;                                                     //0xa70
    ULONG ApiSetSchemaSize;                                                 //0xa78
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0xa80
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0xa90
    struct _UNICODE_STRING SmbiosVersion;                                   //0xaa0
    struct _UNICODE_STRING EfiVersion;                                      //0xab0
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0xac0
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0xac8
    struct _UNICODE_STRING ManufacturingProfile;                            //0xae8
    VOID* BbtBuffer;                                                        //0xaf8
    ULONGLONG XsaveAllowedFeatures;                                         //0xb00
    ULONG XsaveFlags;                                                       //0xb08
    VOID* BootOptions;                                                      //0xb10
    ULONG IumEnablement;                                                    //0xb18
    ULONG IumPolicy;                                                        //0xb1c
    LONG IumStatus;                                                         //0xb20
    ULONG BootId;                                                           //0xb24
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0xb28
    ULONG CodeIntegrityDataSize;                                            //0xb30
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xb34
    ULONG SoftRestartCount;                                                 //0xb48
    LONGLONG SoftRestartTime;                                               //0xb50
    VOID* HypercallCodeVa;                                                  //0xb58
    VOID* HalVirtualAddress;                                                //0xb60
    ULONGLONG HalNumberOfBytes;                                             //0xb68
    struct _LEAP_SECOND_DATA* LeapSecondData;                               //0xb70
    ULONG MajorRelease;                                                     //0xb78
    ULONG Reserved1;                                                        //0xb7c
    CHAR NtBuildLab[224];                                                   //0xb80
    CHAR NtBuildLabEx[224];                                                 //0xc60
    struct _LOADER_RESET_REASON ResetReason;                                //0xd40
    ULONG MaxPciBusNumber;                                                  //0xd70
    ULONG FeatureSettings;                                                  //0xd74
    ULONG HotPatchReserveSize;                                              //0xd78
    ULONG RetpolineReserveSize;                                             //0xd7c
    struct
    {
        VOID* CodeBase;                                                     //0xd80
        ULONGLONG CodeSize;                                                 //0xd88
    } MiniExecutive;                                                        //0xd80
    struct _VSM_PERFORMANCE_DATA VsmPerformanceData;                        //0xd90
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

