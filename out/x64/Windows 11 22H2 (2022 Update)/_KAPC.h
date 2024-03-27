#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_LIST_ENTRY.h>
#include <_KAPC.h>

//0x58 bytes (sizeof)
struct _KAPC
{
    UCHAR Type;                                                             //0x0
    union
    {
        UCHAR AllFlags;                                                     //0x1
        struct
        {
            UCHAR CallbackDataContext:1;                                    //0x1
            UCHAR Unused:7;                                                 //0x1
        };
    };
    UCHAR Size;                                                             //0x2
    UCHAR SpareByte1;                                                       //0x3
    ULONG SpareLong0;                                                       //0x4
    struct _KTHREAD* Thread;                                                //0x8
    struct _LIST_ENTRY ApcListEntry;                                        //0x10
    union
    {
        struct
        {
            VOID (*KernelRoutine)(struct _KAPC* arg1, VOID (**arg2)(VOID* arg1, VOID* arg2, VOID* arg3), VOID** arg3, VOID** arg4, VOID** arg5); //0x20
            VOID (*RundownRoutine)(struct _KAPC* arg1);                     //0x28
            VOID (*NormalRoutine)(VOID* arg1, VOID* arg2, VOID* arg3);      //0x30
        };
        VOID* Reserved[3];                                                  //0x20
    };
    VOID* NormalContext;                                                    //0x38
    VOID* SystemArgument1;                                                  //0x40
    VOID* SystemArgument2;                                                  //0x48
    CHAR ApcStateIndex;                                                     //0x50
    CHAR ApcMode;                                                           //0x51
    UCHAR Inserted;                                                         //0x52
};
/* Used in */
// _ETIMER
// _IRP
// _KAPC
// _KTHREAD
// _MMMOD_WRITER_MDL_ENTRY

