#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KINTERRUPT.h>

//0x30 bytes (sizeof)
struct _KSECONDARY_IDT_ENTRY
{
    ULONGLONG SpinLock;                                                     //0x0
    struct _KEVENT ConnectLock;                                             //0x8
    UCHAR LineMasked;                                                       //0x20
    struct _KINTERRUPT* InterruptList;                                      //0x28
};
