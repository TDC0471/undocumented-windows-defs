#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_LIST_ENTRY.h>
#include <_ALPC_HANDLE_TABLE.h>
#include <_KALPC_MESSAGE.h>

//0x28 bytes (sizeof)
struct _ALPC_COMMUNICATION_INFO
{
    struct _ALPC_PORT* ConnectionPort;                                      //0x0
    struct _ALPC_PORT* ServerCommunicationPort;                             //0x4
    struct _ALPC_PORT* ClientCommunicationPort;                             //0x8
    struct _LIST_ENTRY CommunicationList;                                   //0xc
    struct _ALPC_HANDLE_TABLE HandleTable;                                  //0x14
    struct _KALPC_MESSAGE* CloseMessage;                                    //0x24
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _ALPC_PORT
// _KALPC_MESSAGE

