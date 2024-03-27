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
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_HANDLE_TABLE.h>
#include <_FILE_OBJECT.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>
#include <_ALPC_PROCESS_CONTEXT.h>
#include <_PO_DIAG_STACK_RECORD.h>
#include <_PS_PROTECTION.h>
#include <_PROCESS_DISK_COUNTERS.h>
#include <_PROCESS_ENERGY_VALUES.h>

//0x370 bytes (sizeof)
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
    VOID* Session;                                                          //0x148
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
    struct _MMSUPPORT Vm;                                                   //0x1f4
    struct _LIST_ENTRY MmProcessLinks;                                      //0x274
    ULONG ModifiedPageCount;                                                //0x27c
    LONG ExitStatus;                                                        //0x280
    struct _RTL_AVL_TREE VadRoot;                                           //0x284
    VOID* VadHint;                                                          //0x288
    ULONG VadCount;                                                         //0x28c
    volatile ULONG VadPhysicalPages;                                        //0x290
    ULONG VadPhysicalPagesLimit;                                            //0x294
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x298
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x2a8
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x2b0
    ULONG RequestedTimerResolution;                                         //0x2b4
    ULONG SmallestTimerResolution;                                          //0x2b8
    union _LARGE_INTEGER ExitTime;                                          //0x2c0
    ULONG ActiveThreadsHighWatermark;                                       //0x2c8
    ULONG LargePrivateVadCount;                                             //0x2cc
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x2d0
    VOID* WnfContext;                                                       //0x2d4
    ULONG Spare0;                                                           //0x2d8
    UCHAR SignatureLevel;                                                   //0x2dc
    UCHAR SectionSignatureLevel;                                            //0x2dd
    struct _PS_PROTECTION Protection;                                       //0x2de
    UCHAR HangCount;                                                        //0x2df
    union
    {
        ULONG Flags3;                                                       //0x2e0
        struct
        {
            ULONG Minimal:1;                                                //0x2e0
            ULONG ReplacingPageRoot:1;                                      //0x2e0
            ULONG DisableNonSystemFonts:1;                                  //0x2e0
            ULONG AuditNonSystemFontLoading:1;                              //0x2e0
            ULONG Crashed:1;                                                //0x2e0
            ULONG JobVadsAreTracked:1;                                      //0x2e0
            ULONG VadTrackingDisabled:1;                                    //0x2e0
            ULONG AuxiliaryProcess:1;                                       //0x2e0
            ULONG SubsystemProcess:1;                                       //0x2e0
            ULONG IndirectCpuSets:1;                                        //0x2e0
            ULONG InPrivate:1;                                              //0x2e0
            ULONG ProhibitRemoteImageMap:1;                                 //0x2e0
            ULONG ProhibitLowILImageMap:1;                                  //0x2e0
            ULONG SignatureMitigationOptIn:1;                               //0x2e0
        };
    };
    LONG DeviceAsid;                                                        //0x2e4
    VOID* SvmData;                                                          //0x2e8
    struct _EX_PUSH_LOCK SvmProcessLock;                                    //0x2ec
    ULONG SvmLock;                                                          //0x2f0
    struct _LIST_ENTRY SvmProcessDeviceListHead;                            //0x2f4
    ULONGLONG LastFreezeInterruptTime;                                      //0x300
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x308
    VOID* PicoContext;                                                      //0x30c
    ULONG KeepAliveCounter;                                                 //0x310
    ULONG NoWakeKeepAliveCounter;                                           //0x314
    ULONG HighPriorityFaultsAllowed;                                        //0x318
    VOID* InstrumentationCallback;                                          //0x31c
    struct _PROCESS_ENERGY_VALUES* EnergyValues;                            //0x320
    VOID* VmContext;                                                        //0x324
    ULONGLONG SequenceNumber;                                               //0x328
    ULONGLONG CreateInterruptTime;                                          //0x330
    ULONGLONG CreateUnbiasedInterruptTime;                                  //0x338
    ULONGLONG TotalUnbiasedFrozenTime;                                      //0x340
    ULONGLONG LastAppStateUpdateTime;                                       //0x348
    ULONGLONG LastAppStateUptime:61;                                        //0x350
    ULONGLONG LastAppState:3;                                               //0x350
    volatile ULONG SharedCommitCharge;                                      //0x358
    struct _EX_PUSH_LOCK SharedCommitLock;                                  //0x35c
    struct _LIST_ENTRY SharedCommitLinks;                                   //0x360
    union
    {
        struct
        {
            ULONG AllowedCpuSets;                                           //0x368
            ULONG DefaultCpuSets;                                           //0x36c
        };
        struct
        {
            ULONG* AllowedCpuSetsIndirect;                                  //0x368
            ULONG* DefaultCpuSetsIndirect;                                  //0x36c
        };
    };
};
/* Used in */
// _ALPC_COMPLETION_LIST
// _ALPC_PORT
// _DIAGNOSTIC_CONTEXT
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

