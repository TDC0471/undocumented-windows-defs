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
    union
    {
        VOID* DumpPointers;                                                 //0xc8
        VOID* StorageInfo;                                                  //0xc8
    };
    UCHAR UseStorageInfo;                                                   //0xcc
    ULONG PointersLength;                                                   //0xd0
    WCHAR* ModulePrefix;                                                    //0xd4
    struct _LIST_ENTRY DriverList;                                          //0xd8
    struct _STRING InitMsg;                                                 //0xe0
    struct _STRING ProgMsg;                                                 //0xe8
    struct _STRING DoneMsg;                                                 //0xf0
    VOID* FileObject;                                                       //0xf8
    enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;                         //0xfc
};
/* Used in */
// _POP_HIBER_CONTEXT

