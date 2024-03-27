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

//0xa4 bytes (sizeof)
struct _LPCP_PORT_OBJECT
{
    struct _LPCP_PORT_OBJECT* ConnectionPort;                               //0x0
    struct _LPCP_PORT_OBJECT* ConnectedPort;                                //0x4
    struct _LPCP_PORT_QUEUE MsgQueue;                                       //0x8
    struct _CLIENT_ID Creator;                                              //0x18
    VOID* ClientSectionBase;                                                //0x20
    VOID* ServerSectionBase;                                                //0x24
    VOID* PortContext;                                                      //0x28
    struct _ETHREAD* ClientThread;                                          //0x2c
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x30
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;                         //0x3c
    struct _LIST_ENTRY LpcReplyChainHead;                                   //0x78
    struct _LIST_ENTRY LpcDataInfoChainHead;                                //0x80
    union
    {
        struct _EPROCESS* ServerProcess;                                    //0x88
        struct _EPROCESS* MappingProcess;                                   //0x88
    };
    USHORT MaxMessageLength;                                                //0x8c
    USHORT MaxConnectionInfoLength;                                         //0x8e
    ULONG Flags;                                                            //0x90
    struct _KEVENT WaitEvent;                                               //0x94
};
/* Used in */
// _LPCP_NONPAGED_PORT_QUEUE
// _LPCP_PORT_OBJECT

