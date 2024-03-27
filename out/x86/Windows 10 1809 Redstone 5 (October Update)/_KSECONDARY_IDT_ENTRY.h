#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KINTERRUPT.h>

//0x1c bytes (sizeof)
struct _KSECONDARY_IDT_ENTRY
{
    ULONG SpinLock;                                                         //0x0
    struct _KEVENT ConnectLock;                                             //0x4
    UCHAR LineMasked;                                                       //0x14
    struct _KINTERRUPT* InterruptList;                                      //0x18
};
