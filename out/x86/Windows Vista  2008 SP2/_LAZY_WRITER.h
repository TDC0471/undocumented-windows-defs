#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_KTIMER.h>

//0x58 bytes (sizeof)
struct _LAZY_WRITER
{
    struct _LIST_ENTRY WorkQueue;                                           //0x0
    struct _KDPC ScanDpc;                                                   //0x8
    struct _KTIMER ScanTimer;                                               //0x28
    UCHAR ScanActive;                                                       //0x50
    UCHAR OtherWork;                                                        //0x51
    UCHAR PendingTeardown;                                                  //0x52
};
