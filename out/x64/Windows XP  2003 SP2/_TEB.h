#pragma once
/* ------------------ */

#include <_NT_TIB.h>
#include <_CLIENT_ID.h>
#include <_PEB.h>
#include <_ACTIVATION_CONTEXT_STACK.h>
#include <_GDI_TEB_BATCH.h>
#include <_UNICODE_STRING.h>
#include <_LIST_ENTRY.h>
#include <_TEB_ACTIVE_FRAME.h>

//0x17d8 bytes (sizeof)
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
    VOID* SystemReserved1[54];                                              //0x110
    LONG ExceptionCode;                                                     //0x2c0
    struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;        //0x2c8
    UCHAR SpareBytes1[28];                                                  //0x2d0
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
    struct _UNICODE_STRING StaticUnicodeString;                             //0x1258
    USHORT StaticUnicodeBuffer[261];                                        //0x1268
    VOID* DeallocationStack;                                                //0x1478
    VOID* TlsSlots[64];                                                     //0x1480
    struct _LIST_ENTRY TlsLinks;                                            //0x1680
    VOID* Vdm;                                                              //0x1690
    VOID* ReservedForNtRpc;                                                 //0x1698
    VOID* DbgSsReserved[2];                                                 //0x16a0
    ULONG HardErrorMode;                                                    //0x16b0
    VOID* Instrumentation[14];                                              //0x16b8
    VOID* SubProcessTag;                                                    //0x1728
    VOID* EtwTraceData;                                                     //0x1730
    VOID* WinSockData;                                                      //0x1738
    ULONG GdiBatchCount;                                                    //0x1740
    UCHAR InDbgPrint;                                                       //0x1744
    UCHAR FreeStackOnTermination;                                           //0x1745
    UCHAR HasFiberData;                                                     //0x1746
    UCHAR IdealProcessor;                                                   //0x1747
    ULONG GuaranteedStackBytes;                                             //0x1748
    VOID* ReservedForPerf;                                                  //0x1750
    VOID* ReservedForOle;                                                   //0x1758
    ULONG WaitingOnLoaderLock;                                              //0x1760
    ULONGLONG SparePointer1;                                                //0x1768
    ULONGLONG SoftPatchPtr1;                                                //0x1770
    ULONGLONG SoftPatchPtr2;                                                //0x1778
    VOID** TlsExpansionSlots;                                               //0x1780
    VOID* DeallocationBStore;                                               //0x1788
    VOID* BStoreLimit;                                                      //0x1790
    ULONG ImpersonationLocale;                                              //0x1798
    ULONG IsImpersonating;                                                  //0x179c
    VOID* NlsCache;                                                         //0x17a0
    VOID* pShimData;                                                        //0x17a8
    ULONG HeapVirtualAffinity;                                              //0x17b0
    VOID* CurrentTransactionHandle;                                         //0x17b8
    struct _TEB_ACTIVE_FRAME* ActiveFrame;                                  //0x17c0
    VOID* FlsData;                                                          //0x17c8
    UCHAR SafeThunkCall;                                                    //0x17d0
    UCHAR BooleanSpare[3];                                                  //0x17d1
};
