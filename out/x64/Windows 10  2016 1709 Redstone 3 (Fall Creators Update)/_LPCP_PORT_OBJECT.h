#pragma once
/* ------------------ */

#include <_LPCP_PORT_OBJECT.h>
#include <_LPCP_PORT_QUEUE.h>
#include <_CLIENT_ID.h>
#include <_ETHREAD.h>
#include <_SECURITY_QUALITY_OF_SERVICE.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_KEVENT.h>

//0x100 bytes (sizeof)
struct _LPCP_PORT_OBJECT
{
    struct _LPCP_PORT_OBJECT* ConnectionPort;                               //0x0
    struct _LPCP_PORT_OBJECT* ConnectedPort;                                //0x8
    struct _LPCP_PORT_QUEUE MsgQueue;                                       //0x10
    struct _CLIENT_ID Creator;                                              //0x30
    VOID* ClientSectionBase;                                                //0x40
    VOID* ServerSectionBase;                                                //0x48
    VOID* PortContext;                                                      //0x50
    struct _ETHREAD* ClientThread;                                          //0x58
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x60
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x70
    struct _LIST_ENTRY LpcReplyChainHead;                                   //0xb8
    struct _LIST_ENTRY LpcDataInfoChainHead;                                //0xc8
    union
    {
        struct _EPROCESS* ServerProcess;                                    //0xd8
        struct _EPROCESS* MappingProcess;                                   //0xd8
    };
    USHORT MaxMessageLength;                                                //0xe0
    USHORT MaxConnectionInfoLength;                                         //0xe2
    ULONG Flags;                                                            //0xe4
    struct _KEVENT WaitEvent;                                               //0xe8
};
/* Used in */
// _LPCP_NONPAGED_PORT_QUEUE
// _LPCP_PORT_OBJECT

