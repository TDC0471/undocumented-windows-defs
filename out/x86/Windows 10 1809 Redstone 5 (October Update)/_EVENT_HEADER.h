#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_GUID.h>
#include <_EVENT_DESCRIPTOR.h>

//0x50 bytes (sizeof)
struct _EVENT_HEADER
{
    USHORT Size;                                                            //0x0
    USHORT HeaderType;                                                      //0x2
    USHORT Flags;                                                           //0x4
    USHORT EventProperty;                                                   //0x6
    ULONG ThreadId;                                                         //0x8
    ULONG ProcessId;                                                        //0xc
    union _LARGE_INTEGER TimeStamp;                                         //0x10
    struct _GUID ProviderId;                                                //0x18
    struct _EVENT_DESCRIPTOR EventDescriptor;                               //0x28
    union
    {
        struct
        {
            ULONG KernelTime;                                               //0x38
            ULONG UserTime;                                                 //0x3c
        };
        ULONGLONG ProcessorTime;                                            //0x38
    };
    struct _GUID ActivityId;                                                //0x40
};
/* Used in */
// _EVENT_RECORD

