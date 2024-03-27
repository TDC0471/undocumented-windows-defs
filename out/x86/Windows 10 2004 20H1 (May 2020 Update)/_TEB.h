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

//0x1000 bytes (sizeof)
struct _TEB
{
    struct _NT_TIB NtTib;                                                   //0x0
    VOID* EnvironmentPointer;                                               //0x1c
    struct _CLIENT_ID ClientId;                                             //0x20
    VOID* ActiveRpcHandle;                                                  //0x28
    VOID* ThreadLocalStoragePointer;                                        //0x2c
    struct _PEB* ProcessEnvironmentBlock;                                   //0x30
    ULONG LastErrorValue;                                                   //0x34
    ULONG CountOfOwnedCriticalSections;                                     //0x38
    VOID* CsrClientThread;                                                  //0x3c
    VOID* Win32ThreadInfo;                                                  //0x40
    ULONG User32Reserved[26];                                               //0x44
    ULONG UserReserved[5];                                                  //0xac
    VOID* WOW32Reserved;                                                    //0xc0
    ULONG CurrentLocale;                                                    //0xc4
    ULONG FpSoftwareStatusRegister;                                         //0xc8
    VOID* ReservedForDebuggerInstrumentation[16];                           //0xcc
    VOID* SystemReserved1[26];                                              //0x10c
    CHAR PlaceholderCompatibilityMode;                                      //0x174
    UCHAR PlaceholderHydrationAlwaysExplicit;                               //0x175
    CHAR PlaceholderReserved[10];                                           //0x176
    ULONG ProxiedProcessId;                                                 //0x180
    struct _ACTIVATION_CONTEXT_STACK _ActivationStack;                      //0x184
    UCHAR WorkingOnBehalfTicket[8];                                         //0x19c
    LONG ExceptionCode;                                                     //0x1a4
    struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;        //0x1a8
    ULONG InstrumentationCallbackSp;                                        //0x1ac
    ULONG InstrumentationCallbackPreviousPc;                                //0x1b0
    ULONG InstrumentationCallbackPreviousSp;                                //0x1b4
    UCHAR InstrumentationCallbackDisabled;                                  //0x1b8
    UCHAR SpareBytes[23];                                                   //0x1b9
    ULONG TxFsContext;                                                      //0x1d0
    struct _GDI_TEB_BATCH GdiTebBatch;                                      //0x1d4
    struct _CLIENT_ID RealClientId;                                         //0x6b4
    VOID* GdiCachedProcessHandle;                                           //0x6bc
    ULONG GdiClientPID;                                                     //0x6c0
    ULONG GdiClientTID;                                                     //0x6c4
    VOID* GdiThreadLocalInfo;                                               //0x6c8
    ULONG Win32ClientInfo[62];                                              //0x6cc
    VOID* glDispatchTable[233];                                             //0x7c4
    ULONG glReserved1[29];                                                  //0xb68
    VOID* glReserved2;                                                      //0xbdc
    VOID* glSectionInfo;                                                    //0xbe0
    VOID* glSection;                                                        //0xbe4
    VOID* glTable;                                                          //0xbe8
    VOID* glCurrentRC;                                                      //0xbec
    VOID* glContext;                                                        //0xbf0
    ULONG LastStatusValue;                                                  //0xbf4
    struct _UNICODE_STRING StaticUnicodeString;                             //0xbf8
    WCHAR StaticUnicodeBuffer[261];                                         //0xc00
    VOID* DeallocationStack;                                                //0xe0c
    VOID* TlsSlots[64];                                                     //0xe10
    struct _LIST_ENTRY TlsLinks;                                            //0xf10
    VOID* Vdm;                                                              //0xf18
    VOID* ReservedForNtRpc;                                                 //0xf1c
    VOID* DbgSsReserved[2];                                                 //0xf20
    ULONG HardErrorMode;                                                    //0xf28
    VOID* Instrumentation[9];                                               //0xf2c
    struct _GUID ActivityId;                                                //0xf50
    VOID* SubProcessTag;                                                    //0xf60
    VOID* PerflibData;                                                      //0xf64
    VOID* EtwTraceData;                                                     //0xf68
    VOID* WinSockData;                                                      //0xf6c
    ULONG GdiBatchCount;                                                    //0xf70
    union
    {
        struct _PROCESSOR_NUMBER CurrentIdealProcessor;                     //0xf74
        ULONG IdealProcessorValue;                                          //0xf74
        struct
        {
            UCHAR ReservedPad0;                                             //0xf74
            UCHAR ReservedPad1;                                             //0xf75
            UCHAR ReservedPad2;                                             //0xf76
            UCHAR IdealProcessor;                                           //0xf77
        };
    };
    ULONG GuaranteedStackBytes;                                             //0xf78
    VOID* ReservedForPerf;                                                  //0xf7c
    VOID* ReservedForOle;                                                   //0xf80
    ULONG WaitingOnLoaderLock;                                              //0xf84
    VOID* SavedPriorityState;                                               //0xf88
    ULONG ReservedForCodeCoverage;                                          //0xf8c
    VOID* ThreadPoolData;                                                   //0xf90
    VOID** TlsExpansionSlots;                                               //0xf94
    ULONG MuiGeneration;                                                    //0xf98
    ULONG IsImpersonating;                                                  //0xf9c
    VOID* NlsCache;                                                         //0xfa0
    VOID* pShimData;                                                        //0xfa4
    ULONG HeapData;                                                         //0xfa8
    VOID* CurrentTransactionHandle;                                         //0xfac
    struct _TEB_ACTIVE_FRAME* ActiveFrame;                                  //0xfb0
    VOID* FlsData;                                                          //0xfb4
    VOID* PreferredLanguages;                                               //0xfb8
    VOID* UserPrefLanguages;                                                //0xfbc
    VOID* MergedPrefLanguages;                                              //0xfc0
    ULONG MuiImpersonation;                                                 //0xfc4
    union
    {
        volatile USHORT CrossTebFlags;                                      //0xfc8
        USHORT SpareCrossTebBits:16;                                        //0xfc8
    };
    union
    {
        USHORT SameTebFlags;                                                //0xfca
        struct
        {
            USHORT SafeThunkCall:1;                                         //0xfca
            USHORT InDebugPrint:1;                                          //0xfca
            USHORT HasFiberData:1;                                          //0xfca
            USHORT SkipThreadAttach:1;                                      //0xfca
            USHORT WerInShipAssertCode:1;                                   //0xfca
            USHORT RanProcessInit:1;                                        //0xfca
            USHORT ClonedThread:1;                                          //0xfca
            USHORT SuppressDebugMsg:1;                                      //0xfca
            USHORT DisableUserStackWalk:1;                                  //0xfca
            USHORT RtlExceptionAttached:1;                                  //0xfca
            USHORT InitialThread:1;                                         //0xfca
            USHORT SessionAware:1;                                          //0xfca
            USHORT LoadOwner:1;                                             //0xfca
            USHORT LoaderWorker:1;                                          //0xfca
            USHORT SkipLoaderInit:1;                                        //0xfca
            USHORT SpareSameTebBits:1;                                      //0xfca
        };
    };
    VOID* TxnScopeEnterCallback;                                            //0xfcc
    VOID* TxnScopeExitCallback;                                             //0xfd0
    VOID* TxnScopeContext;                                                  //0xfd4
    ULONG LockCount;                                                        //0xfd8
    LONG WowTebOffset;                                                      //0xfdc
    VOID* ResourceRetValue;                                                 //0xfe0
    VOID* ReservedForWdf;                                                   //0xfe4
    ULONGLONG ReservedForCrt;                                               //0xfe8
    struct _GUID EffectiveContainerId;                                      //0xff0
};
