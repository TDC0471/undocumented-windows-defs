#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_KEVENT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>

//0x88 bytes (sizeof)
struct _ETW_REALTIME_CONSUMER
{
    struct _LIST_ENTRY Links;                                               //0x0
    VOID* ProcessHandle;                                                    //0x10
    struct _EPROCESS* ProcessObject;                                        //0x18
    VOID* NextNotDelivered;                                                 //0x20
    VOID* RealtimeConnectContext;                                           //0x28
    struct _KEVENT* DisconnectEvent;                                        //0x30
    struct _KEVENT* DataAvailableEvent;                                     //0x38
    ULONG* UserBufferCount;                                                 //0x40
    struct _SINGLE_LIST_ENTRY* UserBufferListHead;                          //0x48
    ULONG BuffersLost;                                                      //0x50
    ULONG EmptyBuffersCount;                                                //0x54
    ULONG LoggerId;                                                         //0x58
    UCHAR ShutDownRequested;                                                //0x5c
    UCHAR NewBuffersLost;                                                   //0x5d
    UCHAR Disconnected;                                                     //0x5e
    struct _RTL_BITMAP ReservedBufferSpaceBitMap;                           //0x60
    UCHAR* ReservedBufferSpace;                                             //0x70
    ULONG ReservedBufferSpaceSize;                                          //0x78
    ULONG UserPagesAllocated;                                               //0x7c
    ULONG UserPagesReused;                                                  //0x80
    UCHAR Wow;                                                              //0x84
};
/* Used in */
// _WMI_LOGGER_CONTEXT

