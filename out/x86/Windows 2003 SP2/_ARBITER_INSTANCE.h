#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_RTL_RANGE_LIST.h>
#include <_ARBITER_ORDERING_LIST.h>
#include <_ARBITER_INTERFACE.h>
#include <_ARBITER_ALLOCATION_STATE.h>
#include <_IO_RESOURCE_DESCRIPTOR.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>
#include <_ARBITER_INSTANCE.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_ARBITER_CONFLICT_INFO.h>
#include <_CM_RESOURCE_LIST.h>
#include <_RTL_RANGE.h>

//0x9c bytes (sizeof)
struct _ARBITER_INSTANCE
{
    ULONG Signature;                                                        //0x0
    struct _KEVENT* MutexEvent;                                             //0x4
    USHORT* Name;                                                           //0x8
    LONG ResourceType;                                                      //0xc
    struct _RTL_RANGE_LIST* Allocation;                                     //0x10
    struct _RTL_RANGE_LIST* PossibleAllocation;                             //0x14
    struct _ARBITER_ORDERING_LIST OrderingList;                             //0x18
    struct _ARBITER_ORDERING_LIST ReservedList;                             //0x20
    LONG ReferenceCount;                                                    //0x28
    struct _ARBITER_INTERFACE* Interface;                                   //0x2c
    ULONG AllocationStackMaxSize;                                           //0x30
    struct _ARBITER_ALLOCATION_STATE* AllocationStack;                      //0x34
    LONG (*UnpackRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3, ULONG* arg4, ULONG* arg5); //0x38
    LONG (*PackResource)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0x3c
    LONG (*UnpackResource)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONG* arg3); //0x40
    LONG (*ScoreRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1);         //0x44
    LONG (*TestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x48
    LONG (*RetestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x4c
    LONG (*CommitAllocation)(struct _ARBITER_INSTANCE* arg1);               //0x50
    LONG (*RollbackAllocation)(struct _ARBITER_INSTANCE* arg1);             //0x54
    LONG (*BootAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x58
    LONG (*QueryArbitrate)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x5c
    LONG (*QueryConflict)(struct _ARBITER_INSTANCE* arg1, struct _DEVICE_OBJECT* arg2, struct _IO_RESOURCE_DESCRIPTOR* arg3, ULONG* arg4, struct _ARBITER_CONFLICT_INFO** arg5); //0x60
    LONG (*AddReserved)(struct _ARBITER_INSTANCE* arg1, struct _IO_RESOURCE_DESCRIPTOR* arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0x64
    LONG (*StartArbiter)(struct _ARBITER_INSTANCE* arg1, struct _CM_RESOURCE_LIST* arg2); //0x68
    LONG (*PreprocessEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x6c
    LONG (*AllocateEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x70
    UCHAR (*GetNextAllocationRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x74
    UCHAR (*FindSuitableRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x78
    VOID (*AddAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x7c
    VOID (*BacktrackAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x80
    UCHAR (*OverrideConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x84
    UCHAR TransactionInProgress;                                            //0x88
    VOID* Extension;                                                        //0x8c
    struct _DEVICE_OBJECT* BusDeviceObject;                                 //0x90
    VOID* ConflictCallbackContext;                                          //0x94
    UCHAR (*ConflictCallback)(VOID* arg1, struct _RTL_RANGE* arg2);         //0x98
};
/* Used in */
// _ARBITER_INSTANCE
// _PCI_ARBITER_INSTANCE

