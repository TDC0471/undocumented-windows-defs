#pragma once
/* ------------------ */

#include <_OBP_SILODRIVERSTATE.h>
#include <_SEP_SILOSTATE.h>
#include <_SEP_RM_LSA_CONNECTION_STATE.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_EPROCESS.h>
#include <_EXP_LICENSE_STATE.h>
#include <_WNF_SILODRIVERSTATE.h>
#include <_DBGK_SILOSTATE.h>
#include <_UNICODE_STRING.h>
#include <_PSP_STORAGE.h>
#include <_SERVERSILO_STATE.h>
#include <_KEVENT.h>
#include <_SILO_USER_SHARED_DATA.h>
#include <_WORK_QUEUE_ITEM.h>

//0x2a0 bytes (sizeof)
struct _ESERVERSILO_GLOBALS
{
    struct _OBP_SILODRIVERSTATE ObSiloState;                                //0x0
    struct _SEP_SILOSTATE SeSiloState;                                      //0x1a4
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;                      //0x1c0
    struct _ETW_SILODRIVERSTATE* EtwSiloState;                              //0x1f0
    struct _EPROCESS* MiSessionLeaderProcess;                               //0x1f4
    struct _EPROCESS* ExpDefaultErrorPortProcess;                           //0x1f8
    VOID* ExpDefaultErrorPort;                                              //0x1fc
    ULONG HardErrorState;                                                   //0x200
    struct _EXP_LICENSE_STATE* ExpLicenseState;                             //0x204
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x208
    struct _DBGK_SILOSTATE DbgkSiloState;                                   //0x238
    struct _UNICODE_STRING PsProtectedCurrentDirectory;                     //0x248
    struct _UNICODE_STRING PsProtectedEnvironment;                          //0x250
    VOID* ApiSetSection;                                                    //0x258
    VOID* ApiSetSchema;                                                     //0x25c
    UCHAR OneCoreForwardersEnabled;                                         //0x260
    struct _UNICODE_STRING NtSystemRoot;                                    //0x264
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x26c
    struct _PSP_STORAGE* Storage;                                           //0x274
    enum _SERVERSILO_STATE State;                                           //0x278
    LONG ExitStatus;                                                        //0x27c
    struct _KEVENT* DeleteEvent;                                            //0x280
    struct _SILO_USER_SHARED_DATA* UserSharedData;                          //0x284
    VOID* UserSharedSection;                                                //0x288
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x28c
    UCHAR IsDownlevelContainer;                                             //0x29c
};
/* Used in */
// _EJOB
// _ETW_SILODRIVERSTATE

