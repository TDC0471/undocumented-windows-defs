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

//0x138 bytes (sizeof)
struct _ARBITER_INSTANCE
{
    ULONG Signature;                                                        //0x0
    struct _KEVENT* MutexEvent;                                             //0x8
    USHORT* Name;                                                           //0x10
    LONG ResourceType;                                                      //0x18
    struct _RTL_RANGE_LIST* Allocation;                                     //0x20
    struct _RTL_RANGE_LIST* PossibleAllocation;                             //0x28
    struct _ARBITER_ORDERING_LIST OrderingList;                             //0x30
    struct _ARBITER_ORDERING_LIST ReservedList;                             //0x40
    LONG ReferenceCount;                                                    //0x50
    struct _ARBITER_INTERFACE* Interface;                                   //0x58
    ULONG AllocationStackMaxSize;                                           //0x60
    struct _ARBITER_ALLOCATION_STATE* AllocationStack;                      //0x68
    LONG (*UnpackRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3, ULONG* arg4, ULONG* arg5); //0x70
    LONG (*PackResource)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0x78
    LONG (*UnpackResource)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONG* arg3); //0x80
    LONG (*ScoreRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1);         //0x88
    LONG (*TestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x90
    LONG (*RetestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0x98
    LONG (*CommitAllocation)(struct _ARBITER_INSTANCE* arg1);               //0xa0
    LONG (*RollbackAllocation)(struct _ARBITER_INSTANCE* arg1);             //0xa8
    LONG (*BootAllocation)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0xb0
    LONG (*QueryArbitrate)(struct _ARBITER_INSTANCE* arg1, struct _LIST_ENTRY* arg2); //0xb8
    LONG (*QueryConflict)(struct _ARBITER_INSTANCE* arg1, struct _DEVICE_OBJECT* arg2, struct _IO_RESOURCE_DESCRIPTOR* arg3, ULONG* arg4, struct _ARBITER_CONFLICT_INFO** arg5); //0xc0
    LONG (*AddReserved)(struct _ARBITER_INSTANCE* arg1, struct _IO_RESOURCE_DESCRIPTOR* arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0xc8
    LONG (*StartArbiter)(struct _ARBITER_INSTANCE* arg1, struct _CM_RESOURCE_LIST* arg2); //0xd0
    LONG (*PreprocessEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xd8
    LONG (*AllocateEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xe0
    UCHAR (*GetNextAllocationRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xe8
    UCHAR (*FindSuitableRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xf0
    VOID (*AddAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xf8
    VOID (*BacktrackAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x100
    UCHAR (*OverrideConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x108
    UCHAR TransactionInProgress;                                            //0x110
    VOID* Extension;                                                        //0x118
    struct _DEVICE_OBJECT* BusDeviceObject;                                 //0x120
    VOID* ConflictCallbackContext;                                          //0x128
    UCHAR (*ConflictCallback)(VOID* arg1, struct _RTL_RANGE* arg2);         //0x130
};
/* Used in */
// _ARBITER_INSTANCE
// _PCI_ARBITER_INSTANCE

