#pragma once
/* ------------------ */

#include <_RTL_HASH_TABLE.h>
#include <_RTL_SRWLOCK.h>

//0x48 bytes (sizeof)
struct _RTL_STACKDB_CONTEXT
{
    struct _RTL_HASH_TABLE StackSegmentTable;                               //0x0
    struct _RTL_HASH_TABLE StackEntryTable;                                 //0x10
    struct _RTL_SRWLOCK StackEntryTableLock;                                //0x20
    struct _RTL_SRWLOCK SegmentTableLock;                                   //0x28
    VOID* (*Allocate)(ULONGLONG arg1, VOID* arg2);                          //0x30
    VOID (*Free)(VOID* arg1, VOID* arg2);                                   //0x38
    VOID* AllocatorContext;                                                 //0x40
};
