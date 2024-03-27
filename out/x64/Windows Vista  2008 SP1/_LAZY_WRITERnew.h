#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_KTIMER.h>

//0x98 bytes (sizeof)
struct _LAZY_WRITER
{
    struct _LIST_ENTRY WorkQueue;                                           //0x0
    struct _KDPC ScanDpc;                                                   //0x10
    struct _KTIMER ScanTimer;                                               //0x50
    UCHAR ScanActive;                                                       //0x90
    UCHAR OtherWork;                                                        //0x91
    UCHAR PendingTeardown;                                                  //0x92
};
