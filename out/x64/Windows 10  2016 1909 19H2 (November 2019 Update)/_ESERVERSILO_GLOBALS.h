#pragma once
/* ------------------ */

#include <_OBP_SILODRIVERSTATE.h>
#include <_SEP_SILOSTATE.h>
#include <_SEP_RM_LSA_CONNECTION_STATE.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_EPROCESS.h>
#include <_WNF_SILODRIVERSTATE.h>
#include <_DBGK_SILOSTATE.h>
#include <_UNICODE_STRING.h>
#include <_PSP_STORAGE.h>
#include <_SERVERSILO_STATE.h>
#include <_KEVENT.h>
#include <_SILO_USER_SHARED_DATA.h>
#include <_WORK_QUEUE_ITEM.h>

//0x480 bytes (sizeof)
struct _ESERVERSILO_GLOBALS
{
    struct _OBP_SILODRIVERSTATE ObSiloState;                                //0x0
    struct _SEP_SILOSTATE SeSiloState;                                      //0x2e0
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;                      //0x310
    struct _ETW_SILODRIVERSTATE* EtwSiloState;                              //0x360
    struct _EPROCESS* MiSessionLeaderProcess;                               //0x368
    struct _EPROCESS* ExpDefaultErrorPortProcess;                           //0x370
    VOID* ExpDefaultErrorPort;                                              //0x378
    ULONG HardErrorState;                                                   //0x380
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x388
    struct _DBGK_SILOSTATE DbgkSiloState;                                   //0x3c0
    struct _UNICODE_STRING PsProtectedCurrentDirectory;                     //0x3e0
    struct _UNICODE_STRING PsProtectedEnvironment;                          //0x3f0
    VOID* ApiSetSection;                                                    //0x400
    VOID* ApiSetSchema;                                                     //0x408
    UCHAR OneCoreForwardersEnabled;                                         //0x410
    struct _UNICODE_STRING NtSystemRoot;                                    //0x418
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x428
    struct _PSP_STORAGE* Storage;                                           //0x438
    enum _SERVERSILO_STATE State;                                           //0x440
    LONG ExitStatus;                                                        //0x444
    struct _KEVENT* DeleteEvent;                                            //0x448
    struct _SILO_USER_SHARED_DATA* UserSharedData;                          //0x450
    VOID* UserSharedSection;                                                //0x458
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x460
};
/* Used in */
// _EJOB
// _ETW_SILODRIVERSTATE

