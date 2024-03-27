#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>
#include <_KWAIT_BLOCK.h>

//0x30 bytes (sizeof)
struct _KWAIT_BLOCK
{
    struct _LIST_ENTRY WaitListEntry;                                       //0x0
    struct _KTHREAD* Thread;                                                //0x10
    VOID* Object;                                                           //0x18
    struct _KWAIT_BLOCK* NextWaitBlock;                                     //0x20
    USHORT WaitKey;                                                         //0x28
    UCHAR WaitType;                                                         //0x2a
    UCHAR SpareByte;                                                        //0x2b
    LONG SpareLong;                                                         //0x2c
};
/* Used in */
// _KTHREAD
// _KWAIT_BLOCK

