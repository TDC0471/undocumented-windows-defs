#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_KEVENT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_ETW_SILODRIVERSTATE.h>

//0x58 bytes (sizeof)
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
    USHORT LoggerId;                                                        //0x30
    union
    {
        UCHAR Flags;                                                        //0x32
        struct
        {
            UCHAR ShutDownRequested:1;                                      //0x32
            UCHAR NewBuffersLost:1;                                         //0x32
            UCHAR Disconnected:1;                                           //0x32
            UCHAR Notified:1;                                               //0x32
        };
    };
    struct _RTL_BITMAP ReservedBufferSpaceBitMap;                           //0x34
    UCHAR* ReservedBufferSpace;                                             //0x3c
    ULONG ReservedBufferSpaceSize;                                          //0x40
    ULONG UserPagesAllocated;                                               //0x44
    ULONG UserPagesReused;                                                  //0x48
    ULONG* EventsLostCount;                                                 //0x4c
    ULONG* BuffersLostCount;                                                //0x50
    struct _ETW_SILODRIVERSTATE* SiloState;                                 //0x54
};
/* Used in */
// _WMI_LOGGER_CONTEXT

