#pragma once
/* ------------------ */

#include <_LPCP_NONPAGED_PORT_QUEUE.h>
#include <_KSEMAPHORE.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _LPCP_PORT_QUEUE
{
    struct _LPCP_NONPAGED_PORT_QUEUE* NonPagedPortQueue;                    //0x0
    struct _KSEMAPHORE* Semaphore;                                          //0x4
    struct _LIST_ENTRY ReceiveHead;                                         //0x8
};
/* Used in */
// _LPCP_PORT_OBJECT

