#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TABLE.h>
#include <_EX_FAST_REF.h>
#include <_ETHREAD.h>
#include <_MM_AVL_TABLE.h>
#include <_EJOB.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_HARDWARE_PTE.h>
#include <_PEB.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>
#include <_ALPC_PROCESS_CONTEXT.h>

//0x3e8 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0xc0
    union _LARGE_INTEGER CreateTime;                                        //0xc8
    union _LARGE_INTEGER ExitTime;                                          //0xd0
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xd8
    VOID* UniqueProcessId;                                                  //0xe0
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xe8
    ULONGLONG QuotaUsage[3];                                                //0xf8
    ULONGLONG QuotaPeak[3];                                                 //0x110
    volatile ULONGLONG CommitCharge;                                        //0x128
    ULONGLONG PeakVirtualSize;                                              //0x130
    ULONGLONG VirtualSize;                                                  //0x138
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x140
    VOID* DebugPort;                                                        //0x150
    union
    {
        VOID* ExceptionPortData;                                            //0x158
        ULONGLONG ExceptionPortValue;                                       //0x158
        ULONGLONG ExceptionPortState:3;                                     //0x158
    };
    struct _HANDLE_TABLE* ObjectTable;                                      //0x160
    struct _EX_FAST_REF Token;                                              //0x168
    ULONGLONG WorkingSetPage;                                               //0x170
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0x178
    struct _ETHREAD* RotateInProgress;                                      //0x180
    struct _ETHREAD* ForkInProgress;                                        //0x188
    ULONGLONG HardwareTrigger;                                              //0x190
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0x198
    VOID* CloneRoot;                                                        //0x1a0
    volatile ULONGLONG NumberOfPrivatePages;                                //0x1a8
    volatile ULONGLONG NumberOfLockedPages;                                 //0x1b0
    VOID* Win32Process;                                                     //0x1b8
    struct _EJOB* Job;                                                      //0x1c0
    VOID* SectionObject;                                                    //0x1c8
    VOID* SectionBaseAddress;                                               //0x1d0
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x1d8
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x1e0
    VOID* Win32WindowStation;                                               //0x1e8
    VOID* InheritedFromUniqueProcessId;                                     //0x1f0
    VOID* LdtInformation;                                                   //0x1f8
    VOID* Spare;                                                            //0x200
    VOID* VdmObjects;                                                       //0x208
    VOID* DeviceMap;                                                        //0x210
    VOID* EtwDataSource;                                                    //0x218
    VOID* FreeTebHint;                                                      //0x220
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x228
        ULONGLONG Filler;                                                   //0x228
    };
    VOID* Session;                                                          //0x230
    UCHAR ImageFileName[16];                                                //0x238
    struct _LIST_ENTRY JobLinks;                                            //0x248
    VOID* LockedPagesList;                                                  //0x258
    struct _LIST_ENTRY ThreadListHead;                                      //0x260
    VOID* SecurityPort;                                                     //0x270
    VOID* Wow64Process;                                                     //0x278
    volatile ULONG ActiveThreads;                                           //0x280
    ULONG ImagePathHash;                                                    //0x284
    ULONG DefaultHardErrorProcessing;                                       //0x288
    LONG LastThreadExitStatus;                                              //0x28c
    struct _PEB* Peb;                                                       //0x290
    struct _EX_FAST_REF PrefetchTrace;                                      //0x298
    union _LARGE_INTEGER ReadOperationCount;                                //0x2a0
    union _LARGE_INTEGER WriteOperationCount;                               //0x2a8
    union _LARGE_INTEGER OtherOperationCount;                               //0x2b0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x2b8
    union _LARGE_INTEGER WriteTransferCount;                                //0x2c0
    union _LARGE_INTEGER OtherTransferCount;                                //0x2c8
    ULONGLONG CommitChargeLimit;                                            //0x2d0
    volatile ULONGLONG CommitChargePeak;                                    //0x2d8
    VOID* AweInfo;                                                          //0x2e0
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x2e8
    struct _MMSUPPORT Vm;                                                   //0x2f0
    struct _LIST_ENTRY MmProcessLinks;                                      //0x358
    ULONG ModifiedPageCount;                                                //0x368
    union
    {
        ULONG Flags2;                                                       //0x36c
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x36c
            ULONG AccountingFolded:1;                                       //0x36c
            ULONG NewProcessReported:1;                                     //0x36c
            ULONG ExitProcessReported:1;                                    //0x36c
            ULONG ReportCommitChanges:1;                                    //0x36c
            ULONG LastReportMemory:1;                                       //0x36c
            ULONG ReportPhysicalPageChanges:1;                              //0x36c
            ULONG HandleTableRundown:1;                                     //0x36c
            ULONG NeedsHandleRundown:1;                                     //0x36c
            ULONG RefTraceEnabled:1;                                        //0x36c
            ULONG NumaAware:1;                                              //0x36c
            ULONG ProtectedProcess:1;                                       //0x36c
            ULONG DefaultPagePriority:3;                                    //0x36c
            ULONG PrimaryTokenFrozen:1;                                     //0x36c
            ULONG ProcessVerifierTarget:1;                                  //0x36c
            ULONG StackRandomizationDisabled:1;                             //0x36c
            ULONG AffinityPermanent:1;                                      //0x36c
            ULONG AffinityUpdateEnable:1;                                   //0x36c
            ULONG CrossSessionCreate:1;                                     //0x36c
        };
    };
    union
    {
        ULONG Flags;                                                        //0x370
        struct
        {
            ULONG CreateReported:1;                                         //0x370
            ULONG NoDebugInherit:1;                                         //0x370
            ULONG ProcessExiting:1;                                         //0x370
            ULONG ProcessDelete:1;                                          //0x370
            ULONG Wow64SplitPages:1;                                        //0x370
            ULONG VmDeleted:1;                                              //0x370
            ULONG OutswapEnabled:1;                                         //0x370
            ULONG Outswapped:1;                                             //0x370
            ULONG ForkFailed:1;                                             //0x370
            ULONG Wow64VaSpace4Gb:1;                                        //0x370
            ULONG AddressSpaceInitialized:2;                                //0x370
            ULONG SetTimerResolution:1;                                     //0x370
            ULONG BreakOnTermination:1;                                     //0x370
            ULONG DeprioritizeViews:1;                                      //0x370
            ULONG WriteWatch:1;                                             //0x370
            ULONG ProcessInSession:1;                                       //0x370
            ULONG OverrideAddressSpace:1;                                   //0x370
            ULONG HasAddressSpace:1;                                        //0x370
            ULONG LaunchPrefetched:1;                                       //0x370
            ULONG InjectInpageErrors:1;                                     //0x370
            ULONG VmTopDown:1;                                              //0x370
            ULONG ImageNotifyDone:1;                                        //0x370
            ULONG PdeUpdateNeeded:1;                                        //0x370
            ULONG VdmAllowed:1;                                             //0x370
            ULONG SmapAllowed:1;                                            //0x370
            ULONG ProcessInserted:1;                                        //0x370
            ULONG DefaultIoPriority:3;                                      //0x370
            ULONG ProcessSelfDelete:1;                                      //0x370
            ULONG SpareProcessFlags:1;                                      //0x370
        };
    };
    LONG ExitStatus;                                                        //0x374
    USHORT Spare7;                                                          //0x378
    union
    {
        struct
        {
            UCHAR SubSystemMinorVersion;                                    //0x37a
            UCHAR SubSystemMajorVersion;                                    //0x37b
        };
        USHORT SubSystemVersion;                                            //0x37a
    };
    UCHAR PriorityClass;                                                    //0x37c
    struct _MM_AVL_TABLE VadRoot;                                           //0x380
    ULONG Cookie;                                                           //0x3c0
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x3c8
};
/* Used in */
// _ALPC_COMPLETION_LIST
// _ALPC_PORT
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
// _MM_PAGE_ACCESS_INFO_HEADER
// _OBJECT_HANDLE_COUNT_ENTRY
// _OBJECT_HEADER_QUOTA_INFO
// _OBJECT_TYPE_INITIALIZER
// _OB_DUPLICATE_OBJECT_STATE
// _POOL_HEADER
// _SEGMENT

