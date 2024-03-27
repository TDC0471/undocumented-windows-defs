#pragma once
/* ------------------ */

#include <_EX_PARTITION.h>
#include <_ENODE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KTIMER2.h>

//0xb8 bytes (sizeof)
struct _EX_WORK_QUEUE_MANAGER
{
    struct _EX_PARTITION* Partition;                                        //0x0
    struct _ENODE* Node;                                                    //0x4
    struct _KEVENT Event;                                                   //0x8
    struct _KTIMER DeadlockTimer;                                           //0x18
    struct _KEVENT ReaperEvent;                                             //0x40
    struct _KTIMER2 ReaperTimer;                                            //0x50
    VOID* ThreadHandle;                                                     //0xa8
    volatile ULONG ExitThread;                                              //0xac
    USHORT ThreadSeed;                                                      //0xb0
};
/* Used in */
// _EX_PARTITION

