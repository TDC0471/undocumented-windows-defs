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

//0x430 bytes (sizeof)
struct _ESERVERSILO_GLOBALS
{
    struct _OBP_SILODRIVERSTATE ObSiloState;                                //0x0
    struct _SEP_SILOSTATE SeSiloState;                                      //0x2e0
    struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;                      //0x300
    struct _ETW_SILODRIVERSTATE* EtwSiloState;                              //0x350
    struct _EPROCESS* MiSessionLeaderProcess;                               //0x358
    struct _EPROCESS* ExpDefaultErrorPortProcess;                           //0x360
    VOID* ExpDefaultErrorPort;                                              //0x368
    ULONG HardErrorState;                                                   //0x370
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x378
    VOID* ApiSetSection;                                                    //0x3b0
    VOID* ApiSetSchema;                                                     //0x3b8
    UCHAR OneCoreForwardersEnabled;                                         //0x3c0
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x3c8
    struct _PSP_STORAGE* Storage;                                           //0x3d8
    enum _SERVERSILO_STATE State;                                           //0x3e0
    LONG ExitStatus;                                                        //0x3e4
    struct _KEVENT* DeleteEvent;                                            //0x3e8
    struct _SILO_USER_SHARED_DATA UserSharedData;                           //0x3f0
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x410
};
/* Used in */
// _EJOB

