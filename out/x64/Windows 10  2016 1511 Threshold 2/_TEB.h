#pragma once
/* ------------------ */

#include <_NT_TIB.h>
#include <_CLIENT_ID.h>
#include <_PEB.h>
#include <_ACTIVATION_CONTEXT_STACK.h>
#include <_GDI_TEB_BATCH.h>
#include <_UNICODE_STRING.h>
#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_PROCESSOR_NUMBER.h>
#include <_TEB_ACTIVE_FRAME.h>

//0x1838 bytes (sizeof)
struct _TEB
{
    struct _NT_TIB NtTib;                                                   //0x0
    VOID* EnvironmentPointer;                                               //0x38
    struct _CLIENT_ID ClientId;                                             //0x40
    VOID* ActiveRpcHandle;                                                  //0x50
    VOID* ThreadLocalStoragePointer;                                        //0x58
    struct _PEB* ProcessEnvironmentBlock;                                   //0x60
    ULONG LastErrorValue;                                                   //0x68
    ULONG CountOfOwnedCriticalSections;                                     //0x6c
    VOID* CsrClientThread;                                                  //0x70
    VOID* Win32ThreadInfo;                                                  //0x78
    ULONG User32Reserved[26];                                               //0x80
    ULONG UserReserved[5];                                                  //0xe8
    VOID* WOW32Reserved;                                                    //0x100
    ULONG CurrentLocale;                                                    //0x108
    ULONG FpSoftwareStatusRegister;                                         //0x10c
    VOID* ReservedForDebuggerInstrumentation[16];                           //0x110
    VOID* SystemReserved1[38];                                              //0x190
    LONG ExceptionCode;                                                     //0x2c0
    UCHAR Padding0[4];                                                      //0x2c4
    struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;        //0x2c8
    ULONGLONG InstrumentationCallbackSp;                                    //0x2d0
    ULONGLONG InstrumentationCallbackPreviousPc;                            //0x2d8
    ULONGLONG InstrumentationCallbackPreviousSp;                            //0x2e0
    ULONG TxFsContext;                                                      //0x2e8
    UCHAR InstrumentationCallbackDisabled;                                  //0x2ec
    UCHAR Padding1[3];                                                      //0x2ed
    struct _GDI_TEB_BATCH GdiTebBatch;                                      //0x2f0
    struct _CLIENT_ID RealClientId;                                         //0x7d8
    VOID* GdiCachedProcessHandle;                                           //0x7e8
    ULONG GdiClientPID;                                                     //0x7f0
    ULONG GdiClientTID;                                                     //0x7f4
    VOID* GdiThreadLocalInfo;                                               //0x7f8
    ULONGLONG Win32ClientInfo[62];                                          //0x800
    VOID* glDispatchTable[233];                                             //0x9f0
    ULONGLONG glReserved1[29];                                              //0x1138
    VOID* glReserved2;                                                      //0x1220
    VOID* glSectionInfo;                                                    //0x1228
    VOID* glSection;                                                        //0x1230
    VOID* glTable;                                                          //0x1238
    VOID* glCurrentRC;                                                      //0x1240
    VOID* glContext;                                                        //0x1248
    ULONG LastStatusValue;                                                  //0x1250
    UCHAR Padding2[4];                                                      //0x1254
    struct _UNICODE_STRING StaticUnicodeString;                             //0x1258
    WCHAR StaticUnicodeBuffer[261];                                         //0x1268
    UCHAR Padding3[6];                                                      //0x1472
    VOID* DeallocationStack;                                                //0x1478
    VOID* TlsSlots[64];                                                     //0x1480
    struct _LIST_ENTRY TlsLinks;                                            //0x1680
    VOID* Vdm;                                                              //0x1690
    VOID* ReservedForNtRpc;                                                 //0x1698
    VOID* DbgSsReserved[2];                                                 //0x16a0
    ULONG HardErrorMode;                                                    //0x16b0
    UCHAR Padding4[4];                                                      //0x16b4
    VOID* Instrumentation[11];                                              //0x16b8
    struct _GUID ActivityId;                                                //0x1710
    VOID* SubProcessTag;                                                    //0x1720
    VOID* PerflibData;                                                      //0x1728
    VOID* EtwTraceData;                                                     //0x1730
    VOID* WinSockData;                                                      //0x1738
    ULONG GdiBatchCount;                                                    //0x1740
    union
    {
        struct _PROCESSOR_NUMBER CurrentIdealProcessor;                     //0x1744
        ULONG IdealProcessorValue;                                          //0x1744
        struct
        {
            UCHAR ReservedPad0;                                             //0x1744
            UCHAR ReservedPad1;                                             //0x1745
            UCHAR ReservedPad2;                                             //0x1746
            UCHAR IdealProcessor;                                           //0x1747
        };
    };
    ULONG GuaranteedStackBytes;                                             //0x1748
    UCHAR Padding5[4];                                                      //0x174c
    VOID* ReservedForPerf;                                                  //0x1750
    VOID* ReservedForOle;                                                   //0x1758
    ULONG WaitingOnLoaderLock;                                              //0x1760
    UCHAR Padding6[4];                                                      //0x1764
    VOID* SavedPriorityState;                                               //0x1768
    ULONGLONG ReservedForCodeCoverage;                                      //0x1770
    VOID* ThreadPoolData;                                                   //0x1778
    VOID** TlsExpansionSlots;                                               //0x1780
    VOID* DeallocationBStore;                                               //0x1788
    VOID* BStoreLimit;                                                      //0x1790
    ULONG MuiGeneration;                                                    //0x1798
    ULONG IsImpersonating;                                                  //0x179c
    VOID* NlsCache;                                                         //0x17a0
    VOID* pShimData;                                                        //0x17a8
    USHORT HeapVirtualAffinity;                                             //0x17b0
    USHORT LowFragHeapDataSlot;                                             //0x17b2
    UCHAR Padding7[4];                                                      //0x17b4
    VOID* CurrentTransactionHandle;                                         //0x17b8
    struct _TEB_ACTIVE_FRAME* ActiveFrame;                                  //0x17c0
    VOID* FlsData;                                                          //0x17c8
    VOID* PreferredLanguages;                                               //0x17d0
    VOID* UserPrefLanguages;                                                //0x17d8
    VOID* MergedPrefLanguages;                                              //0x17e0
    ULONG MuiImpersonation;                                                 //0x17e8
    union
    {
        volatile USHORT CrossTebFlags;                                      //0x17ec
        USHORT SpareCrossTebBits:16;                                        //0x17ec
    };
    union
    {
        USHORT SameTebFlags;                                                //0x17ee
        struct
        {
            USHORT SafeThunkCall:1;                                         //0x17ee
            USHORT InDebugPrint:1;                                          //0x17ee
            USHORT HasFiberData:1;                                          //0x17ee
            USHORT SkipThreadAttach:1;                                      //0x17ee
            USHORT WerInShipAssertCode:1;                                   //0x17ee
            USHORT RanProcessInit:1;                                        //0x17ee
            USHORT ClonedThread:1;                                          //0x17ee
            USHORT SuppressDebugMsg:1;                                      //0x17ee
            USHORT DisableUserStackWalk:1;                                  //0x17ee
            USHORT RtlExceptionAttached:1;                                  //0x17ee
            USHORT InitialThread:1;                                         //0x17ee
            USHORT SessionAware:1;                                          //0x17ee
            USHORT LoadOwner:1;                                             //0x17ee
            USHORT LoaderWorker:1;                                          //0x17ee
            USHORT SpareSameTebBits:2;                                      //0x17ee
        };
    };
    VOID* TxnScopeEnterCallback;                                            //0x17f0
    VOID* TxnScopeExitCallback;                                             //0x17f8
    VOID* TxnScopeContext;                                                  //0x1800
    ULONG LockCount;                                                        //0x1808
    LONG WowTebOffset;                                                      //0x180c
    VOID* ResourceRetValue;                                                 //0x1810
    VOID* ReservedForWdf;                                                   //0x1818
    ULONGLONG ReservedForCrt;                                               //0x1820
    struct _GUID EffectiveContainerId;                                      //0x1828
};
