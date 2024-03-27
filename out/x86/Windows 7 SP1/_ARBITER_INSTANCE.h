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

//0x5ec bytes (sizeof)
struct _ARBITER_INSTANCE
{
    ULONG Signature;                                                        //0x0
    struct _KEVENT* MutexEvent;                                             //0x4
    USHORT* Name;                                                           //0x8
    USHORT* OrderingName;                                                   //0xc
    LONG ResourceType;                                                      //0x10
    struct _RTL_RANGE_LIST* Allocation;                                     //0x14
    struct _RTL_RANGE_LIST* PossibleAllocation;                             //0x18
    struct _ARBITER_ORDERING_LIST OrderingList;                             //0x1c
    struct _ARBITER_ORDERING_LIST ReservedList;                             //0x24
    LONG ReferenceCount;                                                    //0x2c
    struct _ARBITER_INTERFACE* Interface;                                   //0x30
    ULONG AllocationStackMaxSize;                                           //0x34
    struct _ARBITER_ALLOCATION_STATE* AllocationStack;                      //0x38
    LONG (*UnpackRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3, ULONGLONG* arg4, ULONGLONG* arg5); //0x3c
    LONG (*PackResource)(struct _IO_RESOURCE_DESCRIPTOR* arg1, ULONGLONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3); //0x40
    LONG (*UnpackResource)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg1, ULONGLONG* arg2, ULONGLONG* arg3); //0x44
    LONG (*ScoreRequirement)(struct _IO_RESOURCE_DESCRIPTOR* arg1);         //0x48
    LONG (*TestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_TEST_ALLOCATION_PARAMETERS* arg2); //0x4c
    LONG (*RetestAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_RETEST_ALLOCATION_PARAMETERS* arg2); //0x50
    LONG (*CommitAllocation)(struct _ARBITER_INSTANCE* arg1);               //0x54
    LONG (*RollbackAllocation)(struct _ARBITER_INSTANCE* arg1);             //0x58
    LONG (*BootAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_BOOT_ALLOCATION_PARAMETERS* arg2); //0x5c
    LONG (*QueryArbitrate)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_QUERY_ARBITRATE_PARAMETERS* arg2); //0x60
    LONG (*QueryConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_QUERY_CONFLICT_PARAMETERS* arg2); //0x64
    LONG (*AddReserved)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ADD_RESERVED_PARAMETERS* arg2); //0x68
    LONG (*StartArbiter)(struct _ARBITER_INSTANCE* arg1, struct _CM_RESOURCE_LIST* arg2); //0x6c
    LONG (*PreprocessEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x70
    LONG (*AllocateEntry)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x74
    UCHAR (*GetNextAllocationRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x78
    UCHAR (*FindSuitableRange)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x7c
    VOID (*AddAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x80
    VOID (*BacktrackAllocation)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x84
    UCHAR (*OverrideConflict)(struct _ARBITER_INSTANCE* arg1, struct _ARBITER_ALLOCATION_STATE* arg2); //0x88
    LONG (*InitializeRangeList)(struct _ARBITER_INSTANCE* arg1, ULONG arg2, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* arg3, struct _RTL_RANGE_LIST* arg4); //0x8c
    UCHAR TransactionInProgress;                                            //0x90
    struct _KEVENT* TransactionEvent;                                       //0x94
    VOID* Extension;                                                        //0x98
    struct _DEVICE_OBJECT* BusDeviceObject;                                 //0x9c
    VOID* ConflictCallbackContext;                                          //0xa0
    UCHAR (*ConflictCallback)(VOID* arg1, struct _RTL_RANGE* arg2);         //0xa4
    WCHAR PdoDescriptionString[336];                                        //0xa8
    CHAR PdoSymbolicNameString[672];                                        //0x348
    WCHAR PdoAddressString[1];                                              //0x5e8
};
/* Used in */
// _ARBITER_INSTANCE

