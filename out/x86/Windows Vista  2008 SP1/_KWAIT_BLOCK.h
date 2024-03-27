#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>
#include <_KWAIT_BLOCK.h>

//0x18 bytes (sizeof)
struct _KWAIT_BLOCK
{
    struct _LIST_ENTRY WaitListEntry;                                       //0x0
    struct _KTHREAD* Thread;                                                //0x8
    VOID* Object;                                                           //0xc
    struct _KWAIT_BLOCK* NextWaitBlock;                                     //0x10
    USHORT WaitKey;                                                         //0x14
    UCHAR WaitType;                                                         //0x16
    UCHAR SpareByte;                                                        //0x17
};
/* Used in */
// _KTHREAD
// _KWAIT_BLOCK

