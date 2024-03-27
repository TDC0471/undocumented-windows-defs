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

//0x4d0 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x160
    union _LARGE_INTEGER CreateTime;                                        //0x168
    union _LARGE_INTEGER ExitTime;                                          //0x170
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x178
    VOID* UniqueProcessId;                                                  //0x180
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0x188
    ULONGLONG ProcessQuotaUsage[2];                                         //0x198
    ULONGLONG ProcessQuotaPeak[2];                                          //0x1a8
    volatile ULONGLONG CommitCharge;                                        //0x1b8
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x1c0
    struct _PS_CPU_QUOTA_BLOCK* CpuQuotaBlock;                              //0x1c8
    ULONGLONG PeakVirtualSize;                                              //0x1d0
    ULONGLONG VirtualSize;                                                  //0x1d8
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x1e0
    VOID* DebugPort;                                                        //0x1f0
    union
    {
        VOID* ExceptionPortData;                                            //0x1f8
        ULONGLONG ExceptionPortValue;                                       //0x1f8
        ULONGLONG ExceptionPortState:3;                                     //0x1f8
    };
    struct _HANDLE_TABLE* ObjectTable;                                      //0x200
    struct _EX_FAST_REF Token;                                              //0x208
    ULONGLONG WorkingSetPage;                                               //0x210
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x218
    struct _ETHREAD* RotateInProgress;                                      //0x220
    struct _ETHREAD* ForkInProgress;                                        //0x228
    ULONGLONG HardwareTrigger;                                              //0x230
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0x238
    VOID* CloneRoot;                                                        //0x240
    volatile ULONGLONG NumberOfPrivatePages;                                //0x248
    volatile ULONGLONG NumberOfLockedPages;                                 //0x250
    VOID* Win32Process;                                                     //0x258
    struct _EJOB* volatile Job;                                             //0x260
    VOID* SectionObject;                                                    //0x268
    VOID* SectionBaseAddress;                                               //0x270
    ULONG Cookie;                                                           //0x278
    ULONG UmsScheduledThreads;                                              //0x27c
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x280
    VOID* Win32WindowStation;                                               //0x288
    VOID* InheritedFromUniqueProcessId;                                     //0x290
    VOID* LdtInformation;                                                   //0x298
    VOID* Spare;                                                            //0x2a0
    ULONGLONG ConsoleHostProcess;                                           //0x2a8
    VOID* DeviceMap;                                                        //0x2b0
    VOID* EtwDataSource;                                                    //0x2b8
    VOID* FreeTebHint;                                                      //0x2c0
    VOID* FreeUmsTebHint;                                                   //0x2c8
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x2d0
        ULONGLONG Filler;                                                   //0x2d0
    };
    VOID* Session;                                                          //0x2d8
    UCHAR ImageFileName[15];                                                //0x2e0
    UCHAR PriorityClass;                                                    //0x2ef
    struct _LIST_ENTRY JobLinks;                                            //0x2f0
    VOID* LockedPagesList;                                                  //0x300
    struct _LIST_ENTRY ThreadListHead;                                      //0x308
    VOID* SecurityPort;                                                     //0x318
    VOID* Wow64Process;                                                     //0x320
    volatile ULONG ActiveThreads;                                           //0x328
    ULONG ImagePathHash;                                                    //0x32c
    ULONG DefaultHardErrorProcessing;                                       //0x330
    LONG LastThreadExitStatus;                                              //0x334
    struct _PEB* Peb;                                                       //0x338
    struct _EX_FAST_REF PrefetchTrace;                                      //0x340
    union _LARGE_INTEGER ReadOperationCount;                                //0x348
    union _LARGE_INTEGER WriteOperationCount;                               //0x350
    union _LARGE_INTEGER OtherOperationCount;                               //0x358
    union _LARGE_INTEGER ReadTransferCount;                                 //0x360
    union _LARGE_INTEGER WriteTransferCount;                                //0x368
    union _LARGE_INTEGER OtherTransferCount;                                //0x370
    ULONGLONG CommitChargeLimit;                                            //0x378
    volatile ULONGLONG CommitChargePeak;                                    //0x380
    VOID* AweInfo;                                                          //0x388
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x390
    struct _MMSUPPORT Vm;                                                   //0x398
    struct _LIST_ENTRY MmProcessLinks;                                      //0x420
    VOID* HighestUserAddress;                                               //0x430
    ULONG ModifiedPageCount;                                                //0x438
    union
    {
        ULONG Flags2;                                                       //0x43c
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x43c
            ULONG AccountingFolded:1;                                       //0x43c
            ULONG NewProcessReported:1;                                     //0x43c
            ULONG ExitProcessReported:1;                                    //0x43c
            ULONG ReportCommitChanges:1;                                    //0x43c
            ULONG LastReportMemory:1;                                       //0x43c
            ULONG ReportPhysicalPageChanges:1;                              //0x43c
            ULONG HandleTableRundown:1;                                     //0x43c
            ULONG NeedsHandleRundown:1;                                     //0x43c
            ULONG RefTraceEnabled:1;                                        //0x43c
            ULONG NumaAware:1;                                              //0x43c
            ULONG ProtectedProcess:1;                                       //0x43c
            ULONG DefaultPagePriority:3;                                    //0x43c
            ULONG PrimaryTokenFrozen:1;                                     //0x43c
            ULONG ProcessVerifierTarget:1;                                  //0x43c
            ULONG StackRandomizationDisabled:1;                             //0x43c
            ULONG AffinityPermanent:1;                                      //0x43c
            ULONG AffinityUpdateEnable:1;                                   //0x43c
            ULONG PropagateNode:1;                                          //0x43c
            ULONG ExplicitAffinity:1;                                       //0x43c
        };
    };
    union
    {
        ULONG Flags;                                                        //0x440
        struct
        {
            ULONG CreateReported:1;                                         //0x440
            ULONG NoDebugInherit:1;                                         //0x440
            ULONG ProcessExiting:1;                                         //0x440
            ULONG ProcessDelete:1;                                          //0x440
            ULONG Wow64SplitPages:1;                                        //0x440
            ULONG VmDeleted:1;                                              //0x440
            ULONG OutswapEnabled:1;                                         //0x440
            ULONG Outswapped:1;                                             //0x440
            ULONG ForkFailed:1;                                             //0x440
            ULONG Wow64VaSpace4Gb:1;                                        //0x440
            ULONG AddressSpaceInitialized:2;                                //0x440
            ULONG SetTimerResolution:1;                                     //0x440
            ULONG BreakOnTermination:1;                                     //0x440
            ULONG DeprioritizeViews:1;                                      //0x440
            ULONG WriteWatch:1;                                             //0x440
            ULONG ProcessInSession:1;                                       //0x440
            ULONG OverrideAddressSpace:1;                                   //0x440
            ULONG HasAddressSpace:1;                                        //0x440
            ULONG LaunchPrefetched:1;                                       //0x440
            ULONG InjectInpageErrors:1;                                     //0x440
            ULONG VmTopDown:1;                                              //0x440
            ULONG ImageNotifyDone:1;                                        //0x440
            ULONG PdeUpdateNeeded:1;                                        //0x440
            ULONG VdmAllowed:1;                                             //0x440
            ULONG CrossSessionCreate:1;                                     //0x440
            ULONG ProcessInserted:1;                                        //0x440
            ULONG DefaultIoPriority:3;                                      //0x440
            ULONG ProcessSelfDelete:1;                                      //0x440
            ULONG SetTimerResolutionLink:1;                                 //0x440
        };
    };
    LONG ExitStatus;                                                        //0x444
    struct _MM_AVL_TABLE VadRoot;                                           //0x448
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x488
    struct _LIST_ENTRY TimerResolutionLink;                                 //0x4a8
    ULONG RequestedTimerResolution;                                         //0x4b8
    ULONG ActiveThreadsHighWatermark;                                       //0x4bc
    ULONG SmallestTimerResolution;                                          //0x4c0
    struct _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;               //0x4c8
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
// _POOL_HEADER
// _SEGMENT

