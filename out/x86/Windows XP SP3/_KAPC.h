#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_LIST_ENTRY.h>
#include <_KAPC.h>

//0x30 bytes (sizeof)
struct _KAPC
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    ULONG Spare0;                                                           //0x4
    struct _KTHREAD* Thread;                                                //0x8
    struct _LIST_ENTRY ApcListEntry;                                        //0xc
    VOID (*KernelRoutine)(struct _KAPC* arg1, VOID (**arg2)(VOID* arg1, VOID* arg2, VOID* arg3), VOID** arg3, VOID** arg4, VOID** arg5); //0x14
    VOID (*RundownRoutine)(struct _KAPC* arg1);                             //0x18
    VOID (*NormalRoutine)(VOID* arg1, VOID* arg2, VOID* arg3);              //0x1c
    VOID* NormalContext;                                                    //0x20
    VOID* SystemArgument1;                                                  //0x24
    VOID* SystemArgument2;                                                  //0x28
    CHAR ApcStateIndex;                                                     //0x2c
    CHAR ApcMode;                                                           //0x2d
    UCHAR Inserted;                                                         //0x2e
};
/* Used in */
// _ETIMER
// _IRP
// _KAPC
// _KTHREAD

