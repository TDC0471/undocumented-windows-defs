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
#include <_NLS_STATE.h>
#include <_RTL_NLS_STATE.h>
#include <_EX_TIMEZONE_STATE.h>
#include <_PSP_STORAGE.h>
#include <_SERVERSILO_STATE.h>
#include <_KEVENT.h>
#include <_SILO_USER_SHARED_DATA.h>
#include <_WORK_QUEUE_ITEM.h>

//0x560 bytes (sizeof)
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
    struct _EXP_LICENSE_STATE* ExpLicenseState;                             //0x388
    struct _WNF_SILODRIVERSTATE WnfSiloState;                               //0x390
    struct _DBGK_SILOSTATE DbgkSiloState;                                   //0x3c8
    struct _UNICODE_STRING PsProtectedCurrentDirectory;                     //0x3e8
    struct _UNICODE_STRING PsProtectedEnvironment;                          //0x3f8
    VOID* ApiSetSection;                                                    //0x408
    VOID* ApiSetSchema;                                                     //0x410
    UCHAR OneCoreForwardersEnabled;                                         //0x418
    struct _NLS_STATE* NlsState;                                            //0x420
    struct _RTL_NLS_STATE RtlNlsState;                                      //0x428
    VOID* ImgFileExecOptions;                                               //0x4e0
    struct _EX_TIMEZONE_STATE* ExTimeZoneState;                             //0x4e8
    struct _UNICODE_STRING NtSystemRoot;                                    //0x4f0
    struct _UNICODE_STRING SiloRootDirectoryName;                           //0x500
    struct _PSP_STORAGE* Storage;                                           //0x510
    enum _SERVERSILO_STATE State;                                           //0x518
    LONG ExitStatus;                                                        //0x51c
    struct _KEVENT* DeleteEvent;                                            //0x520
    struct _SILO_USER_SHARED_DATA* UserSharedData;                          //0x528
    VOID* UserSharedSection;                                                //0x530
    struct _WORK_QUEUE_ITEM TerminateWorkItem;                              //0x538
    UCHAR IsDownlevelContainer;                                             //0x558
};
/* Used in */
// _EJOB
// _ETW_SILODRIVERSTATE

