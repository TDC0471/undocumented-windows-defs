#pragma once
/* ------------------ */

#include <_DUMP_INITIALIZATION_CONTEXT.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_STRING.h>
#include <_DEVICE_USAGE_NOTIFICATION_TYPE.h>

//0x100 bytes (sizeof)
struct _DUMP_STACK_CONTEXT
{
    struct _DUMP_INITIALIZATION_CONTEXT Init;                               //0x0
    union _LARGE_INTEGER PartitionOffset;                                   //0xc0
    VOID* DumpPointers;                                                     //0xc8
    ULONG PointersLength;                                                   //0xcc
    WCHAR* ModulePrefix;                                                    //0xd0
    struct _LIST_ENTRY DriverList;                                          //0xd4
    struct _STRING InitMsg;                                                 //0xdc
    struct _STRING ProgMsg;                                                 //0xe4
    struct _STRING DoneMsg;                                                 //0xec
    VOID* FileObject;                                                       //0xf4
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;                         //0xf8
};
/* Used in */
// _POP_HIBER_CONTEXT

