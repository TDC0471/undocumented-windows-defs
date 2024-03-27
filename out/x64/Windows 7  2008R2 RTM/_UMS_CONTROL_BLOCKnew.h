#pragma once
/* ------------------ */

#include <_RTL_UMS_CONTEXT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_KQUEUE.h>
#include <_LIST_ENTRY.h>
#include <_KUMS_CONTEXT_HEADER.h>
#include <_KGATE.h>

//0x98 bytes (sizeof)
struct _UMS_CONTROL_BLOCK
{
    struct _RTL_UMS_CONTEXT* UmsContext;                                    //0x0
    struct _SINGLE_LIST_ENTRY* CompletionListEntry;                         //0x8
    struct _KEVENT* CompletionListEvent;                                    //0x10
    ULONG ServiceSequenceNumber;                                            //0x18
    union
    {
        struct
        {
            struct _KQUEUE UmsQueue;                                        //0x20
            struct _LIST_ENTRY QueueEntry;                                  //0x60
            struct _RTL_UMS_CONTEXT* volatile YieldingUmsContext;           //0x70
            VOID* volatile YieldingParam;                                   //0x78
            VOID* UmsTeb;                                                   //0x80
            union
            {
                ULONG PrimaryFlags;                                         //0x88
                ULONG UmsContextHeaderReady:1;                              //0x88
            };
        };
        struct
        {
            struct _KQUEUE* UmsAssociatedQueue;                             //0x20
            struct _LIST_ENTRY* UmsQueueListEntry;                          //0x28
            struct _KUMS_CONTEXT_HEADER* UmsContextHeader;                  //0x30
            struct _KGATE UmsWaitGate;                                      //0x38
            VOID* StagingArea;                                              //0x50
            union
            {
                volatile LONG Flags;                                        //0x58
                struct
                {
                    volatile ULONG UmsForceQueueTermination:1;              //0x58
                    volatile ULONG UmsAssociatedQueueUsed:1;                //0x58
                    volatile ULONG UmsThreadParked:1;                       //0x58
                    volatile ULONG UmsPrimaryDeliveredContext:1;            //0x58
                };
            };
        };
    };
    USHORT TebSelector;                                                     //0x90
};
/* Used in */
// _KTHREAD

