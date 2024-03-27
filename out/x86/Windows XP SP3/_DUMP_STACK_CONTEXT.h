#pragma once
/* ------------------ */

#include <_DUMP_INITIALIZATION_CONTEXT.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_STRING.h>
#include <_DEVICE_USAGE_NOTIFICATION_TYPE.h>

//0xb0 bytes (sizeof)
struct _DUMP_STACK_CONTEXT
{
    struct _DUMP_INITIALIZATION_CONTEXT Init;                               //0x0
    union _LARGE_INTEGER PartitionOffset;                                   //0x70
    VOID* DumpPointers;                                                     //0x78
    ULONG PointersLength;                                                   //0x7c
    USHORT* ModulePrefix;                                                   //0x80
    struct _LIST_ENTRY DriverList;                                          //0x84
    struct _STRING InitMsg;                                                 //0x8c
    struct _STRING ProgMsg;                                                 //0x94
    struct _STRING DoneMsg;                                                 //0x9c
    VOID* FileObject;                                                       //0xa4
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;                         //0xa8
};
/* Used in */
// _POP_HIBER_CONTEXT

