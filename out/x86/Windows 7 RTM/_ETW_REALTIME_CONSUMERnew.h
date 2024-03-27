#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_KEVENT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>

//0x50 bytes (sizeof)
struct _ETW_REALTIME_CONSUMER
{
    struct _LIST_ENTRY Links;                                               //0x0
    VOID* ProcessHandle;                                                    //0x8
    struct _EPROCESS* ProcessObject;                                        //0xc
    VOID* NextNotDelivered;                                                 //0x10
    VOID* RealtimeConnectContext;                                           //0x14
    struct _KEVENT* DisconnectEvent;                                        //0x18
    struct _KEVENT* DataAvailableEvent;                                     //0x1c
    ULONG* UserBufferCount;                                                 //0x20
    struct _SINGLE_LIST_ENTRY* UserBufferListHead;                          //0x24
    ULONG BuffersLost;                                                      //0x28
    ULONG EmptyBuffersCount;                                                //0x2c
    ULONG LoggerId;                                                         //0x30
    UCHAR ShutDownRequested;                                                //0x34
    UCHAR NewBuffersLost;                                                   //0x35
    UCHAR Disconnected;                                                     //0x36
    struct _RTL_BITMAP ReservedBufferSpaceBitMap;                           //0x38
    UCHAR* ReservedBufferSpace;                                             //0x40
    ULONG ReservedBufferSpaceSize;                                          //0x44
    ULONG UserPagesAllocated;                                               //0x48
    ULONG UserPagesReused;                                                  //0x4c
};
/* Used in */
// _WMI_LOGGER_CONTEXT

