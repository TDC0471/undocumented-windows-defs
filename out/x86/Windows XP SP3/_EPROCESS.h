#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TABLE.h>
#include <_EX_FAST_REF.h>
#include <_FAST_MUTEX.h>
#include <_ETHREAD.h>
#include <_EJOB.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_HARDWARE_PTE.h>
#include <_PEB.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>

//0x260 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x6c
    union _LARGE_INTEGER CreateTime;                                        //0x70
    union _LARGE_INTEGER ExitTime;                                          //0x78
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x80
    VOID* UniqueProcessId;                                                  //0x84
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0x88
    ULONG QuotaUsage[3];                                                    //0x90
    ULONG QuotaPeak[3];                                                     //0x9c
    ULONG CommitCharge;                                                     //0xa8
    ULONG PeakVirtualSize;                                                  //0xac
    ULONG VirtualSize;                                                      //0xb0
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xb4
    VOID* DebugPort;                                                        //0xbc
    VOID* ExceptionPort;                                                    //0xc0
    struct _HANDLE_TABLE* ObjectTable;                                      //0xc4
    struct _EX_FAST_REF Token;                                              //0xc8
    struct _FAST_MUTEX WorkingSetLock;                                      //0xcc
    ULONG WorkingSetPage;                                                   //0xec
    struct _FAST_MUTEX AddressCreationLock;                                 //0xf0
    ULONG HyperSpaceLock;                                                   //0x110
    struct _ETHREAD* ForkInProgress;                                        //0x114
    ULONG HardwareTrigger;                                                  //0x118
    VOID* VadRoot;                                                          //0x11c
    VOID* VadHint;                                                          //0x120
    VOID* CloneRoot;                                                        //0x124
    ULONG NumberOfPrivatePages;                                             //0x128
    ULONG NumberOfLockedPages;                                              //0x12c
    VOID* Win32Process;                                                     //0x130
    struct _EJOB* Job;                                                      //0x134
    VOID* SectionObject;                                                    //0x138
    VOID* SectionBaseAddress;                                               //0x13c
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x140
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x144
    VOID* Win32WindowStation;                                               //0x148
    VOID* InheritedFromUniqueProcessId;                                     //0x14c
    VOID* LdtInformation;                                                   //0x150
    VOID* VadFreeHint;                                                      //0x154
    VOID* VdmObjects;                                                       //0x158
    VOID* DeviceMap;                                                        //0x15c
    struct _LIST_ENTRY PhysicalVadList;                                     //0x160
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x168
        ULONGLONG Filler;                                                   //0x168
    };
    VOID* Session;                                                          //0x170
    UCHAR ImageFileName[16];                                                //0x174
    struct _LIST_ENTRY JobLinks;                                            //0x184
    VOID* LockedPagesList;                                                  //0x18c
    struct _LIST_ENTRY ThreadListHead;                                      //0x190
    VOID* SecurityPort;                                                     //0x198
    VOID* PaeTop;                                                           //0x19c
    ULONG ActiveThreads;                                                    //0x1a0
    ULONG GrantedAccess;                                                    //0x1a4
    ULONG DefaultHardErrorProcessing;                                       //0x1a8
    LONG LastThreadExitStatus;                                              //0x1ac
    struct _PEB* Peb;                                                       //0x1b0
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1b4
    union _LARGE_INTEGER ReadOperationCount;                                //0x1b8
    union _LARGE_INTEGER WriteOperationCount;                               //0x1c0
    union _LARGE_INTEGER OtherOperationCount;                               //0x1c8
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1d0
    union _LARGE_INTEGER WriteTransferCount;                                //0x1d8
    union _LARGE_INTEGER OtherTransferCount;                                //0x1e0
    ULONG CommitChargeLimit;                                                //0x1e8
    ULONG CommitChargePeak;                                                 //0x1ec
    VOID* AweInfo;                                                          //0x1f0
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x1f4
    struct _MMSUPPORT Vm;                                                   //0x1f8
    ULONG LastFaultCount;                                                   //0x238
    ULONG ModifiedPageCount;                                                //0x23c
    ULONG NumberOfVads;                                                     //0x240
    ULONG JobStatus;                                                        //0x244
    union
    {
        ULONG Flags;                                                        //0x248
        struct
        {
            ULONG CreateReported:1;                                         //0x248
            ULONG NoDebugInherit:1;                                         //0x248
            ULONG ProcessExiting:1;                                         //0x248
            ULONG ProcessDelete:1;                                          //0x248
            ULONG Wow64SplitPages:1;                                        //0x248
            ULONG VmDeleted:1;                                              //0x248
            ULONG OutswapEnabled:1;                                         //0x248
            ULONG Outswapped:1;                                             //0x248
            ULONG ForkFailed:1;                                             //0x248
            ULONG HasPhysicalVad:1;                                         //0x248
            ULONG AddressSpaceInitialized:2;                                //0x248
            ULONG SetTimerResolution:1;                                     //0x248
            ULONG BreakOnTermination:1;                                     //0x248
            ULONG SessionCreationUnderway:1;                                //0x248
            ULONG WriteWatch:1;                                             //0x248
            ULONG ProcessInSession:1;                                       //0x248
            ULONG OverrideAddressSpace:1;                                   //0x248
            ULONG HasAddressSpace:1;                                        //0x248
            ULONG LaunchPrefetched:1;                                       //0x248
            ULONG InjectInpageErrors:1;                                     //0x248
            ULONG VmTopDown:1;                                              //0x248
            ULONG Unused3:1;                                                //0x248
            ULONG Unused4:1;                                                //0x248
            ULONG VdmAllowed:1;                                             //0x248
            ULONG Unused:5;                                                 //0x248
            ULONG Unused1:1;                                                //0x248
            ULONG Unused2:1;                                                //0x248
        };
    };
    LONG ExitStatus;                                                        //0x24c
    USHORT NextPageColor;                                                   //0x250
    union
    {
        struct
        {
            UCHAR SubSystemMinorVersion;                                    //0x252
            UCHAR SubSystemMajorVersion;                                    //0x253
        };
        USHORT SubSystemVersion;                                            //0x252
    };
    UCHAR PriorityClass;                                                    //0x254
    UCHAR WorkingSetAcquiredUnsafe;                                         //0x255
    ULONG Cookie;                                                           //0x258
};
/* Used in */
// _ETHREAD
// _FAST_IO_DISPATCH
// _HANDLE_TABLE
// _LPCP_PORT_OBJECT
// _MDL
// _MM_SESSION_SPACE
// _OBJECT_TYPE_INITIALIZER
// _POOL_HEADER
// _SEGMENT

