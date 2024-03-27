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
#include <_ARBITER_TEST_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_RETEST_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_BOOT_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_QUERY_ARBITRATE_PARAMETERS.h>
#include <_ARBITER_QUERY_CONFLICT_PARAMETERS.h>
#include <_ARBITER_ADD_RESERVED_PARAMETERS.h>
#include <_CM_RESOURCE_LIST.h>
#include <_DEVICE_OBJECT.h>
#include <_RTL_RANGE.h>

//0x698 bytes (sizeof)
struct _ARBITER_INSTANCE
{
    ULONG Signature;                                                        //0x0
    struct _KEVENT* MutexEvent;                                             //0x8
    USHORT* Name;                                                           //0x10
    USHORT* OrderingName;                                                   //0x18
    LONG ResourceType;                                                      //0x20
    struct _RTL_RANGE_LIST* Allocation;                                     //0x28
    struct _RTL_RANGE_LIST* PossibleAllocation;                             //0x30
    struct _ARBITER_ORDERING_LIST OrderingList;                             //0x38
    struct _ARBITER_ORDERING_LIST ReservedList;                             //0x48
    LONG ReferenceCount;                                                    //0x58
    struct _ARBITER_INTERFACE* Interface;                                   //0x60
    ULONG AllocationStackMaxSize;                                           //0x68
    struct _ARBITER_ALLOCATION_STATE* AllocationStack;                      //0x70
    LONG (*UnpackRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3, ULONGLONG* arg4, ULONGLONG* arg5); //0x78
    LONG (*PackResource)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0x80
    LONG (*UnpackResource)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3); //0x88
    LONG (*ScoreRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1);         //0x90
    LONG (*TestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_TEST_ALLOCATION_PARAMETERS* arg2); //0x98
    LONG (*RetestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_RETEST_ALLOCATION_PARAMETERS* arg2); //0xa0
    LONG (*CommitAllocation)(struct _ARBITER_INSTANCE* arg1);               //0xa8
    LONG (*RollbackAllocation)(struct _ARBITER_INSTANCE* arg1);             //0xb0
    LONG (*BootAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_BOOT_ALLOCATION_PARAMETERS* arg2); //0xb8
    LONG (*QueryArbitrate)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_QUERY_ARBITRATE_PARAMETERS* arg2); //0xc0
    LONG (*QueryConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_QUERY_CONFLICT_PARAMETERS* arg2); //0xc8
    LONG (*AddReserved)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ADD_RESERVED_PARAMETERS* arg2); //0xd0
    LONG (*StartArbiter)(struct _ARBITER_INSTANCE* arg1, struct _CM_RESOURCE_LIST* arg2); //0xd8
    LONG (*PreprocessEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xe0
    LONG (*AllocateEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xe8
    UCHAR (*GetNextAllocationRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xf0
    UCHAR (*FindSuitableRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0xf8
    VOID (*AddAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x100
    VOID (*BacktrackAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x108
    UCHAR (*OverrideConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x110
    LONG (*InitializeRangeList)(struct _ARBITER_INSTANCE* arg1, ULONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3, struct _RTL_RANGE_LIST* arg4); //0x118
    UCHAR TransactionInProgress;                                            //0x120
    struct _KEVENT* TransactionEvent;                                       //0x128
    VOID* Extension;                                                        //0x130
    struct _DEVICE_OBJECT* BusDeviceObject;                                 //0x138
    VOID* ConflictCallbackContext;                                          //0x140
    UCHAR (*ConflictCallback)(VOID* arg1, struct _RTL_RANGE* arg2);         //0x148
    WCHAR PdoDescriptionString[336];                                        //0x150
    CHAR PdoSymbolicNameString[672];                                        //0x3f0
    WCHAR PdoAddressString[1];                                              //0x690
};
/* Used in */
// _ARBITER_INSTANCE

