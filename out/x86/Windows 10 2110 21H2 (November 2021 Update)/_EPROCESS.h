#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LARGE_INTEGER.h>
#include <_EX_FAST_REF.h>
#include <_ETHREAD.h>
#include <_EJOB.h>
#include <_RTL_AVL_TREE.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_PEB.h>
#include <_MM_SESSION_SPACE.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_HANDLE_TABLE.h>
#include <_FILE_OBJECT.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT_FULL.h>
#include <_ALPC_PROCESS_CONTEXT.h>
#include <_PO_DIAG_STACK_RECORD.h>
#include <_PS_PROTECTION.h>
#include <_PROCESS_DISK_COUNTERS.h>
#include <_PO_PROCESS_ENERGY_CONTEXT.h>
#include <_PS_INTERLOCKED_TIMER_DELAY_VALUES.h>
#include <_WNF_STATE_NAME.h>
#include <_PS_PROCESS_WAKE_INFORMATION.h>
#include <_PS_DYNAMIC_ENFORCED_ADDRESS_RANGES.h>

//0x500 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0xe0
    VOID* UniqueProcessId;                                                  //0xe4
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xe8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xf0
    VOID* VdmObjects;                                                       //0xf4
    union
    {
        ULONG Flags2;                                                       //0xf8
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0xf8
            ULONG AccountingFolded:1;                                       //0xf8
            ULONG NewProcessReported:1;                                     //0xf8
            ULONG ExitProcessReported:1;                                    //0xf8
            ULONG ReportCommitChanges:1;                                    //0xf8
            ULONG LastReportMemory:1;                                       //0xf8
            ULONG ForceWakeCharge:1;                                        //0xf8
            ULONG CrossSessionCreate:1;                                     //0xf8
            ULONG NeedsHandleRundown:1;                                     //0xf8
            ULONG RefTraceEnabled:1;                                        //0xf8
            ULONG PicoCreated:1;                                            //0xf8
            ULONG EmptyJobEvaluated:1;                                      //0xf8
            ULONG DefaultPagePriority:3;                                    //0xf8
            ULONG PrimaryTokenFrozen:1;                                     //0xf8
            ULONG ProcessVerifierTarget:1;                                  //0xf8
            ULONG RestrictSetThreadContext:1;                               //0xf8
            ULONG AffinityPermanent:1;                                      //0xf8
            ULONG AffinityUpdateEnable:1;                                   //0xf8
            ULONG PropagateNode:1;                                          //0xf8
            ULONG ExplicitAffinity:1;                                       //0xf8
            ULONG ProcessExecutionState:2;                                  //0xf8
            ULONG EnableReadVmLogging:1;                                    //0xf8
            ULONG EnableWriteVmLogging:1;                                   //0xf8
            ULONG FatalAccessTerminationRequested:1;                        //0xf8
            ULONG DisableSystemAllowedCpuSet:1;                             //0xf8
            ULONG ProcessStateChangeRequest:2;                              //0xf8
            ULONG ProcessStateChangeInProgress:1;                           //0xf8
            ULONG InPrivate:1;                                              //0xf8
        };
    };
    union
    {
        ULONG Flags;                                                        //0xfc
        struct
        {
            ULONG CreateReported:1;                                         //0xfc
            ULONG NoDebugInherit:1;                                         //0xfc
            ULONG ProcessExiting:1;                                         //0xfc
            ULONG ProcessDelete:1;                                          //0xfc
            ULONG ManageExecutableMemoryWrites:1;                           //0xfc
            ULONG VmDeleted:1;                                              //0xfc
            ULONG OutswapEnabled:1;                                         //0xfc
            ULONG Outswapped:1;                                             //0xfc
            ULONG FailFastOnCommitFail:1;                                   //0xfc
            ULONG Wow64VaSpace4Gb:1;                                        //0xfc
            ULONG AddressSpaceInitialized:2;                                //0xfc
            ULONG SetTimerResolution:1;                                     //0xfc
            ULONG BreakOnTermination:1;                                     //0xfc
            ULONG DeprioritizeViews:1;                                      //0xfc
            ULONG WriteWatch:1;                                             //0xfc
            ULONG ProcessInSession:1;                                       //0xfc
            ULONG OverrideAddressSpace:1;                                   //0xfc
            ULONG HasAddressSpace:1;                                        //0xfc
            ULONG LaunchPrefetched:1;                                       //0xfc
            ULONG Background:1;                                             //0xfc
            ULONG VmTopDown:1;                                              //0xfc
            ULONG ImageNotifyDone:1;                                        //0xfc
            ULONG PdeUpdateNeeded:1;                                        //0xfc
            ULONG VdmAllowed:1;                                             //0xfc
            ULONG ProcessRundown:1;                                         //0xfc
            ULONG ProcessInserted:1;                                        //0xfc
            ULONG DefaultIoPriority:3;                                      //0xfc
            ULONG ProcessSelfDelete:1;                                      //0xfc
            ULONG SetTimerResolutionLink:1;                                 //0xfc
        };
    };
    union _LARGE_INTEGER CreateTime;                                        //0x100
    ULONG ProcessQuotaUsage[2];                                             //0x108
    ULONG ProcessQuotaPeak[2];                                              //0x110
    ULONG PeakVirtualSize;                                                  //0x118
    ULONG VirtualSize;                                                      //0x11c
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x120
    union
    {
        VOID* ExceptionPortData;                                            //0x128
        ULONG ExceptionPortValue;                                           //0x128
        ULONG ExceptionPortState:3;                                         //0x128
    };
    struct _EX_FAST_REF Token;                                              //0x12c
    ULONG MmReserved;                                                       //0x130
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x134
    struct _EX_PUSH_LOCK PageTableCommitmentLock;                           //0x138
    struct _ETHREAD* RotateInProgress;                                      //0x13c
    struct _ETHREAD* ForkInProgress;                                        //0x140
    struct _EJOB* volatile CommitChargeJob;                                 //0x144
    struct _RTL_AVL_TREE CloneRoot;                                         //0x148
    volatile ULONG NumberOfPrivatePages;                                    //0x14c
    volatile ULONG NumberOfLockedPages;                                     //0x150
    VOID* Win32Process;                                                     //0x154
    struct _EJOB* volatile Job;                                             //0x158
    VOID* SectionObject;                                                    //0x15c
    VOID* SectionBaseAddress;                                               //0x160
    ULONG Cookie;                                                           //0x164
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x168
    VOID* Win32WindowStation;                                               //0x16c
    VOID* InheritedFromUniqueProcessId;                                     //0x170
    VOID* LdtInformation;                                                   //0x174
    volatile ULONG OwnerProcessId;                                          //0x178
    struct _PEB* Peb;                                                       //0x17c
    struct _MM_SESSION_SPACE* Session;                                      //0x180
    VOID* Spare1;                                                           //0x184
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x188
    struct _HANDLE_TABLE* ObjectTable;                                      //0x18c
    VOID* DebugPort;                                                        //0x190
    VOID* PaeTop;                                                           //0x194
    VOID* DeviceMap;                                                        //0x198
    VOID* EtwDataSource;                                                    //0x19c
    ULONGLONG PageDirectoryPte;                                             //0x1a0
    struct _FILE_OBJECT* ImageFilePointer;                                  //0x1a8
    UCHAR ImageFileName[15];                                                //0x1ac
    UCHAR PriorityClass;                                                    //0x1bb
    VOID* SecurityPort;                                                     //0x1bc
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x1c0
    struct _LIST_ENTRY JobLinks;                                            //0x1c4
    VOID* HighestUserAddress;                                               //0x1cc
    struct _LIST_ENTRY ThreadListHead;                                      //0x1d0
    volatile ULONG ActiveThreads;                                           //0x1d8
    ULONG ImagePathHash;                                                    //0x1dc
    ULONG DefaultHardErrorProcessing;                                       //0x1e0
    LONG LastThreadExitStatus;                                              //0x1e4
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1e8
    VOID* LockedPagesList;                                                  //0x1ec
    union _LARGE_INTEGER ReadOperationCount;                                //0x1f0
    union _LARGE_INTEGER WriteOperationCount;                               //0x1f8
    union _LARGE_INTEGER OtherOperationCount;                               //0x200
    union _LARGE_INTEGER ReadTransferCount;                                 //0x208
    union _LARGE_INTEGER WriteTransferCount;                                //0x210
    union _LARGE_INTEGER OtherTransferCount;                                //0x218
    ULONG CommitChargeLimit;                                                //0x220
    volatile ULONG CommitCharge;                                            //0x224
    volatile ULONG CommitChargePeak;                                        //0x228
    struct _MMSUPPORT_FULL Vm;                                              //0x240
    struct _LIST_ENTRY MmProcessLinks;                                      //0x340
    ULONG ModifiedPageCount;                                                //0x348
    LONG ExitStatus;                                                        //0x34c
    struct _RTL_AVL_TREE VadRoot;                                           //0x350
    VOID* VadHint;                                                          //0x354
    ULONG VadCount;                                                         //0x358
    volatile ULONG VadPhysicalPages;                                        //0x35c
    ULONG VadPhysicalPagesLimit;                                            //0x360
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x364
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x374
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x37c
    ULONG RequestedTimerResolution;                                         //0x380
    ULONG SmallestTimerResolution;                                          //0x384
    union _LARGE_INTEGER ExitTime;                                          //0x388
    ULONG ActiveThreadsHighWatermark;                                       //0x390
    ULONG LargePrivateVadCount;                                             //0x394
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x398
    VOID* WnfContext;                                                       //0x39c
    struct _EJOB* ServerSilo;                                               //0x3a0
    UCHAR SignatureLevel;                                                   //0x3a4
    UCHAR SectionSignatureLevel;                                            //0x3a5
    struct _PS_PROTECTION Protection;                                       //0x3a6
    UCHAR HangCount:3;                                                      //0x3a7
    UCHAR GhostCount:3;                                                     //0x3a7
    UCHAR PrefilterException:1;                                             //0x3a7
    union
    {
        ULONG Flags3;                                                       //0x3a8
        struct
        {
            ULONG Minimal:1;                                                //0x3a8
            ULONG ReplacingPageRoot:1;                                      //0x3a8
            ULONG Crashed:1;                                                //0x3a8
            ULONG JobVadsAreTracked:1;                                      //0x3a8
            ULONG VadTrackingDisabled:1;                                    //0x3a8
            ULONG AuxiliaryProcess:1;                                       //0x3a8
            ULONG SubsystemProcess:1;                                       //0x3a8
            ULONG IndirectCpuSets:1;                                        //0x3a8
            ULONG RelinquishedCommit:1;                                     //0x3a8
            ULONG HighGraphicsPriority:1;                                   //0x3a8
            ULONG CommitFailLogged:1;                                       //0x3a8
            ULONG ReserveFailLogged:1;                                      //0x3a8
            ULONG SystemProcess:1;                                          //0x3a8
            ULONG HideImageBaseAddresses:1;                                 //0x3a8
            ULONG AddressPolicyFrozen:1;                                    //0x3a8
            ULONG ProcessFirstResume:1;                                     //0x3a8
            ULONG ForegroundExternal:1;                                     //0x3a8
            ULONG ForegroundSystem:1;                                       //0x3a8
            ULONG HighMemoryPriority:1;                                     //0x3a8
            ULONG EnableProcessSuspendResumeLogging:1;                      //0x3a8
            ULONG EnableThreadSuspendResumeLogging:1;                       //0x3a8
            ULONG SecurityDomainChanged:1;                                  //0x3a8
            ULONG SecurityFreezeComplete:1;                                 //0x3a8
            ULONG VmProcessorHost:1;                                        //0x3a8
            ULONG VmProcessorHostTransition:1;                              //0x3a8
            ULONG AltSyscall:1;                                             //0x3a8
            ULONG TimerResolutionIgnore:1;                                  //0x3a8
            ULONG DisallowUserTerminate:1;                                  //0x3a8
        };
    };
    LONG DeviceAsid;                                                        //0x3ac
    VOID* SvmData;                                                          //0x3b0
    struct _EX_PUSH_LOCK SvmProcessLock;                                    //0x3b4
    ULONG SvmLock;                                                          //0x3b8
    struct _LIST_ENTRY SvmProcessDeviceListHead;                            //0x3bc
    ULONGLONG LastFreezeInterruptTime;                                      //0x3c8
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x3d0
    VOID* PicoContext;                                                      //0x3d4
    ULONG HighPriorityFaultsAllowed;                                        //0x3d8
    VOID* InstrumentationCallback;                                          //0x3dc
    struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;                       //0x3e0
    VOID* VmContext;                                                        //0x3e4
    ULONGLONG SequenceNumber;                                               //0x3e8
    ULONGLONG CreateInterruptTime;                                          //0x3f0
    ULONGLONG CreateUnbiasedInterruptTime;                                  //0x3f8
    ULONGLONG TotalUnbiasedFrozenTime;                                      //0x400
    ULONGLONG LastAppStateUpdateTime;                                       //0x408
    ULONGLONG LastAppStateUptime:61;                                        //0x410
    ULONGLONG LastAppState:3;                                               //0x410
    volatile ULONG SharedCommitCharge;                                      //0x418
    struct _EX_PUSH_LOCK SharedCommitLock;                                  //0x41c
    struct _LIST_ENTRY SharedCommitLinks;                                   //0x420
    union
    {
        struct
        {
            ULONG AllowedCpuSets;                                           //0x428
            ULONG DefaultCpuSets;                                           //0x42c
        };
        struct
        {
            ULONG* AllowedCpuSetsIndirect;                                  //0x428
            ULONG* DefaultCpuSetsIndirect;                                  //0x42c
        };
    };
    VOID* DiskIoAttribution;                                                //0x430
    VOID* DxgProcess;                                                       //0x434
    ULONG Win32KFilterSet;                                                  //0x438
    unionvolatile _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;     //0x440
    volatile ULONG KTimerSets;                                              //0x448
    volatile ULONG KTimer2Sets;                                             //0x44c
    volatile ULONG ThreadTimerSets;                                         //0x450
    ULONG VirtualTimerListLock;                                             //0x454
    struct _LIST_ENTRY VirtualTimerListHead;                                //0x458
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x460
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;                       //0x460
    };
    union
    {
        ULONG MitigationFlags;                                              //0x490
        struct
        {
            ULONG ControlFlowGuardEnabled:1;                                //0x490
            ULONG ControlFlowGuardExportSuppressionEnabled:1;               //0x490
            ULONG ControlFlowGuardStrict:1;                                 //0x490
            ULONG DisallowStrippedImages:1;                                 //0x490
            ULONG ForceRelocateImages:1;                                    //0x490
            ULONG HighEntropyASLREnabled:1;                                 //0x490
            ULONG StackRandomizationDisabled:1;                             //0x490
            ULONG ExtensionPointDisable:1;                                  //0x490
            ULONG DisableDynamicCode:1;                                     //0x490
            ULONG DisableDynamicCodeAllowOptOut:1;                          //0x490
            ULONG DisableDynamicCodeAllowRemoteDowngrade:1;                 //0x490
            ULONG AuditDisableDynamicCode:1;                                //0x490
            ULONG DisallowWin32kSystemCalls:1;                              //0x490
            ULONG AuditDisallowWin32kSystemCalls:1;                         //0x490
            ULONG EnableFilteredWin32kAPIs:1;                               //0x490
            ULONG AuditFilteredWin32kAPIs:1;                                //0x490
            ULONG DisableNonSystemFonts:1;                                  //0x490
            ULONG AuditNonSystemFontLoading:1;                              //0x490
            ULONG PreferSystem32Images:1;                                   //0x490
            ULONG ProhibitRemoteImageMap:1;                                 //0x490
            ULONG AuditProhibitRemoteImageMap:1;                            //0x490
            ULONG ProhibitLowILImageMap:1;                                  //0x490
            ULONG AuditProhibitLowILImageMap:1;                             //0x490
            ULONG SignatureMitigationOptIn:1;                               //0x490
            ULONG AuditBlockNonMicrosoftBinaries:1;                         //0x490
            ULONG AuditBlockNonMicrosoftBinariesAllowStore:1;               //0x490
            ULONG LoaderIntegrityContinuityEnabled:1;                       //0x490
            ULONG AuditLoaderIntegrityContinuity:1;                         //0x490
            ULONG EnableModuleTamperingProtection:1;                        //0x490
            ULONG EnableModuleTamperingProtectionNoInherit:1;               //0x490
            ULONG RestrictIndirectBranchPrediction:1;                       //0x490
            ULONG IsolateSecurityDomain:1;                                  //0x490
        } MitigationFlagsValues;                                            //0x490
    };
    union
    {
        ULONG MitigationFlags2;                                             //0x494
        struct
        {
            ULONG EnableExportAddressFilter:1;                              //0x494
            ULONG AuditExportAddressFilter:1;                               //0x494
            ULONG EnableExportAddressFilterPlus:1;                          //0x494
            ULONG AuditExportAddressFilterPlus:1;                           //0x494
            ULONG EnableRopStackPivot:1;                                    //0x494
            ULONG AuditRopStackPivot:1;                                     //0x494
            ULONG EnableRopCallerCheck:1;                                   //0x494
            ULONG AuditRopCallerCheck:1;                                    //0x494
            ULONG EnableRopSimExec:1;                                       //0x494
            ULONG AuditRopSimExec:1;                                        //0x494
            ULONG EnableImportAddressFilter:1;                              //0x494
            ULONG AuditImportAddressFilter:1;                               //0x494
            ULONG DisablePageCombine:1;                                     //0x494
            ULONG SpeculativeStoreBypassDisable:1;                          //0x494
            ULONG CetUserShadowStacks:1;                                    //0x494
            ULONG AuditCetUserShadowStacks:1;                               //0x494
            ULONG AuditCetUserShadowStacksLogged:1;                         //0x494
            ULONG UserCetSetContextIpValidation:1;                          //0x494
            ULONG AuditUserCetSetContextIpValidation:1;                     //0x494
            ULONG AuditUserCetSetContextIpValidationLogged:1;               //0x494
            ULONG CetUserShadowStacksStrictMode:1;                          //0x494
            ULONG BlockNonCetBinaries:1;                                    //0x494
            ULONG BlockNonCetBinariesNonEhcont:1;                           //0x494
            ULONG AuditBlockNonCetBinaries:1;                               //0x494
            ULONG AuditBlockNonCetBinariesLogged:1;                         //0x494
            ULONG Reserved1:1;                                              //0x494
            ULONG Reserved2:1;                                              //0x494
            ULONG Reserved3:1;                                              //0x494
            ULONG Reserved4:1;                                              //0x494
            ULONG Reserved5:1;                                              //0x494
            ULONG CetDynamicApisOutOfProcOnly:1;                            //0x494
            ULONG UserCetSetContextIpValidationRelaxedMode:1;               //0x494
        } MitigationFlags2Values;                                           //0x494
    };
    VOID* PartitionObject;                                                  //0x498
    ULONGLONG SecurityDomain;                                               //0x4a0
    ULONGLONG ParentSecurityDomain;                                         //0x4a8
    VOID* CoverageSamplerContext;                                           //0x4b0
    VOID* MmHotPatchContext;                                                //0x4b4
    struct _RTL_AVL_TREE DynamicEHContinuationTargetsTree;                  //0x4b8
    struct _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;                  //0x4bc
    struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES DynamicEnforcedCetCompatibleRanges; //0x4c0
    ULONG DisabledComponentFlags;                                           //0x4c8
};
/* Used in */
// _ALPC_COMPLETION_LIST
// _ALPC_PORT
// _DBGK_SILOSTATE
// _DIAGNOSTIC_CONTEXT
// _EPARTITION
// _ESERVERSILO_GLOBALS
// _ETW_REALTIME_CONSUMER
// _ETW_REG_ENTRY
// _FAST_IO_DISPATCH
// _HANDLE_TABLE
// _KALPC_MESSAGE
// _KALPC_SECTION
// _KALPC_SECURITY_DATA
// _KALPC_VIEW
// _KRESOURCEMANAGER_COMPLETION_BINDING
// _LOCK_TRACKER
// _LPCP_PORT_OBJECT
// _MDL
// _MI_PARTITION_STORES
// _MI_REVERSE_VIEW_MAP
// _MI_SESSION_STATE
// _MMVAD
// _MM_PAGE_ACCESS_INFO_HEADER
// _NONOPAQUE_OPLOCK
// _OBJECT_HANDLE_COUNT_ENTRY
// _OBJECT_HEADER_PROCESS_INFO
// _OBJECT_TYPE_INITIALIZER
// _OB_DUPLICATE_OBJECT_STATE
// _POP_SHUTDOWN_BUG_CHECK
// _RH_OP_CONTEXT
// _WNF_NAME_INSTANCE
// _WNF_PROCESS_CONTEXT
// _WNF_SUBSCRIPTION
// _WORK_QUEUE_ENTRY

