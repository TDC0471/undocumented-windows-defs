#pragma once
/* ------------------ */

#include <_KALPC_SECURITY_DATA.h>
#include <_KALPC_VIEW.h>
#include <_KALPC_HANDLE_DATA.h>

//0x1c bytes (sizeof)
struct _KALPC_MESSAGE_ATTRIBUTES
{
    VOID* ClientContext;                                                    //0x0
    VOID* ServerContext;                                                    //0x4
    VOID* PortContext;                                                      //0x8
    VOID* CancelPortContext;                                                //0xc
    struct _KALPC_SECURITY_DATA* SecurityData;                              //0x10
    struct _KALPC_VIEW* View;                                               //0x14
    struct _KALPC_HANDLE_DATA* HandleData;                                  //0x18
};
/* Used in */
// _KALPC_MESSAGE

