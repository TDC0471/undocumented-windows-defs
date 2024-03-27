#pragma once
/* ------------------ */

#include <_EX_PARTITION.h>
#include <_ENODE.h>
#include <_KEVENT.h>
#include <_KTIMER.h>
#include <_KTIMER2.h>

//0x118 bytes (sizeof)
struct _EX_WORK_QUEUE_MANAGER
{
    struct _EX_PARTITION* Partition;                                        //0x0
    struct _ENODE* Node;                                                    //0x8
    struct _KEVENT Event;                                                   //0x10
    struct _KTIMER DeadlockTimer;                                           //0x28
    struct _KEVENT ReaperEvent;                                             //0x68
    struct _KTIMER2 ReaperTimer;                                            //0x80
    VOID* ThreadHandle;                                                     //0x108
    volatile ULONG ExitThread;                                              //0x110
    USHORT ThreadSeed;                                                      //0x114
};
/* Used in */
// _EX_PARTITION

