#pragma once
/* ------------------ */


//0xa8 bytes (sizeof)
struct _PS_NTDLL_EXPORTS
{
    VOID* LdrSystemDllInitBlock;                                            //0x0
    VOID* LdrInitializeThunk;                                               //0x8
    VOID* RtlUserThreadStart;                                               //0x10
    VOID* RtlUserFiberStart;                                                //0x18
    VOID* KiUserExceptionDispatcher;                                        //0x20
    VOID* KiUserApcDispatcher;                                              //0x28
    VOID* KiUserCallbackDispatcher;                                         //0x30
    VOID* KiUserCallbackDispatcherReturn;                                   //0x38
    VOID* KiRaiseUserExceptionDispatcher;                                   //0x40
    VOID* ExpInterlockedPopEntrySListEnd;                                   //0x48
    VOID* ExpInterlockedPopEntrySListFault;                                 //0x50
    VOID* ExpInterlockedPopEntrySListResume;                                //0x58
    VOID* RtlpFreezeTimeBias;                                               //0x60
    VOID* KiUserInvertedFunctionTable;                                      //0x68
    VOID* WerReportExceptionWorker;                                         //0x70
    VOID* RtlCallEnclaveReturn;                                             //0x78
    VOID* RtlEnclaveCallDispatch;                                           //0x80
    VOID* RtlEnclaveCallDispatchReturn;                                     //0x88
    VOID* RtlRaiseExceptionForReturnAddressHijack;                          //0x90
    VOID* KiUserEmulationDispatcher;                                        //0x98
    VOID* LdrHotPatchNotify;                                                //0xa0
};
