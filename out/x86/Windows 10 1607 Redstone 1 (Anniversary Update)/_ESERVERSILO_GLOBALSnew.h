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

//0x288 bytes (sizeof)
struct _ESERVERSILO_GLOBALS
{
    struct _OBP_SILODRIVERSTATE ObSiloState;                                //0x0
    struct _SEP_SILOSTATE SeSiloState;                                      //0x1a4
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;                      //0x1b8
    struct _ETW_SILODRIVERSTATE* EtwSiloState;                              //0x1e8
    struct _EPROCESS* MiSessionLeaderProcess;                               //0x1ec
    struct _EPROCESS* ExpDefaultErrorPortProcess;                           //0x1f0
    VOID* ExpDefaultErrorPort;                                              //0x1f4
    ULONG HardErrorState;                                                   //0x1f8
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x200
    VOID* ApiSetSection;                                                    //0x230
    VOID* ApiSetSchema;                                                     //0x234
    UCHAR OneCoreForwardersEnabled;                                         //0x238
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x23c
    struct _PSP_STORAGE* Storage;                                           //0x244
    enum _SERVERSILO_STATE State;                                           //0x248
    LONG ExitStatus;                                                        //0x24c
    struct _KEVENT* DeleteEvent;                                            //0x250
    struct _SILO_USER_SHARED_DATA UserSharedData;                           //0x258
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x278
};
/* Used in */
// _EJOB

