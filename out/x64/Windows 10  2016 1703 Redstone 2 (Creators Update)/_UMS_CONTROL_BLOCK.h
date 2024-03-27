#pragma once
/* ------------------ */

#include <_RTL_UMS_CONTEXT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_KQUEUE.h>
#include <_LIST_ENTRY.h>

//0x88 bytes (sizeof)
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
            struct _RTL_UMS_CONTEXT* YieldingUmsContext;                    //0x70
            VOID* YieldingParam;                                            //0x78
            VOID* UmsTeb;                                                   //0x80
        };
        struct
        {
            struct _KQUEUE* UmsAssociatedQueue;                             //0x20
            struct _LIST_ENTRY* UmsQueueListEntry;                          //0x28
            struct _KEVENT UmsWaitEvent;                                    //0x30
            VOID* StagingArea;                                              //0x48
            union
            {
                struct
                {
                    ULONG UmsPrimaryDeliveredContext:1;                     //0x50
                    ULONG UmsAssociatedQueueUsed:1;                         //0x50
                    ULONG UmsThreadParked:1;                                //0x50
                };
                ULONG UmsFlags;                                             //0x50
            };
        };
    };
};
/* Used in */
// _KTHREAD

