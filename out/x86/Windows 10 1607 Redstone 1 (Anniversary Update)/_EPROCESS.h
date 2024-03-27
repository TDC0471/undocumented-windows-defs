#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
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
#include <_PROCESS_ENERGY_VALUES.h>

//0x388 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0xa8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xac
    VOID* VdmObjects;                                                       //0xb0
    VOID* UniqueProcessId;                                                  //0xb4
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xb8
    union
    {
        ULONG Flags2;                                                       //0xc0
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0xc0
            ULONG AccountingFolded:1;                                       //0xc0
            ULONG NewProcessReported:1;                                     //0xc0
            ULONG ExitProcessReported:1;                                    //0xc0
            ULONG ReportCommitChanges:1;                                    //0xc0
            ULONG LastReportMemory:1;                                       //0xc0
            ULONG ForceWakeCharge:1;                                        //0xc0
            ULONG CrossSessionCreate:1;                                     //0xc0
            ULONG NeedsHandleRundown:1;                                     //0xc0
            ULONG RefTraceEnabled:1;                                        //0xc0
            ULONG DisableDynamicCode:1;                                     //0xc0
            ULONG EmptyJobEvaluated:1;                                      //0xc0
            ULONG DefaultPagePriority:3;                                    //0xc0
            ULONG PrimaryTokenFrozen:1;                                     //0xc0
            ULONG ProcessVerifierTarget:1;                                  //0xc0
            ULONG StackRandomizationDisabled:1;                             //0xc0
            ULONG AffinityPermanent:1;                                      //0xc0
            ULONG AffinityUpdateEnable:1;                                   //0xc0
            ULONG PropagateNode:1;                                          //0xc0
            ULONG ExplicitAffinity:1;                                       //0xc0
            ULONG ProcessExecutionState:2;                                  //0xc0
            ULONG DisallowStrippedImages:1;                                 //0xc0
            ULONG HighEntropyASLREnabled:1;                                 //0xc0
            ULONG ExtensionPointDisable:1;                                  //0xc0
            ULONG ForceRelocateImages:1;                                    //0xc0
            ULONG ProcessStateChangeRequest:2;                              //0xc0
            ULONG ProcessStateChangeInProgress:1;                           //0xc0
            ULONG DisallowWin32kSystemCalls:1;                              //0xc0
        };
    };
    union
    {
        ULONG Flags;                                                        //0xc4
        struct
        {
            ULONG CreateReported:1;                                         //0xc4
            ULONG NoDebugInherit:1;                                         //0xc4
            ULONG ProcessExiting:1;                                         //0xc4
            ULONG ProcessDelete:1;                                          //0xc4
            ULONG ControlFlowGuardEnabled:1;                                //0xc4
            ULONG VmDeleted:1;                                              //0xc4
            ULONG OutswapEnabled:1;                                         //0xc4
            ULONG Outswapped:1;                                             //0xc4
            ULONG FailFastOnCommitFail:1;                                   //0xc4
            ULONG Wow64VaSpace4Gb:1;                                        //0xc4
            ULONG AddressSpaceInitialized:2;                                //0xc4
            ULONG SetTimerResolution:1;                                     //0xc4
            ULONG BreakOnTermination:1;                                     //0xc4
            ULONG DeprioritizeViews:1;                                      //0xc4
            ULONG WriteWatch:1;                                             //0xc4
            ULONG ProcessInSession:1;                                       //0xc4
            ULONG OverrideAddressSpace:1;                                   //0xc4
            ULONG HasAddressSpace:1;                                        //0xc4
            ULONG LaunchPrefetched:1;                                       //0xc4
            ULONG Background:1;                                             //0xc4
            ULONG VmTopDown:1;                                              //0xc4
            ULONG ImageNotifyDone:1;                                        //0xc4
            ULONG PdeUpdateNeeded:1;                                        //0xc4
            ULONG VdmAllowed:1;                                             //0xc4
            ULONG ProcessRundown:1;                                         //0xc4
            ULONG ProcessInserted:1;                                        //0xc4
            ULONG DefaultIoPriority:3;                                      //0xc4
            ULONG ProcessSelfDelete:1;                                      //0xc4
            ULONG SetTimerResolutionLink:1;                                 //0xc4
        };
    };
    union _LARGE_INTEGER CreateTime;                                        //0xc8
    ULONG ProcessQuotaUsage[2];                                             //0xd0
    ULONG ProcessQuotaPeak[2];                                              //0xd8
    ULONG PeakVirtualSize;                                                  //0xe0
    ULONG VirtualSize;                                                      //0xe4
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xe8
    union
    {
        VOID* ExceptionPortData;                                            //0xf0
        ULONG ExceptionPortValue;                                           //0xf0
        ULONG ExceptionPortState:3;                                         //0xf0
    };
    struct _EX_FAST_REF Token;                                              //0xf4
    ULONG WorkingSetPage;                                                   //0xf8
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0xfc
    struct _EX_PUSH_LOCK PageTableCommitmentLock;                           //0x100
    struct _ETHREAD* RotateInProgress;                                      //0x104
    struct _ETHREAD* ForkInProgress;                                        //0x108
    struct _EJOB* volatile CommitChargeJob;                                 //0x10c
    struct _RTL_AVL_TREE CloneRoot;                                         //0x110
    volatile ULONG NumberOfPrivatePages;                                    //0x114
    volatile ULONG NumberOfLockedPages;                                     //0x118
    VOID* Win32Process;                                                     //0x11c
    struct _EJOB* volatile Job;                                             //0x120
    VOID* SectionObject;                                                    //0x124
    VOID* SectionBaseAddress;                                               //0x128
    ULONG Cookie;                                                           //0x12c
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x130
    VOID* Win32WindowStation;                                               //0x134
    VOID* InheritedFromUniqueProcessId;                                     //0x138
    VOID* LdtInformation;                                                   //0x13c
    volatile ULONG OwnerProcessId;                                          //0x140
    struct _PEB* Peb;                                                       //0x144
    struct _MM_SESSION_SPACE* Session;                                      //0x148
    VOID* AweInfo;                                                          //0x14c
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x150
    struct _HANDLE_TABLE* ObjectTable;                                      //0x154
    VOID* DebugPort;                                                        //0x158
    VOID* PaeTop;                                                           //0x15c
    VOID* DeviceMap;                                                        //0x160
    VOID* EtwDataSource;                                                    //0x164
    ULONGLONG PageDirectoryPte;                                             //0x168
    struct _FILE_OBJECT* ImageFilePointer;                                  //0x170
    UCHAR ImageFileName[15];                                                //0x174
    UCHAR PriorityClass;                                                    //0x183
    VOID* SecurityPort;                                                     //0x184
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x188
    struct _LIST_ENTRY JobLinks;                                            //0x18c
    VOID* HighestUserAddress;                                               //0x194
    struct _LIST_ENTRY ThreadListHead;                                      //0x198
    volatile ULONG ActiveThreads;                                           //0x1a0
    ULONG ImagePathHash;                                                    //0x1a4
    ULONG DefaultHardErrorProcessing;                                       //0x1a8
    LONG LastThreadExitStatus;                                              //0x1ac
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1b0
    VOID* LockedPagesList;                                                  //0x1b4
    union _LARGE_INTEGER ReadOperationCount;                                //0x1b8
    union _LARGE_INTEGER WriteOperationCount;                               //0x1c0
    union _LARGE_INTEGER OtherOperationCount;                               //0x1c8
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1d0
    union _LARGE_INTEGER WriteTransferCount;                                //0x1d8
    union _LARGE_INTEGER OtherTransferCount;                                //0x1e0
    ULONG CommitChargeLimit;                                                //0x1e8
    volatile ULONG CommitCharge;                                            //0x1ec
    volatile ULONG CommitChargePeak;                                        //0x1f0
    struct _MMSUPPORT_FULL Vm;                                              //0x1f4
    struct _LIST_ENTRY MmProcessLinks;                                      //0x27c
    ULONG ModifiedPageCount;                                                //0x284
    LONG ExitStatus;                                                        //0x288
    struct _RTL_AVL_TREE VadRoot;                                           //0x28c
    VOID* VadHint;                                                          //0x290
    ULONG VadCount;                                                         //0x294
    volatile ULONG VadPhysicalPages;                                        //0x298
    ULONG VadPhysicalPagesLimit;                                            //0x29c
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x2a0
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x2b0
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x2b8
    ULONG RequestedTimerResolution;                                         //0x2bc
    ULONG SmallestTimerResolution;                                          //0x2c0
    union _LARGE_INTEGER ExitTime;                                          //0x2c8
    ULONG ActiveThreadsHighWatermark;                                       //0x2d0
    ULONG LargePrivateVadCount;                                             //0x2d4
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x2d8
    VOID* WnfContext;                                                       //0x2dc
    ULONG Spare0;                                                           //0x2e0
    UCHAR SignatureLevel;                                                   //0x2e4
    UCHAR SectionSignatureLevel;                                            //0x2e5
    struct _PS_PROTECTION Protection;                                       //0x2e6
    UCHAR HangCount;                                                        //0x2e7
    union
    {
        ULONG Flags3;                                                       //0x2e8
        struct
        {
            ULONG Minimal:1;                                                //0x2e8
            ULONG ReplacingPageRoot:1;                                      //0x2e8
            ULONG DisableNonSystemFonts:1;                                  //0x2e8
            ULONG AuditNonSystemFontLoading:1;                              //0x2e8
            ULONG Crashed:1;                                                //0x2e8
            ULONG JobVadsAreTracked:1;                                      //0x2e8
            ULONG VadTrackingDisabled:1;                                    //0x2e8
            ULONG AuxiliaryProcess:1;                                       //0x2e8
            ULONG SubsystemProcess:1;                                       //0x2e8
            ULONG IndirectCpuSets:1;                                        //0x2e8
            ULONG InPrivate:1;                                              //0x2e8
            ULONG ProhibitRemoteImageMap:1;                                 //0x2e8
            ULONG ProhibitLowILImageMap:1;                                  //0x2e8
            ULONG SignatureMitigationOptIn:1;                               //0x2e8
            ULONG DisableDynamicCodeAllowOptOut:1;                          //0x2e8
            ULONG EnableFilteredWin32kAPIs:1;                               //0x2e8
            ULONG AuditFilteredWin32kAPIs:1;                                //0x2e8
            ULONG PreferSystem32Images:1;                                   //0x2e8
            ULONG RelinquishedCommit:1;                                     //0x2e8
            ULONG AutomaticallyOverrideChildProcessPolicy:1;                //0x2e8
            ULONG HighGraphicsPriority:1;                                   //0x2e8
            ULONG CommitFailLogged:1;                                       //0x2e8
            ULONG ReserveFailLogged:1;                                      //0x2e8
        };
    };
    LONG DeviceAsid;                                                        //0x2ec
    VOID* SvmData;                                                          //0x2f0
    struct _EX_PUSH_LOCK SvmProcessLock;                                    //0x2f4
    ULONG SvmLock;                                                          //0x2f8
    struct _LIST_ENTRY SvmProcessDeviceListHead;                            //0x2fc
    ULONGLONG LastFreezeInterruptTime;                                      //0x308
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x310
    VOID* PicoContext;                                                      //0x314
    ULONG KeepAliveCounter;                                                 //0x318
    ULONG NoWakeKeepAliveCounter;                                           //0x31c
    ULONG HighPriorityFaultsAllowed;                                        //0x320
    VOID* InstrumentationCallback;                                          //0x324
    struct _PROCESS_ENERGY_VALUES* EnergyValues;                            //0x328
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
    ULONG ReadyTime;                                                        //0x37c
    VOID* DxgProcess;                                                       //0x380
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
// _SEGMENT
// _WORK_QUEUE_ENTRY

