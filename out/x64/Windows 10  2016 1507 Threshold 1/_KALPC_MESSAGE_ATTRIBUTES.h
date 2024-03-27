#pragma once
/* ------------------ */

#include <_KALPC_SECURITY_DATA.h>
#include <_KALPC_VIEW.h>
#include <_KALPC_HANDLE_DATA.h>
#include <_KALPC_DIRECT_EVENT.h>

//0x40 bytes (sizeof)
struct _KALPC_MESSAGE_ATTRIBUTES
{
    VOID* ClientContext;                                                    //0x0
    VOID* ServerContext;                                                    //0x8
    VOID* PortContext;                                                      //0x10
    VOID* CancelPortContext;                                                //0x18
    struct _KALPC_SECURITY_DATA* SecurityData;                              //0x20
    struct _KALPC_VIEW* View;                                               //0x28
    struct _KALPC_HANDLE_DATA* HandleData;                                  //0x30
    union _KALPC_DIRECT_EVENT DirectEvent;                                  //0x38
};
/* Used in */
// _KALPC_MESSAGE

