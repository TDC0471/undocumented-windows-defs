#pragma once
/* ------------------ */

#include <_KSEMAPHORE.h>
#include <_LPCP_PORT_OBJECT.h>

//0x28 bytes (sizeof)
struct _LPCP_NONPAGED_PORT_QUEUE
{
    struct _KSEMAPHORE Semaphore;                                           //0x0
    struct _LPCP_PORT_OBJECT* BackPointer;                                  //0x20
};
/* Used in */
// _LPCP_PORT_QUEUE

