#pragma once
/* ------------------ */

#include <_KALPC_SECURITY_DATA.h>
#include <_KALPC_VIEW.h>
#include <_KALPC_HANDLE_DATA.h>
#include <_KALPC_DIRECT_EVENT.h>
#include <_KALPC_WORK_ON_BEHALF_DATA.h>

//0x28 bytes (sizeof)
struct _KALPC_MESSAGE_ATTRIBUTES
{
    VOID* ClientContext;                                                    //0x0
    VOID* ServerContext;                                                    //0x4
    VOID* PortContext;                                                      //0x8
    VOID* CancelPortContext;                                                //0xc
    struct _KALPC_SECURITY_DATA* SecurityData;                              //0x10
    struct _KALPC_VIEW* View;                                               //0x14
    struct _KALPC_HANDLE_DATA* HandleData;                                  //0x18
    union _KALPC_DIRECT_EVENT DirectEvent;                                  //0x1c
    struct _KALPC_WORK_ON_BEHALF_DATA WorkOnBehalfData;                     //0x20
};
/* Used in */
// _KALPC_MESSAGE

