#pragma once
/* ------------------ */

#include <_NT_TIB64.h>
#include <_CLIENT_ID64.h>
#include <_GDI_TEB_BATCH64.h>
#include <_STRING64.h>
#include <LIST_ENTRY64.h>
#include <_GUID.h>
#include <_PROCESSOR_NUMBER.h>

//0x1818 bytes (sizeof)
struct _TEB64
{
    struct _NT_TIB64 NtTib;                                                 //0x0
    ULONGLONG EnvironmentPointer;                                           //0x38
    struct _CLIENT_ID64 ClientId;                                           //0x40
    ULONGLONG ActiveRpcHandle;                                              //0x50
    ULONGLONG ThreadLocalStoragePointer;                                    //0x58
    ULONGLONG ProcessEnvironmentBlock;                                      //0x60
    ULONG LastErrorValue;                                                   //0x68
    ULONG CountOfOwnedCriticalSections;                                     //0x6c
    ULONGLONG CsrClientThread;                                              //0x70
    ULONGLONG Win32ThreadInfo;                                              //0x78
    ULONG User32Reserved[26];                                               //0x80
    ULONG UserReserved[5];                                                  //0xe8
    ULONGLONG WOW32Reserved;                                                //0x100
    ULONG CurrentLocale;                                                    //0x108
    ULONG FpSoftwareStatusRegister;                                         //0x10c
    ULONGLONG SystemReserved1[54];                                          //0x110
    LONG ExceptionCode;                                                     //0x2c0
    ULONGLONG ActivationContextStackPointer;                                //0x2c8
    UCHAR SpareBytes[24];                                                   //0x2d0
    ULONG TxFsContext;                                                      //0x2e8
    struct _GDI_TEB_BATCH64 GdiTebBatch;                                    //0x2f0
    struct _CLIENT_ID64 RealClientId;                                       //0x7d8
    ULONGLONG GdiCachedProcessHandle;                                       //0x7e8
    ULONG GdiClientPID;                                                     //0x7f0
    ULONG GdiClientTID;                                                     //0x7f4
    ULONGLONG GdiThreadLocalInfo;                                           //0x7f8
    ULONGLONG Win32ClientInfo[62];                                          //0x800
    ULONGLONG glDispatchTable[233];                                         //0x9f0
    ULONGLONG glReserved1[29];                                              //0x1138
    ULONGLONG glReserved2;                                                  //0x1220
    ULONGLONG glSectionInfo;                                                //0x1228
    ULONGLONG glSection;                                                    //0x1230
    ULONGLONG glTable;                                                      //0x1238
    ULONGLONG glCurrentRC;                                                  //0x1240
    ULONGLONG glContext;                                                    //0x1248
    ULONG LastStatusValue;                                                  //0x1250
    struct _STRING64 StaticUnicodeString;                                   //0x1258
    WCHAR StaticUnicodeBuffer[261];                                         //0x1268
    ULONGLONG DeallocationStack;                                            //0x1478
    ULONGLONG TlsSlots[64];                                                 //0x1480
    struct LIST_ENTRY64 TlsLinks;                                           //0x1680
    ULONGLONG Vdm;                                                          //0x1690
    ULONGLONG ReservedForNtRpc;                                             //0x1698
    ULONGLONG DbgSsReserved[2];                                             //0x16a0
    ULONG HardErrorMode;                                                    //0x16b0
    ULONGLONG Instrumentation[11];                                          //0x16b8
    struct _GUID ActivityId;                                                //0x1710
    ULONGLONG SubProcessTag;                                                //0x1720
    ULONGLONG EtwLocalData;                                                 //0x1728
    ULONGLONG EtwTraceData;                                                 //0x1730
    ULONGLONG WinSockData;                                                  //0x1738
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
    ULONGLONG ReservedForPerf;                                              //0x1750
    ULONGLONG ReservedForOle;                                               //0x1758
    ULONG WaitingOnLoaderLock;                                              //0x1760
    ULONGLONG SavedPriorityState;                                           //0x1768
    ULONGLONG SoftPatchPtr1;                                                //0x1770
    ULONGLONG ThreadPoolData;                                               //0x1778
    ULONGLONG TlsExpansionSlots;                                            //0x1780
    ULONGLONG DeallocationBStore;                                           //0x1788
    ULONGLONG BStoreLimit;                                                  //0x1790
    ULONG MuiGeneration;                                                    //0x1798
    ULONG IsImpersonating;                                                  //0x179c
    ULONGLONG NlsCache;                                                     //0x17a0
    ULONGLONG pShimData;                                                    //0x17a8
    ULONG HeapVirtualAffinity;                                              //0x17b0
    ULONGLONG CurrentTransactionHandle;                                     //0x17b8
    ULONGLONG ActiveFrame;                                                  //0x17c0
    ULONGLONG FlsData;                                                      //0x17c8
    ULONGLONG PreferredLanguages;                                           //0x17d0
    ULONGLONG UserPrefLanguages;                                            //0x17d8
    ULONGLONG MergedPrefLanguages;                                          //0x17e0
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
            USHORT SpareSameTebBits:5;                                      //0x17ee
        };
    };
    ULONGLONG TxnScopeEnterCallback;                                        //0x17f0
    ULONGLONG TxnScopeExitCallback;                                         //0x17f8
    ULONGLONG TxnScopeContext;                                              //0x1800
    ULONG LockCount;                                                        //0x1808
    ULONG SpareUlong0;                                                      //0x180c
    ULONGLONG ResourceRetValue;                                             //0x1810
};