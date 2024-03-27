#pragma once
/* ------------------ */

#include <_RTL_HASH_TABLE.h>
#include <_RTL_SRWLOCK.h>

//0x2c bytes (sizeof)
struct _RTL_STACKDB_CONTEXT
{
    struct _RTL_HASH_TABLE StackSegmentTable;                               //0x0
    struct _RTL_HASH_TABLE StackEntryTable;                                 //0xc
    struct _RTL_SRWLOCK StackEntryTableLock;                                //0x18
    struct _RTL_SRWLOCK SegmentTableLock;                                   //0x1c
    VOID* (*Allocate)(ULONG arg1, VOID* arg2);                              //0x20
    VOID (*Free)(VOID* arg1, VOID* arg2);                                   //0x24
    VOID* AllocatorContext;                                                 //0x28
};
