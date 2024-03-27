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
#include <_EWOW64PROCESS.h>
#include <_FILE_OBJECT.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT_FULL.h>
#include <_ALPC_PROCESS_CONTEXT.h>
#include <_PO_DIAG_STACK_RECORD.h>
#include <_INVERTED_FUNCTION_TABLE.h>
#include <_PS_PROTECTION.h>
#include <_PROCESS_DISK_COUNTERS.h>
#include <_PO_PROCESS_ENERGY_CONTEXT.h>
#include <_PS_INTERLOCKED_TIMER_DELAY_VALUES.h>
#include <_WNF_STATE_NAME.h>
#include <_PS_PROCESS_WAKE_INFORMATION.h>

//0x850 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x2d8
    VOID* UniqueProcessId;                                                  //0x2e0
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0x2e8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x2f8
    union
    {
        ULONG Flags2;                                                       //0x300
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x300
            ULONG AccountingFolded:1;                                       //0x300
            ULONG NewProcessReported:1;                                     //0x300
            ULONG ExitProcessReported:1;                                    //0x300
            ULONG ReportCommitChanges:1;                                    //0x300
            ULONG LastReportMemory:1;                                       //0x300
            ULONG ForceWakeCharge:1;                                        //0x300
            ULONG CrossSessionCreate:1;                                     //0x300
            ULONG NeedsHandleRundown:1;                                     //0x300
            ULONG RefTraceEnabled:1;                                        //0x300
            ULONG PicoCreated:1;                                            //0x300
            ULONG EmptyJobEvaluated:1;                                      //0x300
            ULONG DefaultPagePriority:3;                                    //0x300
            ULONG PrimaryTokenFrozen:1;                                     //0x300
            ULONG ProcessVerifierTarget:1;                                  //0x300
            ULONG RestrictSetThreadContext:1;                               //0x300
            ULONG AffinityPermanent:1;                                      //0x300
            ULONG AffinityUpdateEnable:1;                                   //0x300
            ULONG PropagateNode:1;                                          //0x300
            ULONG ExplicitAffinity:1;                                       //0x300
            ULONG ProcessExecutionState:2;                                  //0x300
            ULONG EnableReadVmLogging:1;                                    //0x300
            ULONG EnableWriteVmLogging:1;                                   //0x300
            ULONG FatalAccessTerminationRequested:1;                        //0x300
            ULONG DisableSystemAllowedCpuSet:1;                             //0x300
            ULONG ProcessStateChangeRequest:2;                              //0x300
            ULONG ProcessStateChangeInProgress:1;                           //0x300
            ULONG InPrivate:1;                                              //0x300
        };
    };
    union
    {
        ULONG Flags;                                                        //0x304
        struct
        {
            ULONG CreateReported:1;                                         //0x304
            ULONG NoDebugInherit:1;                                         //0x304
            ULONG ProcessExiting:1;                                         //0x304
            ULONG ProcessDelete:1;                                          //0x304
            ULONG ManageExecutableMemoryWrites:1;                           //0x304
            ULONG VmDeleted:1;                                              //0x304
            ULONG OutswapEnabled:1;                                         //0x304
            ULONG Outswapped:1;                                             //0x304
            ULONG FailFastOnCommitFail:1;                                   //0x304
            ULONG Wow64VaSpace4Gb:1;                                        //0x304
            ULONG AddressSpaceInitialized:2;                                //0x304
            ULONG SetTimerResolution:1;                                     //0x304
            ULONG BreakOnTermination:1;                                     //0x304
            ULONG DeprioritizeViews:1;                                      //0x304
            ULONG WriteWatch:1;                                             //0x304
            ULONG ProcessInSession:1;                                       //0x304
            ULONG OverrideAddressSpace:1;                                   //0x304
            ULONG HasAddressSpace:1;                                        //0x304
            ULONG LaunchPrefetched:1;                                       //0x304
            ULONG Background:1;                                             //0x304
            ULONG VmTopDown:1;                                              //0x304
            ULONG ImageNotifyDone:1;                                        //0x304
            ULONG PdeUpdateNeeded:1;                                        //0x304
            ULONG VdmAllowed:1;                                             //0x304
            ULONG ProcessRundown:1;                                         //0x304
            ULONG ProcessInserted:1;                                        //0x304
            ULONG DefaultIoPriority:3;                                      //0x304
            ULONG ProcessSelfDelete:1;                                      //0x304
            ULONG SetTimerResolutionLink:1;                                 //0x304
        };
    };
    union _LARGE_INTEGER CreateTime;                                        //0x308
    ULONGLONG ProcessQuotaUsage[2];                                         //0x310
    ULONGLONG ProcessQuotaPeak[2];                                          //0x320
    ULONGLONG PeakVirtualSize;                                              //0x330
    ULONGLONG VirtualSize;                                                  //0x338
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x340
    union
    {
        VOID* ExceptionPortData;                                            //0x350
        ULONGLONG ExceptionPortValue;                                       //0x350
        ULONGLONG ExceptionPortState:3;                                     //0x350
    };
    struct _EX_FAST_REF Token;                                              //0x358
    ULONGLONG MmReserved;                                                   //0x360
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x368
    struct _EX_PUSH_LOCK PageTableCommitmentLock;                           //0x370
    struct _ETHREAD* RotateInProgress;                                      //0x378
    struct _ETHREAD* ForkInProgress;                                        //0x380
    struct _EJOB* volatile CommitChargeJob;                                 //0x388
    struct _RTL_AVL_TREE CloneRoot;                                         //0x390
    volatile ULONGLONG NumberOfPrivatePages;                                //0x398
    volatile ULONGLONG NumberOfLockedPages;                                 //0x3a0
    VOID* Win32Process;                                                     //0x3a8
    struct _EJOB* volatile Job;                                             //0x3b0
    VOID* SectionObject;                                                    //0x3b8
    VOID* SectionBaseAddress;                                               //0x3c0
    ULONG Cookie;                                                           //0x3c8
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x3d0
    VOID* Win32WindowStation;                                               //0x3d8
    VOID* InheritedFromUniqueProcessId;                                     //0x3e0
    VOID* Spare0;                                                           //0x3e8
    volatile ULONGLONG OwnerProcessId;                                      //0x3f0
    struct _PEB* Peb;                                                       //0x3f8
    struct _MM_SESSION_SPACE* Session;                                      //0x400
    VOID* Spare1;                                                           //0x408
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x410
    struct _HANDLE_TABLE* ObjectTable;                                      //0x418
    VOID* DebugPort;                                                        //0x420
    struct _EWOW64PROCESS* WoW64Process;                                    //0x428
    VOID* DeviceMap;                                                        //0x430
    VOID* EtwDataSource;                                                    //0x438
    ULONGLONG PageDirectoryPte;                                             //0x440
    struct _FILE_OBJECT* ImageFilePointer;                                  //0x448
    UCHAR ImageFileName[15];                                                //0x450
    UCHAR PriorityClass;                                                    //0x45f
    VOID* SecurityPort;                                                     //0x460
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x468
    struct _LIST_ENTRY JobLinks;                                            //0x470
    VOID* HighestUserAddress;                                               //0x480
    struct _LIST_ENTRY ThreadListHead;                                      //0x488
    volatile ULONG ActiveThreads;                                           //0x498
    ULONG ImagePathHash;                                                    //0x49c
    ULONG DefaultHardErrorProcessing;                                       //0x4a0
    LONG LastThreadExitStatus;                                              //0x4a4
    struct _EX_FAST_REF PrefetchTrace;                                      //0x4a8
    VOID* LockedPagesList;                                                  //0x4b0
    union _LARGE_INTEGER ReadOperationCount;                                //0x4b8
    union _LARGE_INTEGER WriteOperationCount;                               //0x4c0
    union _LARGE_INTEGER OtherOperationCount;                               //0x4c8
    union _LARGE_INTEGER ReadTransferCount;                                 //0x4d0
    union _LARGE_INTEGER WriteTransferCount;                                //0x4d8
    union _LARGE_INTEGER OtherTransferCount;                                //0x4e0
    ULONGLONG CommitChargeLimit;                                            //0x4e8
    volatile ULONGLONG CommitCharge;                                        //0x4f0
    volatile ULONGLONG CommitChargePeak;                                    //0x4f8
    struct _MMSUPPORT_FULL Vm;                                              //0x500
    struct _LIST_ENTRY MmProcessLinks;                                      //0x610
    ULONG ModifiedPageCount;                                                //0x620
    LONG ExitStatus;                                                        //0x624
    struct _RTL_AVL_TREE VadRoot;                                           //0x628
    VOID* VadHint;                                                          //0x630
    ULONGLONG VadCount;                                                     //0x638
    volatile ULONGLONG VadPhysicalPages;                                    //0x640
    ULONGLONG VadPhysicalPagesLimit;                                        //0x648
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x650
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x670
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x680
    ULONG RequestedTimerResolution;                                         //0x688
    ULONG SmallestTimerResolution;                                          //0x68c
    union _LARGE_INTEGER ExitTime;                                          //0x690
    struct _INVERTED_FUNCTION_TABLE* InvertedFunctionTable;                 //0x698
    struct _EX_PUSH_LOCK InvertedFunctionTableLock;                         //0x6a0
    ULONG ActiveThreadsHighWatermark;                                       //0x6a8
    ULONG LargePrivateVadCount;                                             //0x6ac
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x6b0
    VOID* WnfContext;                                                       //0x6b8
    struct _EJOB* ServerSilo;                                               //0x6c0
    UCHAR SignatureLevel;                                                   //0x6c8
    UCHAR SectionSignatureLevel;                                            //0x6c9
    struct _PS_PROTECTION Protection;                                       //0x6ca
    UCHAR HangCount:3;                                                      //0x6cb
    UCHAR GhostCount:3;                                                     //0x6cb
    UCHAR PrefilterException:1;                                             //0x6cb
    union
    {
        ULONG Flags3;                                                       //0x6cc
        struct
        {
            ULONG Minimal:1;                                                //0x6cc
            ULONG ReplacingPageRoot:1;                                      //0x6cc
            ULONG Crashed:1;                                                //0x6cc
            ULONG JobVadsAreTracked:1;                                      //0x6cc
            ULONG VadTrackingDisabled:1;                                    //0x6cc
            ULONG AuxiliaryProcess:1;                                       //0x6cc
            ULONG SubsystemProcess:1;                                       //0x6cc
            ULONG IndirectCpuSets:1;                                        //0x6cc
            ULONG RelinquishedCommit:1;                                     //0x6cc
            ULONG HighGraphicsPriority:1;                                   //0x6cc
            ULONG CommitFailLogged:1;                                       //0x6cc
            ULONG ReserveFailLogged:1;                                      //0x6cc
            ULONG SystemProcess:1;                                          //0x6cc
            ULONG HideImageBaseAddresses:1;                                 //0x6cc
            ULONG AddressPolicyFrozen:1;                                    //0x6cc
            ULONG ProcessFirstResume:1;                                     //0x6cc
            ULONG ForegroundExternal:1;                                     //0x6cc
            ULONG ForegroundSystem:1;                                       //0x6cc
            ULONG HighMemoryPriority:1;                                     //0x6cc
            ULONG EnableProcessSuspendResumeLogging:1;                      //0x6cc
            ULONG EnableThreadSuspendResumeLogging:1;                       //0x6cc
            ULONG SecurityDomainChanged:1;                                  //0x6cc
            ULONG SecurityFreezeComplete:1;                                 //0x6cc
            ULONG VmProcessorHost:1;                                        //0x6cc
        };
    };
    LONG DeviceAsid;                                                        //0x6d0
    VOID* SvmData;                                                          //0x6d8
    struct _EX_PUSH_LOCK SvmProcessLock;                                    //0x6e0
    ULONGLONG SvmLock;                                                      //0x6e8
    struct _LIST_ENTRY SvmProcessDeviceListHead;                            //0x6f0
    ULONGLONG LastFreezeInterruptTime;                                      //0x700
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x708
    VOID* PicoContext;                                                      //0x710
    VOID* EnclaveTable;                                                     //0x718
    ULONGLONG EnclaveNumber;                                                //0x720
    struct _EX_PUSH_LOCK EnclaveLock;                                       //0x728
    ULONG HighPriorityFaultsAllowed;                                        //0x730
    struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;                       //0x738
    VOID* VmContext;                                                        //0x740
    ULONGLONG SequenceNumber;                                               //0x748
    ULONGLONG CreateInterruptTime;                                          //0x750
    ULONGLONG CreateUnbiasedInterruptTime;                                  //0x758
    ULONGLONG TotalUnbiasedFrozenTime;                                      //0x760
    ULONGLONG LastAppStateUpdateTime;                                       //0x768
    ULONGLONG LastAppStateUptime:61;                                        //0x770
    ULONGLONG LastAppState:3;                                               //0x770
    volatile ULONGLONG SharedCommitCharge;                                  //0x778
    struct _EX_PUSH_LOCK SharedCommitLock;                                  //0x780
    struct _LIST_ENTRY SharedCommitLinks;                                   //0x788
    union
    {
        struct
        {
            ULONGLONG AllowedCpuSets;                                       //0x798
            ULONGLONG DefaultCpuSets;                                       //0x7a0
        };
        struct
        {
            ULONGLONG* AllowedCpuSetsIndirect;                              //0x798
            ULONGLONG* DefaultCpuSetsIndirect;                              //0x7a0
        };
    };
    VOID* DiskIoAttribution;                                                //0x7a8
    VOID* DxgProcess;                                                       //0x7b0
    ULONG Win32KFilterSet;                                                  //0x7b8
    unionvolatile _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;     //0x7c0
    volatile ULONG KTimerSets;                                              //0x7c8
    volatile ULONG KTimer2Sets;                                             //0x7cc
    volatile ULONG ThreadTimerSets;                                         //0x7d0
    ULONGLONG VirtualTimerListLock;                                         //0x7d8
    struct _LIST_ENTRY VirtualTimerListHead;                                //0x7e0
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x7f0
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;                       //0x7f0
    };
    union
    {
        ULONG MitigationFlags;                                              //0x820
        struct
        {
            ULONG ControlFlowGuardEnabled:1;                                //0x820
            ULONG ControlFlowGuardExportSuppressionEnabled:1;               //0x820
            ULONG ControlFlowGuardStrict:1;                                 //0x820
            ULONG DisallowStrippedImages:1;                                 //0x820
            ULONG ForceRelocateImages:1;                                    //0x820
            ULONG HighEntropyASLREnabled:1;                                 //0x820
            ULONG StackRandomizationDisabled:1;                             //0x820
            ULONG ExtensionPointDisable:1;                                  //0x820
            ULONG DisableDynamicCode:1;                                     //0x820
            ULONG DisableDynamicCodeAllowOptOut:1;                          //0x820
            ULONG DisableDynamicCodeAllowRemoteDowngrade:1;                 //0x820
            ULONG AuditDisableDynamicCode:1;                                //0x820
            ULONG DisallowWin32kSystemCalls:1;                              //0x820
            ULONG AuditDisallowWin32kSystemCalls:1;                         //0x820
            ULONG EnableFilteredWin32kAPIs:1;                               //0x820
            ULONG AuditFilteredWin32kAPIs:1;                                //0x820
            ULONG DisableNonSystemFonts:1;                                  //0x820
            ULONG AuditNonSystemFontLoading:1;                              //0x820
            ULONG PreferSystem32Images:1;                                   //0x820
            ULONG ProhibitRemoteImageMap:1;                                 //0x820
            ULONG AuditProhibitRemoteImageMap:1;                            //0x820
            ULONG ProhibitLowILImageMap:1;                                  //0x820
            ULONG AuditProhibitLowILImageMap:1;                             //0x820
            ULONG SignatureMitigationOptIn:1;                               //0x820
            ULONG AuditBlockNonMicrosoftBinaries:1;                         //0x820
            ULONG AuditBlockNonMicrosoftBinariesAllowStore:1;               //0x820
            ULONG LoaderIntegrityContinuityEnabled:1;                       //0x820
            ULONG AuditLoaderIntegrityContinuity:1;                         //0x820
            ULONG EnableModuleTamperingProtection:1;                        //0x820
            ULONG EnableModuleTamperingProtectionNoInherit:1;               //0x820
            ULONG RestrictIndirectBranchPrediction:1;                       //0x820
            ULONG IsolateSecurityDomain:1;                                  //0x820
        } MitigationFlagsValues;                                            //0x820
    };
    union
    {
        ULONG MitigationFlags2;                                             //0x824
        struct
        {
            ULONG EnableExportAddressFilter:1;                              //0x824
            ULONG AuditExportAddressFilter:1;                               //0x824
            ULONG EnableExportAddressFilterPlus:1;                          //0x824
            ULONG AuditExportAddressFilterPlus:1;                           //0x824
            ULONG EnableRopStackPivot:1;                                    //0x824
            ULONG AuditRopStackPivot:1;                                     //0x824
            ULONG EnableRopCallerCheck:1;                                   //0x824
            ULONG AuditRopCallerCheck:1;                                    //0x824
            ULONG EnableRopSimExec:1;                                       //0x824
            ULONG AuditRopSimExec:1;                                        //0x824
            ULONG EnableImportAddressFilter:1;                              //0x824
            ULONG AuditImportAddressFilter:1;                               //0x824
            ULONG DisablePageCombine:1;                                     //0x824
            ULONG SpeculativeStoreBypassDisable:1;                          //0x824
            ULONG CetShadowStacks:1;                                        //0x824
        } MitigationFlags2Values;                                           //0x824
    };
    VOID* PartitionObject;                                                  //0x828
    ULONGLONG SecurityDomain;                                               //0x830
    ULONGLONG ParentSecurityDomain;                                         //0x838
    VOID* CoverageSamplerContext;                                           //0x840
    VOID* MmHotPatchContext;                                                //0x848
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
// _POOL_HEADER
// _POP_SHUTDOWN_BUG_CHECK
// _RH_OP_CONTEXT
// _WORK_QUEUE_ENTRY

