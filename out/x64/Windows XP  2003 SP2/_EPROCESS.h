#pragma once
/* ------------------ */

#include <_KPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_LIST_ENTRY.h>
#include <_HANDLE_TABLE.h>
#include <_EX_FAST_REF.h>
#include <_KGUARDED_MUTEX.h>
#include <_ETHREAD.h>
#include <_MM_AVL_TABLE.h>
#include <_EJOB.h>
#include <_EPROCESS_QUOTA_BLOCK.h>
#include <_PAGEFAULT_HISTORY.h>
#include <_HARDWARE_PTE.h>
#include <_WOW64_PROCESS.h>
#include <_PEB.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>

//0x3e0 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0xb8
    union _LARGE_INTEGER CreateTime;                                        //0xc0
    union _LARGE_INTEGER ExitTime;                                          //0xc8
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0xd0
    VOID* UniqueProcessId;                                                  //0xd8
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0xe0
    ULONGLONG QuotaUsage[3];                                                //0xf0
    ULONGLONG QuotaPeak[3];                                                 //0x108
    ULONGLONG CommitCharge;                                                 //0x120
    ULONGLONG PeakVirtualSize;                                              //0x128
    ULONGLONG VirtualSize;                                                  //0x130
    struct _LIST_ENTRY SessionProcessLinks;                                 //0x138
    VOID* DebugPort;                                                        //0x148
    VOID* ExceptionPort;                                                    //0x150
    struct _HANDLE_TABLE* ObjectTable;                                      //0x158
    struct _EX_FAST_REF Token;                                              //0x160
    ULONGLONG WorkingSetPage;                                               //0x168
    struct _KGUARDED_MUTEX AddressCreationLock;                             //0x170
    ULONGLONG HyperSpaceLock;                                               //0x1a8
    struct _ETHREAD* ForkInProgress;                                        //0x1b0
    ULONGLONG HardwareTrigger;                                              //0x1b8
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0x1c0
    VOID* CloneRoot;                                                        //0x1c8
    ULONGLONG NumberOfPrivatePages;                                         //0x1d0
    ULONGLONG NumberOfLockedPages;                                          //0x1d8
    VOID* Win32Process;                                                     //0x1e0
    struct _EJOB* Job;                                                      //0x1e8
    VOID* SectionObject;                                                    //0x1f0
    VOID* SectionBaseAddress;                                               //0x1f8
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x200
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x208
    VOID* Win32WindowStation;                                               //0x210
    VOID* InheritedFromUniqueProcessId;                                     //0x218
    VOID* LdtInformation;                                                   //0x220
    VOID* VadFreeHint;                                                      //0x228
    VOID* VdmObjects;                                                       //0x230
    VOID* DeviceMap;                                                        //0x238
    VOID* Spare0[3];                                                        //0x240
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x258
        ULONGLONG Filler;                                                   //0x258
    };
    VOID* Session;                                                          //0x260
    UCHAR ImageFileName[16];                                                //0x268
    struct _LIST_ENTRY JobLinks;                                            //0x278
    VOID* LockedPagesList;                                                  //0x288
    struct _LIST_ENTRY ThreadListHead;                                      //0x290
    VOID* SecurityPort;                                                     //0x2a0
    struct _WOW64_PROCESS* Wow64Process;                                    //0x2a8
    ULONG ActiveThreads;                                                    //0x2b0
    ULONG GrantedAccess;                                                    //0x2b4
    ULONG DefaultHardErrorProcessing;                                       //0x2b8
    LONG LastThreadExitStatus;                                              //0x2bc
    struct _PEB* Peb;                                                       //0x2c0
    struct _EX_FAST_REF PrefetchTrace;                                      //0x2c8
    union _LARGE_INTEGER ReadOperationCount;                                //0x2d0
    union _LARGE_INTEGER WriteOperationCount;                               //0x2d8
    union _LARGE_INTEGER OtherOperationCount;                               //0x2e0
    union _LARGE_INTEGER ReadTransferCount;                                 //0x2e8
    union _LARGE_INTEGER WriteTransferCount;                                //0x2f0
    union _LARGE_INTEGER OtherTransferCount;                                //0x2f8
    ULONGLONG CommitChargeLimit;                                            //0x300
    ULONGLONG CommitChargePeak;                                             //0x308
    VOID* AweInfo;                                                          //0x310
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x318
    struct _MMSUPPORT Vm;                                                   //0x320
    ULONG Spares[2];                                                        //0x378
    ULONG ModifiedPageCount;                                                //0x380
    ULONG JobStatus;                                                        //0x384
    union
    {
        ULONG Flags;                                                        //0x388
        struct
        {
            ULONG CreateReported:1;                                         //0x388
            ULONG NoDebugInherit:1;                                         //0x388
            ULONG ProcessExiting:1;                                         //0x388
            ULONG ProcessDelete:1;                                          //0x388
            ULONG Wow64SplitPages:1;                                        //0x388
            ULONG VmDeleted:1;                                              //0x388
            ULONG OutswapEnabled:1;                                         //0x388
            ULONG Outswapped:1;                                             //0x388
            ULONG ForkFailed:1;                                             //0x388
            ULONG Wow64VaSpace4Gb:1;                                        //0x388
            ULONG AddressSpaceInitialized:2;                                //0x388
            ULONG SetTimerResolution:1;                                     //0x388
            ULONG BreakOnTermination:1;                                     //0x388
            ULONG SessionCreationUnderway:1;                                //0x388
            ULONG WriteWatch:1;                                             //0x388
            ULONG ProcessInSession:1;                                       //0x388
            ULONG OverrideAddressSpace:1;                                   //0x388
            ULONG HasAddressSpace:1;                                        //0x388
            ULONG LaunchPrefetched:1;                                       //0x388
            ULONG InjectInpageErrors:1;                                     //0x388
            ULONG VmTopDown:1;                                              //0x388
            ULONG ImageNotifyDone:1;                                        //0x388
            ULONG PdeUpdateNeeded:1;                                        //0x388
            ULONG VdmAllowed:1;                                             //0x388
            ULONG SmapAllowed:1;                                            //0x388
            ULONG CreateFailed:1;                                           //0x388
            ULONG DefaultIoPriority:3;                                      //0x388
            ULONG Spare1:1;                                                 //0x388
            ULONG Spare2:1;                                                 //0x388
        };
    };
    LONG ExitStatus;                                                        //0x38c
    USHORT NextPageColor;                                                   //0x390
    union
    {
        struct
        {
            UCHAR SubSystemMinorVersion;                                    //0x392
            UCHAR SubSystemMajorVersion;                                    //0x393
        };
        USHORT SubSystemVersion;                                            //0x392
    };
    UCHAR PriorityClass;                                                    //0x394
    struct _MM_AVL_TABLE VadRoot;                                           //0x398
    ULONG Cookie;                                                           //0x3d8
};
/* Used in */
// _ETHREAD
// _FAST_IO_DISPATCH
// _HANDLE_TABLE
// _LPCP_PORT_OBJECT
// _MDL
// _MM_SESSION_SPACE
// _OBJECT_HANDLE_COUNT_ENTRY
// _OBJECT_HEADER_QUOTA_INFO
// _OBJECT_TYPE_INITIALIZER
// _POOL_HEADER
// _SEGMENT

