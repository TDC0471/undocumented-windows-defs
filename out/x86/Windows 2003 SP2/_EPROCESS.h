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
#include <_PEB.h>
#include <_SE_AUDIT_PROCESS_CREATION_INFO.h>
#include <_MMSUPPORT.h>

//0x278 bytes (sizeof)
struct _EPROCESS
{
    struct _KPROCESS Pcb;                                                   //0x0
    struct _EX_PUSH_LOCK ProcessLock;                                       //0x78
    union _LARGE_INTEGER CreateTime;                                        //0x80
    union _LARGE_INTEGER ExitTime;                                          //0x88
    struct _EX_RUNDOWN_REF RundownProtect;                                  //0x90
    VOID* UniqueProcessId;                                                  //0x94
    struct _LIST_ENTRY ActiveProcessLinks;                                  //0x98
    ULONG QuotaUsage[3];                                                    //0xa0
    ULONG QuotaPeak[3];                                                     //0xac
    ULONG CommitCharge;                                                     //0xb8
    ULONG PeakVirtualSize;                                                  //0xbc
    ULONG VirtualSize;                                                      //0xc0
    struct _LIST_ENTRY SessionProcessLinks;                                 //0xc4
    VOID* DebugPort;                                                        //0xcc
    VOID* ExceptionPort;                                                    //0xd0
    struct _HANDLE_TABLE* ObjectTable;                                      //0xd4
    struct _EX_FAST_REF Token;                                              //0xd8
    ULONG WorkingSetPage;                                                   //0xdc
    struct _KGUARDED_MUTEX AddressCreationLock;                             //0xe0
    ULONG HyperSpaceLock;                                                   //0x100
    struct _ETHREAD* ForkInProgress;                                        //0x104
    ULONG HardwareTrigger;                                                  //0x108
    struct _MM_AVL_TABLE* PhysicalVadRoot;                                  //0x10c
    VOID* CloneRoot;                                                        //0x110
    ULONG NumberOfPrivatePages;                                             //0x114
    ULONG NumberOfLockedPages;                                              //0x118
    VOID* Win32Process;                                                     //0x11c
    struct _EJOB* Job;                                                      //0x120
    VOID* SectionObject;                                                    //0x124
    VOID* SectionBaseAddress;                                               //0x128
    struct _EPROCESS_QUOTA_BLOCK* QuotaBlock;                               //0x12c
    struct _PAGEFAULT_HISTORY* WorkingSetWatch;                             //0x130
    VOID* Win32WindowStation;                                               //0x134
    VOID* InheritedFromUniqueProcessId;                                     //0x138
    VOID* LdtInformation;                                                   //0x13c
    VOID* VadFreeHint;                                                      //0x140
    VOID* VdmObjects;                                                       //0x144
    VOID* DeviceMap;                                                        //0x148
    VOID* Spare0[3];                                                        //0x14c
    union
    {
        struct _HARDWARE_PTE PageDirectoryPte;                              //0x158
        ULONGLONG Filler;                                                   //0x158
    };
    VOID* Session;                                                          //0x160
    UCHAR ImageFileName[16];                                                //0x164
    struct _LIST_ENTRY JobLinks;                                            //0x174
    VOID* LockedPagesList;                                                  //0x17c
    struct _LIST_ENTRY ThreadListHead;                                      //0x180
    VOID* SecurityPort;                                                     //0x188
    VOID* PaeTop;                                                           //0x18c
    ULONG ActiveThreads;                                                    //0x190
    ULONG GrantedAccess;                                                    //0x194
    ULONG DefaultHardErrorProcessing;                                       //0x198
    LONG LastThreadExitStatus;                                              //0x19c
    struct _PEB* Peb;                                                       //0x1a0
    struct _EX_FAST_REF PrefetchTrace;                                      //0x1a4
    union _LARGE_INTEGER ReadOperationCount;                                //0x1a8
    union _LARGE_INTEGER WriteOperationCount;                               //0x1b0
    union _LARGE_INTEGER OtherOperationCount;                               //0x1b8
    union _LARGE_INTEGER ReadTransferCount;                                 //0x1c0
    union _LARGE_INTEGER WriteTransferCount;                                //0x1c8
    union _LARGE_INTEGER OtherTransferCount;                                //0x1d0
    ULONG CommitChargeLimit;                                                //0x1d8
    ULONG CommitChargePeak;                                                 //0x1dc
    VOID* AweInfo;                                                          //0x1e0
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;      //0x1e4
    struct _MMSUPPORT Vm;                                                   //0x1e8
    struct _LIST_ENTRY MmProcessLinks;                                      //0x230
    ULONG ModifiedPageCount;                                                //0x238
    ULONG JobStatus;                                                        //0x23c
    union
    {
        ULONG Flags;                                                        //0x240
        struct
        {
            ULONG CreateReported:1;                                         //0x240
            ULONG NoDebugInherit:1;                                         //0x240
            ULONG ProcessExiting:1;                                         //0x240
            ULONG ProcessDelete:1;                                          //0x240
            ULONG Wow64SplitPages:1;                                        //0x240
            ULONG VmDeleted:1;                                              //0x240
            ULONG OutswapEnabled:1;                                         //0x240
            ULONG Outswapped:1;                                             //0x240
            ULONG ForkFailed:1;                                             //0x240
            ULONG Wow64VaSpace4Gb:1;                                        //0x240
            ULONG AddressSpaceInitialized:2;                                //0x240
            ULONG SetTimerResolution:1;                                     //0x240
            ULONG BreakOnTermination:1;                                     //0x240
            ULONG SessionCreationUnderway:1;                                //0x240
            ULONG WriteWatch:1;                                             //0x240
            ULONG ProcessInSession:1;                                       //0x240
            ULONG OverrideAddressSpace:1;                                   //0x240
            ULONG HasAddressSpace:1;                                        //0x240
            ULONG LaunchPrefetched:1;                                       //0x240
            ULONG InjectInpageErrors:1;                                     //0x240
            ULONG VmTopDown:1;                                              //0x240
            ULONG ImageNotifyDone:1;                                        //0x240
            ULONG PdeUpdateNeeded:1;                                        //0x240
            ULONG VdmAllowed:1;                                             //0x240
            ULONG SmapAllowed:1;                                            //0x240
            ULONG CreateFailed:1;                                           //0x240
            ULONG DefaultIoPriority:3;                                      //0x240
            ULONG Spare1:1;                                                 //0x240
            ULONG Spare2:1;                                                 //0x240
        };
    };
    LONG ExitStatus;                                                        //0x244
    USHORT NextPageColor;                                                   //0x248
    union
    {
        struct
        {
            UCHAR SubSystemMinorVersion;                                    //0x24a
            UCHAR SubSystemMajorVersion;                                    //0x24b
        };
        USHORT SubSystemVersion;                                            //0x24a
    };
    UCHAR PriorityClass;                                                    //0x24c
    struct _MM_AVL_TABLE VadRoot;                                           //0x250
    ULONG Cookie;                                                           //0x270
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
// _SEGMENT

