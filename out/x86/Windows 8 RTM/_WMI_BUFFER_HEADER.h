#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_ETW_BUFFER_CONTEXT.h>
#include <_ETW_BUFFER_STATE.h>
#include <_ETW_REF_CLOCK.h>
#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _WMI_BUFFER_HEADER
{
    ULONG BufferSize;                                                       //0x0
    ULONG SavedOffset;                                                      //0x4
    volatile ULONG CurrentOffset;                                           //0x8
    volatile LONG ReferenceCount;                                           //0xc
    union _LARGE_INTEGER TimeStamp;                                         //0x10
    LONGLONG SequenceNumber;                                                //0x18
    union
    {
        struct
        {
            ULONGLONG ClockType:3;                                          //0x20
            ULONGLONG Frequency:61;                                         //0x20
        };
        struct _SINGLE_LIST_ENTRY SlistEntry;                               //0x20
        struct _WMI_BUFFER_HEADER* NextBuffer;                              //0x20
    };
    struct _ETW_BUFFER_CONTEXT ClientContext;                               //0x28
    enum _ETW_BUFFER_STATE State;                                           //0x2c
    ULONG Offset;                                                           //0x30
    USHORT BufferFlag;                                                      //0x34
    USHORT BufferType;                                                      //0x36
    union
    {
        ULONG Padding1[4];                                                  //0x38
        struct _ETW_REF_CLOCK ReferenceTime;                                //0x38
        struct _LIST_ENTRY GlobalEntry;                                     //0x38
        struct
        {
            VOID* Pointer0;                                                 //0x38
            VOID* Pointer1;                                                 //0x3c
        };
    };
};
/* Used in */
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT

