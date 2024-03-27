#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_INTERRUPT_VECTOR_DATA.h>

//0x88 bytes (sizeof)
struct _INTERRUPT_CONNECTION_DATA
{
    ULONG Count;                                                            //0x0
    struct _GROUP_AFFINITY OriginalAffinity;                                //0x4
    struct _LIST_ENTRY SteeringListEntry;                                   //0x10
    VOID* SteeringListRoot;                                                 //0x18
    ULONGLONG IsrTime;                                                      //0x20
    ULONGLONG DpcTime;                                                      //0x28
    ULONG IsrLoad;                                                          //0x30
    ULONG DpcLoad;                                                          //0x34
    UCHAR IsPrimaryInterrupt;                                               //0x38
    struct _KINTERRUPT** InterruptObjectArray;                              //0x3c
    ULONG InterruptObjectCount;                                             //0x40
    struct _INTERRUPT_VECTOR_DATA Vectors[1];                               //0x48
};
/* Used in */
// _KINTERRUPT

