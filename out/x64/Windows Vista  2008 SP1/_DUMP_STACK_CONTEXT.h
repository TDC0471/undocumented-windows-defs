#pragma once
/* ------------------ */

#include <_DUMP_INITIALIZATION_CONTEXT.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_STRING.h>
#include <_DEVICE_USAGE_NOTIFICATION_TYPE.h>

//0x110 bytes (sizeof)
struct _DUMP_STACK_CONTEXT
{
    struct _DUMP_INITIALIZATION_CONTEXT Init;                               //0x0
    union _LARGE_INTEGER PartitionOffset;                                   //0xa0
    VOID* DumpPointers;                                                     //0xa8
    ULONG PointersLength;                                                   //0xb0
    USHORT* ModulePrefix;                                                   //0xb8
    struct _LIST_ENTRY DriverList;                                          //0xc0
    struct _STRING InitMsg;                                                 //0xd0
    struct _STRING ProgMsg;                                                 //0xe0
    struct _STRING DoneMsg;                                                 //0xf0
    VOID* FileObject;                                                       //0x100
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;                         //0x108
};
/* Used in */
// _POP_HIBER_CONTEXT

