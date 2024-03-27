#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_INTERRUPT_VECTOR_DATA.h>

//0xa8 bytes (sizeof)
struct _INTERRUPT_CONNECTION_DATA
{
    ULONG Count;                                                            //0x0
    struct _GROUP_AFFINITY OriginalAffinity;                                //0x8
    struct _LIST_ENTRY SteeringListEntry;                                   //0x18
    VOID* SteeringListRoot;                                                 //0x28
    ULONGLONG IsrTime;                                                      //0x30
    ULONGLONG DpcTime;                                                      //0x38
    ULONG IsrLoad;                                                          //0x40
    ULONG DpcLoad;                                                          //0x44
    UCHAR IsPrimaryInterrupt;                                               //0x48
    struct _KINTERRUPT** InterruptObjectArray;                              //0x50
    ULONG InterruptObjectCount;                                             //0x58
    struct _INTERRUPT_VECTOR_DATA Vectors[1];                               //0x60
};
/* Used in */
// _KINTERRUPT

