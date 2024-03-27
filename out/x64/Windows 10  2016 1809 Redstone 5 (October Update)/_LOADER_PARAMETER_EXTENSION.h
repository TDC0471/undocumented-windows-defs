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

//0xd60 bytes (sizeof)
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
    ULONG Unused:8;                                                         //0x74
    ULONG FeatureSimulations:6;                                             //0x74
    ULONG MicrocodeSelfHosting:1;                                           //0x74
    ULONG XhciLegacyHandoffSkip:1;                                          //0x74
    ULONG DisableInsiderOptInHVCI:1;                                        //0x74
    ULONG MicrocodeMinVerSupported:1;                                       //0x74
    ULONG GpuIommuEnabled:1;                                                //0x74
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;                  //0x78
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0xc0
    VOID* WmdTestResult;                                                    //0xd0
    struct _GUID BootIdentifier;                                            //0xd8
    ULONG ResumePages;                                                      //0xe8
    VOID* DumpHeader;                                                       //0xf0
    VOID* BgContext;                                                        //0xf8
    VOID* NumaLocalityInfo;                                                 //0x100
    VOID* NumaGroupAssignment;                                              //0x108
    struct _LIST_ENTRY AttachedHives;                                       //0x110
    ULONG MemoryCachingRequirementsCount;                                   //0x120
    VOID* MemoryCachingRequirements;                                        //0x128
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0x130
    ULONGLONG ProcessorCounterFrequency;                                    //0x998
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x9a0
    struct _GUID HardwareConfigurationId;                                   //0x9e0
    struct _LIST_ENTRY HalExtensionModuleList;                              //0x9f0
    union _LARGE_INTEGER SystemTime;                                        //0xa00
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0xa08
    union
    {
        ULONGLONG BootFlags;                                                //0xa10
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0xa10
            ULONGLONG DbgHiberBoot:1;                                       //0xa10
            ULONGLONG DbgSoftRestart:1;                                     //0xa10
            ULONGLONG DbgMeasuredLaunch:1;                                  //0xa10
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0xa18
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0xa18
            ULONGLONG DbgRtcBootTime:1;                                     //0xa18
            ULONGLONG DbgNoLegacyServices:1;                                //0xa18
        };
    };
    VOID* WfsFPData;                                                        //0xa20
    ULONG WfsFPDataSize;                                                    //0xa28
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0xa30
    VOID* ApiSetSchema;                                                     //0xa58
    ULONG ApiSetSchemaSize;                                                 //0xa60
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0xa68
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0xa78
    struct _UNICODE_STRING SmbiosVersion;                                   //0xa88
    struct _UNICODE_STRING EfiVersion;                                      //0xa98
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0xaa8
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0xab0
    struct _UNICODE_STRING ManufacturingProfile;                            //0xad0
    VOID* BbtBuffer;                                                        //0xae0
    ULONGLONG XsaveAllowedFeatures;                                         //0xae8
    ULONG XsaveFlags;                                                       //0xaf0
    VOID* BootOptions;                                                      //0xaf8
    ULONG IumEnablement;                                                    //0xb00
    ULONG IumPolicy;                                                        //0xb04
    LONG IumStatus;                                                         //0xb08
    ULONG BootId;                                                           //0xb0c
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0xb10
    ULONG CodeIntegrityDataSize;                                            //0xb18
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xb1c
    ULONG SoftRestartCount;                                                 //0xb30
    LONGLONG SoftRestartTime;                                               //0xb38
    VOID* HypercallCodeVa;                                                  //0xb40
    VOID* HalVirtualAddress;                                                //0xb48
    ULONGLONG HalNumberOfBytes;                                             //0xb50
    struct _LEAP_SECOND_DATA* LeapSecondData;                               //0xb58
    ULONG MajorRelease;                                                     //0xb60
    ULONG Reserved1;                                                        //0xb64
    CHAR NtBuildLab[224];                                                   //0xb68
    CHAR NtBuildLabEx[224];                                                 //0xc48
    struct _LOADER_RESET_REASON ResetReason;                                //0xd28
    ULONG MaxPciBusNumber;                                                  //0xd58
    ULONG FeatureSettings;                                                  //0xd5c
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

