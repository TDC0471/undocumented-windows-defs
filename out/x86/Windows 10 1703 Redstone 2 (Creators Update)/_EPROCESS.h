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

//0x3e0 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0xb0
    VOID* UniqueProcessId;                                                  //0xb4
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xb8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xc0
    VOID* VdmObjects;                                                       //0xc4
    union
    {
        ULONG Flags2;                                                       //0xc8
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0xc8
            ULONG AccountingFolded:1;                                       //0xc8
            ULONG NewProcessReported:1;                                     //0xc8
            ULONG ExitProcessReported:1;                                    //0xc8
            ULONG ReportCommitChanges:1;                                    //0xc8
            ULONG LastReportMemory:1;                                       //0xc8
            ULONG ForceWakeCharge:1;                                        //0xc8
            ULONG CrossSessionCreate:1;                                     //0xc8
            ULONG NeedsHandleRundown:1;                                     //0xc8
            ULONG RefTraceEnabled:1;                                        //0xc8
            ULONG DisableDynamicCode:1;                                     //0xc8
            ULONG EmptyJobEvaluated:1;                                      //0xc8
            ULONG DefaultPagePriority:3;                                    //0xc8
            ULONG PrimaryTokenFrozen:1;                                     //0xc8
            ULONG ProcessVerifierTarget:1;                                  //0xc8
            ULONG StackRandomizationDisabled:1;                             //0xc8
            ULONG AffinityPermanent:1;                                      //0xc8
            ULONG AffinityUpdateEnable:1;                                   //0xc8
            ULONG PropagateNode:1;                                          //0xc8
            ULONG ExplicitAffinity:1;                                       //0xc8
            ULONG ProcessExecutionState:2;                                  //0xc8
            ULONG DisallowStrippedImages:1;                                 //0xc8
            ULONG HighEntropyASLREnabled:1;                                 //0xc8
            ULONG ExtensionPointDisable:1;                                  //0xc8
            ULONG ForceRelocateImages:1;                                    //0xc8
            ULONG ProcessStateChangeRequest:2;                              //0xc8
            ULONG ProcessStateChangeInProgress:1;                           //0xc8
            ULONG DisallowWin32kSystemCalls:1;                              //0xc8
        };
    };
    union
    {
        ULONG Flags;                                                        //0xcc
        struct
        {
            ULONG CreateReported:1;                                         //0xcc
            ULONG NoDebugInherit:1;                                         //0xcc
            ULONG ProcessExiting:1;                                         //0xcc
            ULONG ProcessDelete:1;                                          //0xcc
            ULONG ControlFlowGuardEnabled:1;                                //0xcc
            ULONG VmDeleted:1;                                              //0xcc
            ULONG OutswapEnabled:1;                                         //0xcc
            ULONG Outswapped:1;                                             //0xcc
            ULONG FailFastOnCommitFail:1;                                   //0xcc
            ULONG Wow64VaSpace4Gb:1;                                        //0xcc
            ULONG AddressSpaceInitialized:2;                                //0xcc
            ULONG SetTimerResolution:1;                                     //0xcc
            ULONG BreakOnTermination:1;                                     //0xcc
            ULONG DeprioritizeViews:1;                                      //0xcc
            ULONG WriteWatch:1;                                             //0xcc
            ULONG ProcessInSession:1;                                       //0xcc
            ULONG OverrideAddressSpace:1;                                   //0xcc
            ULONG HasAddressSpace:1;                                        //0xcc
            ULONG LaunchPrefetched:1;                                       //0xcc
            ULONG Background:1;                                             //0xcc
            ULONG VmTopDown:1;                                              //0xcc
            ULONG ImageNotifyDone:1;                                        //0xcc
            ULONG PdeUpdateNeeded:1;                                        //0xcc
            ULONG VdmAllowed:1;                                             //0xcc
            ULONG ProcessRundown:1;                                         //0xcc
            ULONG ProcessInserted:1;                                        //0xcc
            ULONG DefaultIoPriority:3;                                      //0xcc
            ULONG ProcessSelfDelete:1;                                      //0xcc
            ULONG SetTimerResolutionLink:1;                                 //0xcc
        };
    };
    union _LARGE_INTEGER CreateTime;                                        //0xd0
    ULONG ProcessQuotaUsage[2];                                             //0xd8
    ULONG ProcessQuotaPeak[2];                                              //0xe0
    ULONG PeakVirtualSize;                                                  //0xe8
    ULONG VirtualSize;                                                      //0xec
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xf0
    union
    {
        VOID* ExceptionPortData;                                            //0xf8
        ULONG ExceptionPortValue;                                           //0xf8
        ULONG ExceptionPortState:3;                                         //0xf8
    };
    struct _EX_FAST_REF Token;                                              //0xfc
    ULONG MmReserved;                                                       //0x100
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x104
    struct _EX_PUSH_LOCK PageTableCommitmentLock;                           //0x108
    struct _ETHREAD* RotateInProgress;                                      //0x10c
    struct _ETHREAD* ForkInProgress;                                        //0x110
    struct _EJOB* volatile CommitChargeJob;                                 //0x114
    struct _RTL_AVL_TREE CloneRoot;                                         //0x118
    volatile ULONG NumberOfPrivatePages;                                    //0x11c
    volatile ULONG NumberOfLockedPages;                                     //0x120
    VOID* Win32Process;                                                     //0x124
    struct _EJOB* volatile Job;                                             //0x128
    VOID* SectionObject;                                                    //0x12c
    VOID* SectionBaseAddress;                                               //0x130
    ULONG Cookie;                                                           //0x134
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x138
    VOID* Win32WindowStation;                                               //0x13c
    VOID* InheritedFromUniqueProcessId;                                     //0x140
    VOID* LdtInformation;                                                   //0x144
    volatile ULONG OwnerProcessId;                                          //0x148
    struct _PEB* Peb;                                                       //0x14c
    struct _MM_SESSION_SPACE* Session;                                      //0x150
    VOID* AweInfo;                                                          //0x154
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x158
    struct _HANDLE_TABLE* ObjectTable;                                      //0x15c
    VOID* DebugPort;                                                        //0x160
    VOID* PaeTop;                                                           //0x164
    VOID* DeviceMap;                                                        //0x168
    VOID* EtwDataSource;                                                    //0x16c
    ULONGLONG PageDirectoryPte;                                             //0x170
    struct _FILE_OBJECT* ImageFilePointer;                                  //0x178
    UCHAR ImageFileName[15];                                                //0x17c
    UCHAR PriorityClass;                                                    //0x18b
    VOID* SecurityPort;                                                     //0x18c
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x190
    struct _LIST_ENTRY JobLinks;                                            //0x194
    VOID* HighestUserAddress;                                               //0x19c
    struct _LIST_ENTRY ThreadListHead;                                      //0x1a0
    volatile ULONG ActiveThreads;                                           //0x1a8
    ULONG ImagePathHash;                                                    //0x1ac
    ULONG DefaultHardErrorProcessing;                                       //0x1b0
    LONG LastThreadExitStatus;                                              //0x1b4
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1b8
    VOID* LockedPagesList;                                                  //0x1bc
    union _LARGE_INTEGER ReadOperationCount;                                //0x1c0
    union _LARGE_INTEGER WriteOperationCount;                               //0x1c8
    union _LARGE_INTEGER OtherOperationCount;                               //0x1d0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1d8
    union _LARGE_INTEGER WriteTransferCount;                                //0x1e0
    union _LARGE_INTEGER OtherTransferCount;                                //0x1e8
    ULONG CommitChargeLimit;                                                //0x1f0
    volatile ULONG CommitCharge;                                            //0x1f4
    volatile ULONG CommitChargePeak;                                        //0x1f8
    struct _MMSUPPORT_FULL Vm;                                              //0x1fc
    struct _LIST_ENTRY MmProcessLinks;                                      //0x288
    ULONG ModifiedPageCount;                                                //0x290
    LONG ExitStatus;                                                        //0x294
    struct _RTL_AVL_TREE VadRoot;                                           //0x298
    VOID* VadHint;                                                          //0x29c
    ULONG VadCount;                                                         //0x2a0
    volatile ULONG VadPhysicalPages;                                        //0x2a4
    ULONG VadPhysicalPagesLimit;                                            //0x2a8
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x2ac
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x2bc
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x2c4
    ULONG RequestedTimerResolution;                                         //0x2c8
    ULONG SmallestTimerResolution;                                          //0x2cc
    union _LARGE_INTEGER ExitTime;                                          //0x2d0
    ULONG ActiveThreadsHighWatermark;                                       //0x2d8
    ULONG LargePrivateVadCount;                                             //0x2dc
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x2e0
    VOID* WnfContext;                                                       //0x2e4
    struct _EJOB* ServerSilo;                                               //0x2e8
    UCHAR SignatureLevel;                                                   //0x2ec
    UCHAR SectionSignatureLevel;                                            //0x2ed
    struct _PS_PROTECTION Protection;                                       //0x2ee
    UCHAR HangCount;                                                        //0x2ef
    union
    {
        ULONG Flags3;                                                       //0x2f0
        struct
        {
            ULONG Minimal:1;                                                //0x2f0
            ULONG ReplacingPageRoot:1;                                      //0x2f0
            ULONG DisableNonSystemFonts:1;                                  //0x2f0
            ULONG AuditNonSystemFontLoading:1;                              //0x2f0
            ULONG Crashed:1;                                                //0x2f0
            ULONG JobVadsAreTracked:1;                                      //0x2f0
            ULONG VadTrackingDisabled:1;                                    //0x2f0
            ULONG AuxiliaryProcess:1;                                       //0x2f0
            ULONG SubsystemProcess:1;                                       //0x2f0
            ULONG IndirectCpuSets:1;                                        //0x2f0
            ULONG InPrivate:1;                                              //0x2f0
            ULONG ProhibitRemoteImageMap:1;                                 //0x2f0
            ULONG ProhibitLowILImageMap:1;                                  //0x2f0
            ULONG SignatureMitigationOptIn:1;                               //0x2f0
            ULONG DisableDynamicCodeAllowOptOut:1;                          //0x2f0
            ULONG EnableFilteredWin32kAPIs:1;                               //0x2f0
            ULONG AuditFilteredWin32kAPIs:1;                                //0x2f0
            ULONG PreferSystem32Images:1;                                   //0x2f0
            ULONG RelinquishedCommit:1;                                     //0x2f0
            ULONG AutomaticallyOverrideChildProcessPolicy:1;                //0x2f0
            ULONG HighGraphicsPriority:1;                                   //0x2f0
            ULONG CommitFailLogged:1;                                       //0x2f0
            ULONG ReserveFailLogged:1;                                      //0x2f0
            ULONG DisableDynamicCodeAllowRemoteDowngrade:1;                 //0x2f0
            ULONG LoaderIntegrityContinuityEnabled:1;                       //0x2f0
            ULONG LoaderIntegrityContinuityAudit:1;                         //0x2f0
            ULONG ControlFlowGuardExportSuppressionEnabled:1;               //0x2f0
            ULONG FatalAccessTerminationRequested:1;                        //0x2f0
            ULONG DisableSystemAllowedCpuSet:1;                             //0x2f0
            ULONG ControlFlowGuardStrict:1;                                 //0x2f0
        };
    };
    LONG DeviceAsid;                                                        //0x2f4
    VOID* SvmData;                                                          //0x2f8
    struct _EX_PUSH_LOCK SvmProcessLock;                                    //0x2fc
    ULONG SvmLock;                                                          //0x300
    struct _LIST_ENTRY SvmProcessDeviceListHead;                            //0x304
    ULONGLONG LastFreezeInterruptTime;                                      //0x310
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x318
    VOID* PicoContext;                                                      //0x31c
    ULONG HighPriorityFaultsAllowed;                                        //0x320
    VOID* InstrumentationCallback;                                          //0x324
    struct _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;                       //0x328
    VOID* VmContext;                                                        //0x32c
    ULONGLONG SequenceNumber;                                               //0x330
    ULONGLONG CreateInterruptTime;                                          //0x338
    ULONGLONG CreateUnbiasedInterruptTime;                                  //0x340
    ULONGLONG TotalUnbiasedFrozenTime;                                      //0x348
    ULONGLONG LastAppStateUpdateTime;                                       //0x350
    ULONGLONG LastAppStateUptime:61;                                        //0x358
    ULONGLONG LastAppState:3;                                               //0x358
    volatile ULONG SharedCommitCharge;                                      //0x360
    struct _EX_PUSH_LOCK SharedCommitLock;                                  //0x364
    struct _LIST_ENTRY SharedCommitLinks;                                   //0x368
    union
    {
        struct
        {
            ULONG AllowedCpuSets;                                           //0x370
            ULONG DefaultCpuSets;                                           //0x374
        };
        struct
        {
            ULONG* AllowedCpuSetsIndirect;                                  //0x370
            ULONG* DefaultCpuSetsIndirect;                                  //0x374
        };
    };
    VOID* DiskIoAttribution;                                                //0x378
    VOID* DxgProcess;                                                       //0x37c
    ULONG Win32KFilterSet;                                                  //0x380
    unionvolatile _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;     //0x388
    volatile ULONG KTimerSets;                                              //0x390
    volatile ULONG KTimer2Sets;                                             //0x394
    volatile ULONG ThreadTimerSets;                                         //0x398
    ULONG VirtualTimerListLock;                                             //0x39c
    struct _LIST_ENTRY VirtualTimerListHead;                                //0x3a0
    union
    {
        struct _WNF_STATE_NAME WakeChannel;                                 //0x3a8
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;                       //0x3a8
    };
    union
    {
        ULONG Flags4;                                                       //0x3d8
        struct
        {
            ULONG PicoCreated:1;                                            //0x3d8
            ULONG RestrictSetThreadContext:1;                               //0x3d8
        };
    };
};
/* Used in */
// _ALPC_COMPLETION_LIST
// _ALPC_PORT
// _DIAGNOSTIC_CONTEXT
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
// _WORK_QUEUE_ENTRY

