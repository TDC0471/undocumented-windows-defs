#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_EX_FAST_REF.h>
#include <_ETHREAD.h>
#include <_EJOB.h>
#include <_RTL_AVL_TREE.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_PEB.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_HANDLE_TABLE.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>
#include <_ALPC_PROCESS_CONTEXT.h>
#include <_PO_DIAG_STACK_RECORD.h>
#include <_INVERTED_FUNCTION_TABLE.h>
#include <_PS_PROTECTION.h>
#include <_PROCESS_DISK_COUNTERS.h>

//0x6d8 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x2c8
    union _LARGE_INTEGER CreateTime;                                        //0x2d0
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x2d8
    VOID* UniqueProcessId;                                                  //0x2e0
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0x2e8
    union
    {
        ULONG Flags2;                                                       //0x2f8
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x2f8
            ULONG AccountingFolded:1;                                       //0x2f8
            ULONG NewProcessReported:1;                                     //0x2f8
            ULONG ExitProcessReported:1;                                    //0x2f8
            ULONG ReportCommitChanges:1;                                    //0x2f8
            ULONG LastReportMemory:1;                                       //0x2f8
            ULONG ForceWakeCharge:1;                                        //0x2f8
            ULONG CrossSessionCreate:1;                                     //0x2f8
            ULONG NeedsHandleRundown:1;                                     //0x2f8
            ULONG RefTraceEnabled:1;                                        //0x2f8
            ULONG DisableDynamicCode:1;                                     //0x2f8
            ULONG EmptyJobEvaluated:1;                                      //0x2f8
            ULONG DefaultPagePriority:3;                                    //0x2f8
            ULONG PrimaryTokenFrozen:1;                                     //0x2f8
            ULONG ProcessVerifierTarget:1;                                  //0x2f8
            ULONG StackRandomizationDisabled:1;                             //0x2f8
            ULONG AffinityPermanent:1;                                      //0x2f8
            ULONG AffinityUpdateEnable:1;                                   //0x2f8
            ULONG PropagateNode:1;                                          //0x2f8
            ULONG ExplicitAffinity:1;                                       //0x2f8
            ULONG ProcessExecutionState:2;                                  //0x2f8
            ULONG DisallowStrippedImages:1;                                 //0x2f8
            ULONG HighEntropyASLREnabled:1;                                 //0x2f8
            ULONG ExtensionPointDisable:1;                                  //0x2f8
            ULONG ForceRelocateImages:1;                                    //0x2f8
            ULONG ProcessStateChangeRequest:2;                              //0x2f8
            ULONG ProcessStateChangeInProgress:1;                           //0x2f8
            ULONG DisallowWin32kSystemCalls:1;                              //0x2f8
        };
    };
    union
    {
        ULONG Flags;                                                        //0x2fc
        struct
        {
            ULONG CreateReported:1;                                         //0x2fc
            ULONG NoDebugInherit:1;                                         //0x2fc
            ULONG ProcessExiting:1;                                         //0x2fc
            ULONG ProcessDelete:1;                                          //0x2fc
            ULONG ControlFlowGuardEnabled:1;                                //0x2fc
            ULONG VmDeleted:1;                                              //0x2fc
            ULONG OutswapEnabled:1;                                         //0x2fc
            ULONG Outswapped:1;                                             //0x2fc
            ULONG ForkFailed:1;                                             //0x2fc
            ULONG Wow64VaSpace4Gb:1;                                        //0x2fc
            ULONG AddressSpaceInitialized:2;                                //0x2fc
            ULONG SetTimerResolution:1;                                     //0x2fc
            ULONG BreakOnTermination:1;                                     //0x2fc
            ULONG DeprioritizeViews:1;                                      //0x2fc
            ULONG WriteWatch:1;                                             //0x2fc
            ULONG ProcessInSession:1;                                       //0x2fc
            ULONG OverrideAddressSpace:1;                                   //0x2fc
            ULONG HasAddressSpace:1;                                        //0x2fc
            ULONG LaunchPrefetched:1;                                       //0x2fc
            ULONG Background:1;                                             //0x2fc
            ULONG VmTopDown:1;                                              //0x2fc
            ULONG ImageNotifyDone:1;                                        //0x2fc
            ULONG PdeUpdateNeeded:1;                                        //0x2fc
            ULONG VdmAllowed:1;                                             //0x2fc
            ULONG ProcessRundown:1;                                         //0x2fc
            ULONG ProcessInserted:1;                                        //0x2fc
            ULONG DefaultIoPriority:3;                                      //0x2fc
            ULONG ProcessSelfDelete:1;                                      //0x2fc
            ULONG SetTimerResolutionLink:1;                                 //0x2fc
        };
    };
    ULONGLONG ProcessQuotaUsage[2];                                         //0x300
    ULONGLONG ProcessQuotaPeak[2];                                          //0x310
    ULONGLONG PeakVirtualSize;                                              //0x320
    ULONGLONG VirtualSize;                                                  //0x328
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x330
    union
    {
        VOID* ExceptionPortData;                                            //0x340
        ULONGLONG ExceptionPortValue;                                       //0x340
        ULONGLONG ExceptionPortState:3;                                     //0x340
    };
    struct _EX_FAST_REF Token;                                              //0x348
    ULONGLONG WorkingSetPage;                                               //0x350
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x358
    struct _EX_PUSH_LOCK PageTableCommitmentLock;                           //0x360
    struct _ETHREAD* RotateInProgress;                                      //0x368
    struct _ETHREAD* ForkInProgress;                                        //0x370
    struct _EJOB* volatile CommitChargeJob;                                 //0x378
    struct _RTL_AVL_TREE CloneRoot;                                         //0x380
    volatile ULONGLONG NumberOfPrivatePages;                                //0x388
    volatile ULONGLONG NumberOfLockedPages;                                 //0x390
    VOID* Win32Process;                                                     //0x398
    struct _EJOB* volatile Job;                                             //0x3a0
    VOID* SectionObject;                                                    //0x3a8
    VOID* SectionBaseAddress;                                               //0x3b0
    ULONG Cookie;                                                           //0x3b8
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x3c0
    VOID* Win32WindowStation;                                               //0x3c8
    VOID* InheritedFromUniqueProcessId;                                     //0x3d0
    VOID* LdtInformation;                                                   //0x3d8
    volatile ULONGLONG OwnerProcessId;                                      //0x3e0
    struct _PEB* Peb;                                                       //0x3e8
    VOID* Session;                                                          //0x3f0
    VOID* AweInfo;                                                          //0x3f8
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x400
    struct _HANDLE_TABLE* ObjectTable;                                      //0x408
    VOID* DebugPort;                                                        //0x410
    VOID* Wow64Process;                                                     //0x418
    VOID* DeviceMap;                                                        //0x420
    VOID* EtwDataSource;                                                    //0x428
    ULONGLONG PageDirectoryPte;                                             //0x430
    UCHAR ImageFileName[15];                                                //0x438
    UCHAR PriorityClass;                                                    //0x447
    VOID* SecurityPort;                                                     //0x448
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x450
    struct _LIST_ENTRY JobLinks;                                            //0x458
    VOID* HighestUserAddress;                                               //0x468
    struct _LIST_ENTRY ThreadListHead;                                      //0x470
    volatile ULONG ActiveThreads;                                           //0x480
    ULONG ImagePathHash;                                                    //0x484
    ULONG DefaultHardErrorProcessing;                                       //0x488
    LONG LastThreadExitStatus;                                              //0x48c
    struct _EX_FAST_REF PrefetchTrace;                                      //0x490
    VOID* LockedPagesList;                                                  //0x498
    union _LARGE_INTEGER ReadOperationCount;                                //0x4a0
    union _LARGE_INTEGER WriteOperationCount;                               //0x4a8
    union _LARGE_INTEGER OtherOperationCount;                               //0x4b0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x4b8
    union _LARGE_INTEGER WriteTransferCount;                                //0x4c0
    union _LARGE_INTEGER OtherTransferCount;                                //0x4c8
    volatile ULONGLONG CommitCharge;                                        //0x4d0
    struct _MMSUPPORT Vm;                                                   //0x4d8
    struct _LIST_ENTRY MmProcessLinks;                                      //0x5c0
    ULONG ModifiedPageCount;                                                //0x5d0
    LONG ExitStatus;                                                        //0x5d4
    struct _RTL_AVL_TREE VadRoot;                                           //0x5d8
    VOID* VadHint;                                                          //0x5e0
    ULONGLONG VadCount;                                                     //0x5e8
    volatile ULONGLONG VadPhysicalPages;                                    //0x5f0
    ULONGLONG VadPhysicalPagesLimit;                                        //0x5f8
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x600
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x620
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x630
    ULONG RequestedTimerResolution;                                         //0x638
    ULONG SmallestTimerResolution;                                          //0x63c
    union _LARGE_INTEGER ExitTime;                                          //0x640
    struct _INVERTED_FUNCTION_TABLE* InvertedFunctionTable;                 //0x648
    struct _EX_PUSH_LOCK InvertedFunctionTableLock;                         //0x650
    ULONG ActiveThreadsHighWatermark;                                       //0x658
    ULONG LargePrivateVadCount;                                             //0x65c
    struct _EX_PUSH_LOCK ThreadListLock;                                    //0x660
    VOID* WnfContext;                                                       //0x668
    ULONGLONG Spare0;                                                       //0x670
    UCHAR SignatureLevel;                                                   //0x678
    UCHAR SectionSignatureLevel;                                            //0x679
    struct _PS_PROTECTION Protection;                                       //0x67a
    UCHAR SpareByte20[1];                                                   //0x67b
    union
    {
        ULONG Flags3;                                                       //0x67c
        ULONG Minimal:1;                                                    //0x67c
    };
    LONG SvmReserved;                                                       //0x680
    VOID* SvmReserved1;                                                     //0x688
    ULONGLONG SvmReserved2;                                                 //0x690
    ULONGLONG LastFreezeInterruptTime;                                      //0x698
    struct _PROCESS_DISK_COUNTERS* DiskCounters;                            //0x6a0
    VOID* PicoContext;                                                      //0x6a8
    ULONG KeepAliveCounter;                                                 //0x6b0
    ULONG NoWakeKeepAliveCounter;                                           //0x6b4
    ULONGLONG DeepFreezeStartTime;                                          //0x6b8
    ULONGLONG CommitChargeLimit;                                            //0x6c0
    volatile ULONGLONG CommitChargePeak;                                    //0x6c8
    ULONG HighPriorityFaultsAllowed;                                        //0x6d0
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
// _SEGMENT
