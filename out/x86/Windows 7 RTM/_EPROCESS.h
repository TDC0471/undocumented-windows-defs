#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_PS_CPU_QUOTA_BLOCK.h>
#include <_HANDLE_TABLE.h>
#include <_EX_FAST_REF.h>
#include <_ETHREAD.h>
#include <_MM_AVL_TABLE.h>
#include <_EJOB.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_HARDWARE_PTE.h>
#include <_PEB.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>
#include <_ALPC_PROCESS_CONTEXT.h>
#include <_PO_DIAG_STACK_RECORD.h>

//0x2c0 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x98
    union _LARGE_INTEGER CreateTime;                                        //0xa0
    union _LARGE_INTEGER ExitTime;                                          //0xa8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xb0
    VOID* UniqueProcessId;                                                  //0xb4
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xb8
    ULONG ProcessQuotaUsage[2];                                             //0xc0
    ULONG ProcessQuotaPeak[2];                                              //0xc8
    volatile ULONG CommitCharge;                                            //0xd0
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0xd4
    struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;                              //0xd8
    ULONG PeakVirtualSize;                                                  //0xdc
    ULONG VirtualSize;                                                      //0xe0
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xe4
    VOID* DebugPort;                                                        //0xec
    union
    {
        VOID* ExceptionPortData;                                            //0xf0
        ULONG ExceptionPortValue;                                           //0xf0
        ULONG ExceptionPortState:3;                                         //0xf0
    };
    struct _HANDLE_TABLE* ObjectTable;                                      //0xf4
    struct _EX_FAST_REF Token;                                              //0xf8
    ULONG WorkingSetPage;                                                   //0xfc
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x100
    struct _ETHREAD* RotateInProgress;                                      //0x104
    struct _ETHREAD* ForkInProgress;                                        //0x108
    ULONG HardwareTrigger;                                                  //0x10c
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0x110
    VOID* CloneRoot;                                                        //0x114
    volatile ULONG NumberOfPrivatePages;                                    //0x118
    volatile ULONG NumberOfLockedPages;                                     //0x11c
    VOID* Win32Process;                                                     //0x120
    struct _EJOB* volatile Job;                                             //0x124
    VOID* SectionObject;                                                    //0x128
    VOID* SectionBaseAddress;                                               //0x12c
    ULONG Cookie;                                                           //0x130
    ULONG Spare8;                                                           //0x134
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x138
    VOID* Win32WindowStation;                                               //0x13c
    VOID* InheritedFromUniqueProcessId;                                     //0x140
    VOID* LdtInformation;                                                   //0x144
    VOID* VdmObjects;                                                       //0x148
    ULONG ConsoleHostProcess;                                               //0x14c
    VOID* DeviceMap;                                                        //0x150
    VOID* EtwDataSource;                                                    //0x154
    VOID* FreeTebHint;                                                      //0x158
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x160
        ULONGLONG Filler;                                                   //0x160
    };
    VOID* Session;                                                          //0x168
    UCHAR ImageFileName[15];                                                //0x16c
    UCHAR PriorityClass;                                                    //0x17b
    struct _LIST_ENTRY JobLinks;                                            //0x17c
    VOID* LockedPagesList;                                                  //0x184
    struct _LIST_ENTRY ThreadListHead;                                      //0x188
    VOID* SecurityPort;                                                     //0x190
    VOID* PaeTop;                                                           //0x194
    volatile ULONG ActiveThreads;                                           //0x198
    ULONG ImagePathHash;                                                    //0x19c
    ULONG DefaultHardErrorProcessing;                                       //0x1a0
    LONG LastThreadExitStatus;                                              //0x1a4
    struct _PEB* Peb;                                                       //0x1a8
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1ac
    union _LARGE_INTEGER ReadOperationCount;                                //0x1b0
    union _LARGE_INTEGER WriteOperationCount;                               //0x1b8
    union _LARGE_INTEGER OtherOperationCount;                               //0x1c0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1c8
    union _LARGE_INTEGER WriteTransferCount;                                //0x1d0
    union _LARGE_INTEGER OtherTransferCount;                                //0x1d8
    ULONG CommitChargeLimit;                                                //0x1e0
    volatile ULONG CommitChargePeak;                                        //0x1e4
    VOID* AweInfo;                                                          //0x1e8
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x1ec
    struct _MMSUPPORT Vm;                                                   //0x1f0
    struct _LIST_ENTRY MmProcessLinks;                                      //0x25c
    VOID* HighestUserAddress;                                               //0x264
    ULONG ModifiedPageCount;                                                //0x268
    union
    {
        ULONG Flags2;                                                       //0x26c
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x26c
            ULONG AccountingFolded:1;                                       //0x26c
            ULONG NewProcessReported:1;                                     //0x26c
            ULONG ExitProcessReported:1;                                    //0x26c
            ULONG ReportCommitChanges:1;                                    //0x26c
            ULONG LastReportMemory:1;                                       //0x26c
            ULONG ReportPhysicalPageChanges:1;                              //0x26c
            ULONG HandleTableRundown:1;                                     //0x26c
            ULONG NeedsHandleRundown:1;                                     //0x26c
            ULONG RefTraceEnabled:1;                                        //0x26c
            ULONG NumaAware:1;                                              //0x26c
            ULONG ProtectedProcess:1;                                       //0x26c
            ULONG DefaultPagePriority:3;                                    //0x26c
            ULONG PrimaryTokenFrozen:1;                                     //0x26c
            ULONG ProcessVerifierTarget:1;                                  //0x26c
            ULONG StackRandomizationDisabled:1;                             //0x26c
            ULONG AffinityPermanent:1;                                      //0x26c
            ULONG AffinityUpdateEnable:1;                                   //0x26c
            ULONG PropagateNode:1;                                          //0x26c
            ULONG ExplicitAffinity:1;                                       //0x26c
        };
    };
    union
    {
        ULONG Flags;                                                        //0x270
        struct
        {
            ULONG CreateReported:1;                                         //0x270
            ULONG NoDebugInherit:1;                                         //0x270
            ULONG ProcessExiting:1;                                         //0x270
            ULONG ProcessDelete:1;                                          //0x270
            ULONG Wow64SplitPages:1;                                        //0x270
            ULONG VmDeleted:1;                                              //0x270
            ULONG OutswapEnabled:1;                                         //0x270
            ULONG Outswapped:1;                                             //0x270
            ULONG ForkFailed:1;                                             //0x270
            ULONG Wow64VaSpace4Gb:1;                                        //0x270
            ULONG AddressSpaceInitialized:2;                                //0x270
            ULONG SetTimerResolution:1;                                     //0x270
            ULONG BreakOnTermination:1;                                     //0x270
            ULONG DeprioritizeViews:1;                                      //0x270
            ULONG WriteWatch:1;                                             //0x270
            ULONG ProcessInSession:1;                                       //0x270
            ULONG OverrideAddressSpace:1;                                   //0x270
            ULONG HasAddressSpace:1;                                        //0x270
            ULONG LaunchPrefetched:1;                                       //0x270
            ULONG InjectInpageErrors:1;                                     //0x270
            ULONG VmTopDown:1;                                              //0x270
            ULONG ImageNotifyDone:1;                                        //0x270
            ULONG PdeUpdateNeeded:1;                                        //0x270
            ULONG VdmAllowed:1;                                             //0x270
            ULONG CrossSessionCreate:1;                                     //0x270
            ULONG ProcessInserted:1;                                        //0x270
            ULONG DefaultIoPriority:3;                                      //0x270
            ULONG ProcessSelfDelete:1;                                      //0x270
            ULONG SetTimerResolutionLink:1;                                 //0x270
        };
    };
    LONG ExitStatus;                                                        //0x274
    struct _MM_AVL_TABLE VadRoot;                                           //0x278
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x298
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x2a8
    ULONG RequestedTimerResolution;                                         //0x2b0
    ULONG ActiveThreadsHighWatermark;                                       //0x2b4
    ULONG SmallestTimerResolution;                                          //0x2b8
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x2bc
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
// _LPCP_PORT_OBJECT
// _MDL
// _MMVAD
// _MMVAD_LONG
// _MM_PAGE_ACCESS_INFO_HEADER
// _OBJECT_HANDLE_COUNT_ENTRY
// _OBJECT_HEADER_PROCESS_INFO
// _OBJECT_TYPE_INITIALIZER
// _OB_DUPLICATE_OBJECT_STATE
// _SEGMENT

