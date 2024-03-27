#pragma once
/* ------------------ */

#include <_NT_TIB32.h>
#include <_CLIENT_ID32.h>
#include <_GDI_TEB_BATCH32.h>
#include <_STRING32.h>
#include <LIST_ENTRY32.h>
#include <_GUID.h>
#include <_PROCESSOR_NUMBER.h>

//0x1000 bytes (sizeof)
struct _TEB32
{
    struct _NT_TIB32 NtTib;                                                 //0x0
    ULONG EnvironmentPointer;                                               //0x1c
    struct _CLIENT_ID32 ClientId;                                           //0x20
    ULONG ActiveRpcHandle;                                                  //0x28
    ULONG ThreadLocalStoragePointer;                                        //0x2c
    ULONG ProcessEnvironmentBlock;                                          //0x30
    ULONG LastErrorValue;                                                   //0x34
    ULONG CountOfOwnedCriticalSections;                                     //0x38
    ULONG CsrClientThread;                                                  //0x3c
    ULONG Win32ThreadInfo;                                                  //0x40
    ULONG User32Reserved[26];                                               //0x44
    ULONG UserReserved[5];                                                  //0xac
    ULONG WOW32Reserved;                                                    //0xc0
    ULONG CurrentLocale;                                                    //0xc4
    ULONG FpSoftwareStatusRegister;                                         //0xc8
    ULONG ReservedForDebuggerInstrumentation[16];                           //0xcc
    ULONG SystemReserved1[36];                                              //0x10c
    UCHAR WorkingOnBehalfTicket[8];                                         //0x19c
    LONG ExceptionCode;                                                     //0x1a4
    ULONG ActivationContextStackPointer;                                    //0x1a8
    ULONG InstrumentationCallbackSp;                                        //0x1ac
    ULONG InstrumentationCallbackPreviousPc;                                //0x1b0
    ULONG InstrumentationCallbackPreviousSp;                                //0x1b4
    UCHAR InstrumentationCallbackDisabled;                                  //0x1b8
    UCHAR SpareBytes[23];                                                   //0x1b9
    ULONG TxFsContext;                                                      //0x1d0
    struct _GDI_TEB_BATCH32 GdiTebBatch;                                    //0x1d4
    struct _CLIENT_ID32 RealClientId;                                       //0x6b4
    ULONG GdiCachedProcessHandle;                                           //0x6bc
    ULONG GdiClientPID;                                                     //0x6c0
    ULONG GdiClientTID;                                                     //0x6c4
    ULONG GdiThreadLocalInfo;                                               //0x6c8
    ULONG Win32ClientInfo[62];                                              //0x6cc
    ULONG glDispatchTable[233];                                             //0x7c4
    ULONG glReserved1[29];                                                  //0xb68
    ULONG glReserved2;                                                      //0xbdc
    ULONG glSectionInfo;                                                    //0xbe0
    ULONG glSection;                                                        //0xbe4
    ULONG glTable;                                                          //0xbe8
    ULONG glCurrentRC;                                                      //0xbec
    ULONG glContext;                                                        //0xbf0
    ULONG LastStatusValue;                                                  //0xbf4
    struct _STRING32 StaticUnicodeString;                                   //0xbf8
    WCHAR StaticUnicodeBuffer[261];                                         //0xc00
    ULONG DeallocationStack;                                                //0xe0c
    ULONG TlsSlots[64];                                                     //0xe10
    struct LIST_ENTRY32 TlsLinks;                                           //0xf10
    ULONG Vdm;                                                              //0xf18
    ULONG ReservedForNtRpc;                                                 //0xf1c
    ULONG DbgSsReserved[2];                                                 //0xf20
    ULONG HardErrorMode;                                                    //0xf28
    ULONG Instrumentation[9];                                               //0xf2c
    struct _GUID ActivityId;                                                //0xf50
    ULONG SubProcessTag;                                                    //0xf60
    ULONG PerflibData;                                                      //0xf64
    ULONG EtwTraceData;                                                     //0xf68
    ULONG WinSockData;                                                      //0xf6c
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
    ULONG ReservedForPerf;                                                  //0xf7c
    ULONG ReservedForOle;                                                   //0xf80
    ULONG WaitingOnLoaderLock;                                              //0xf84
    ULONG SavedPriorityState;                                               //0xf88
    ULONG ReservedForCodeCoverage;                                          //0xf8c
    ULONG ThreadPoolData;                                                   //0xf90
    ULONG TlsExpansionSlots;                                                //0xf94
    ULONG MuiGeneration;                                                    //0xf98
    ULONG IsImpersonating;                                                  //0xf9c
    ULONG NlsCache;                                                         //0xfa0
    ULONG pShimData;                                                        //0xfa4
    USHORT HeapVirtualAffinity;                                             //0xfa8
    USHORT LowFragHeapDataSlot;                                             //0xfaa
    ULONG CurrentTransactionHandle;                                         //0xfac
    ULONG ActiveFrame;                                                      //0xfb0
    ULONG FlsData;                                                          //0xfb4
    ULONG PreferredLanguages;                                               //0xfb8
    ULONG UserPrefLanguages;                                                //0xfbc
    ULONG MergedPrefLanguages;                                              //0xfc0
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
            USHORT SpareSameTebBits:2;                                      //0xfca
        };
    };
    ULONG TxnScopeEnterCallback;                                            //0xfcc
    ULONG TxnScopeExitCallback;                                             //0xfd0
    ULONG TxnScopeContext;                                                  //0xfd4
    ULONG LockCount;                                                        //0xfd8
    LONG WowTebOffset;                                                      //0xfdc
    ULONG ResourceRetValue;                                                 //0xfe0
    ULONG ReservedForWdf;                                                   //0xfe4
    ULONGLONG ReservedForCrt;                                               //0xfe8
    struct _GUID EffectiveContainerId;                                      //0xff0
};
