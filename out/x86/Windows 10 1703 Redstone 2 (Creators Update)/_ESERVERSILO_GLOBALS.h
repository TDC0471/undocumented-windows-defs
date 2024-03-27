#pragma once
/* ------------------ */

#include <_OBP_SILODRIVERSTATE.h>
#include <_SEP_SILOSTATE.h>
#include <_SEP_RM_LSA_CONNECTION_STATE.h>
#include <_ETW_SILODRIVERSTATE.h>
#include <_EPROCESS.h>
#include <_WNF_SILODRIVERSTATE.h>
#include <_UNICODE_STRING.h>
#include <_PSP_STORAGE.h>
#include <_SERVERSILO_STATE.h>
#include <_KEVENT.h>
#include <_SILO_USER_SHARED_DATA.h>
#include <_WORK_QUEUE_ITEM.h>

//0x290 bytes (sizeof)
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
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x208
    struct _UNICODE_STRING PsProtectedCurrentDirectory;                     //0x238
    struct _UNICODE_STRING PsProtectedEnvironment;                          //0x240
    VOID* ApiSetSection;                                                    //0x248
    VOID* ApiSetSchema;                                                     //0x24c
    UCHAR OneCoreForwardersEnabled;                                         //0x250
    struct _UNICODE_STRING NtSystemRoot;                                    //0x254
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x25c
    struct _PSP_STORAGE* Storage;                                           //0x264
    enum _SERVERSILO_STATE State;                                           //0x268
    LONG ExitStatus;                                                        //0x26c
    struct _KEVENT* DeleteEvent;                                            //0x270
    struct _SILO_USER_SHARED_DATA* UserSharedData;                          //0x274
    VOID* UserSharedSection;                                                //0x278
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x27c
};
/* Used in */
// _EJOB
// _ETW_SILODRIVERSTATE

