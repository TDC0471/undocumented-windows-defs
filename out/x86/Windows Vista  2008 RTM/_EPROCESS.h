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

//0x270 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x80
    union _LARGE_INTEGER CreateTime;                                        //0x88
    union _LARGE_INTEGER ExitTime;                                          //0x90
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x98
    VOID* UniqueProcessId;                                                  //0x9c
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xa0
    ULONG QuotaUsage[3];                                                    //0xa8
    ULONG QuotaPeak[3];                                                     //0xb4
    volatile ULONG CommitCharge;                                            //0xc0
    ULONG PeakVirtualSize;                                                  //0xc4
    ULONG VirtualSize;                                                      //0xc8
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xcc
    VOID* DebugPort;                                                        //0xd4
    union
    {
        VOID* ExceptionPortData;                                            //0xd8
        ULONG ExceptionPortValue;                                           //0xd8
        ULONG ExceptionPortState:3;                                         //0xd8
    };
    struct _HANDLE_TABLE* ObjectTable;                                      //0xdc
    struct _EX_FAST_REF Token;                                              //0xe0
    ULONG WorkingSetPage;                                                   //0xe4
    struct _EX_PUSH_LOCK AddressCreationLock;                               //0xe8
    struct _ETHREAD* RotateInProgress;                                      //0xec
    struct _ETHREAD* ForkInProgress;                                        //0xf0
    ULONG HardwareTrigger;                                                  //0xf4
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0xf8
    VOID* CloneRoot;                                                        //0xfc
    volatile ULONG NumberOfPrivatePages;                                    //0x100
    volatile ULONG NumberOfLockedPages;                                     //0x104
    VOID* Win32Process;                                                     //0x108
    struct _EJOB* Job;                                                      //0x10c
    VOID* SectionObject;                                                    //0x110
    VOID* SectionBaseAddress;                                               //0x114
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x118
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x11c
    VOID* Win32WindowStation;                                               //0x120
    VOID* InheritedFromUniqueProcessId;                                     //0x124
    VOID* LdtInformation;                                                   //0x128
    VOID* VadFreeHint;                                                      //0x12c
    VOID* VdmObjects;                                                       //0x130
    VOID* DeviceMap;                                                        //0x134
    VOID* EtwDataSource;                                                    //0x138
    VOID* FreeTebHint;                                                      //0x13c
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x140
        ULONGLONG Filler;                                                   //0x140
    };
    VOID* Session;                                                          //0x148
    UCHAR ImageFileName[16];                                                //0x14c
    struct _LIST_ENTRY JobLinks;                                            //0x15c
    VOID* LockedPagesList;                                                  //0x164
    struct _LIST_ENTRY ThreadListHead;                                      //0x168
    VOID* SecurityPort;                                                     //0x170
    VOID* PaeTop;                                                           //0x174
    volatile ULONG ActiveThreads;                                           //0x178
    ULONG ImagePathHash;                                                    //0x17c
    ULONG DefaultHardErrorProcessing;                                       //0x180
    LONG LastThreadExitStatus;                                              //0x184
    struct _PEB* Peb;                                                       //0x188
    struct _EX_FAST_REF PrefetchTrace;                                      //0x18c
    union _LARGE_INTEGER ReadOperationCount;                                //0x190
    union _LARGE_INTEGER WriteOperationCount;                               //0x198
    union _LARGE_INTEGER OtherOperationCount;                               //0x1a0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1a8
    union _LARGE_INTEGER WriteTransferCount;                                //0x1b0
    union _LARGE_INTEGER OtherTransferCount;                                //0x1b8
    ULONG CommitChargeLimit;                                                //0x1c0
    volatile ULONG CommitChargePeak;                                        //0x1c4
    VOID* AweInfo;                                                          //0x1c8
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x1cc
    struct _MMSUPPORT Vm;                                                   //0x1d0
    struct _LIST_ENTRY MmProcessLinks;                                      //0x218
    ULONG ModifiedPageCount;                                                //0x220
    union
    {
        ULONG Flags2;                                                       //0x224
        struct
        {
            ULONG JobNotReallyActive:1;                                     //0x224
            ULONG AccountingFolded:1;                                       //0x224
            ULONG NewProcessReported:1;                                     //0x224
            ULONG ExitProcessReported:1;                                    //0x224
            ULONG ReportCommitChanges:1;                                    //0x224
            ULONG LastReportMemory:1;                                       //0x224
            ULONG ReportPhysicalPageChanges:1;                              //0x224
            ULONG HandleTableRundown:1;                                     //0x224
            ULONG NeedsHandleRundown:1;                                     //0x224
            ULONG RefTraceEnabled:1;                                        //0x224
            ULONG NumaAware:1;                                              //0x224
            ULONG ProtectedProcess:1;                                       //0x224
            ULONG DefaultPagePriority:3;                                    //0x224
            ULONG PrimaryTokenFrozen:1;                                     //0x224
            ULONG ProcessVerifierTarget:1;                                  //0x224
            ULONG StackRandomizationDisabled:1;                             //0x224
        };
    };
    union
    {
        ULONG Flags;                                                        //0x228
        struct
        {
            ULONG CreateReported:1;                                         //0x228
            ULONG NoDebugInherit:1;                                         //0x228
            ULONG ProcessExiting:1;                                         //0x228
            ULONG ProcessDelete:1;                                          //0x228
            ULONG Wow64SplitPages:1;                                        //0x228
            ULONG VmDeleted:1;                                              //0x228
            ULONG OutswapEnabled:1;                                         //0x228
            ULONG Outswapped:1;                                             //0x228
            ULONG ForkFailed:1;                                             //0x228
            ULONG Wow64VaSpace4Gb:1;                                        //0x228
            ULONG AddressSpaceInitialized:2;                                //0x228
            ULONG SetTimerResolution:1;                                     //0x228
            ULONG BreakOnTermination:1;                                     //0x228
            ULONG DeprioritizeViews:1;                                      //0x228
            ULONG WriteWatch:1;                                             //0x228
            ULONG ProcessInSession:1;                                       //0x228
            ULONG OverrideAddressSpace:1;                                   //0x228
            ULONG HasAddressSpace:1;                                        //0x228
            ULONG LaunchPrefetched:1;                                       //0x228
            ULONG InjectInpageErrors:1;                                     //0x228
            ULONG VmTopDown:1;                                              //0x228
            ULONG ImageNotifyDone:1;                                        //0x228
            ULONG PdeUpdateNeeded:1;                                        //0x228
            ULONG VdmAllowed:1;                                             //0x228
            ULONG SmapAllowed:1;                                            //0x228
            ULONG ProcessInserted:1;                                        //0x228
            ULONG DefaultIoPriority:3;                                      //0x228
            ULONG SparePsFlags1:2;                                          //0x228
        };
    };
    LONG ExitStatus;                                                        //0x22c
    USHORT Spare7;                                                          //0x230
    union
    {
        struct
        {
            UCHAR SubSystemMinorVersion;                                    //0x232
            UCHAR SubSystemMajorVersion;                                    //0x233
        };
        USHORT SubSystemVersion;                                            //0x232
    };
    UCHAR PriorityClass;                                                    //0x234
    struct _MM_AVL_TABLE VadRoot;                                           //0x238
    ULONG Cookie;                                                           //0x258
    struct _ALPC_PROCESS_CONTEXT AlpcContext;                               //0x25c
};
/* Used in */
// _ETW_REG_ENTRY
// _FAST_IO_DISPATCH
// _HANDLE_TABLE
// _KRESOURCEMANAGER_COMPLETION_BINDING
// _LPCP_PORT_OBJECT
// _MDL
// _MM_PAGE_ACCESS_INFO_HEADER
// _OBJECT_HANDLE_COUNT_ENTRY
// _OBJECT_HEADER_QUOTA_INFO
// _OBJECT_TYPE_INITIALIZER
// _SEGMENT

