#pragma once
/* ------------------ */

#include <_WNODE_HEADER.h>
#include <_LARGE_INTEGER.h>
#include <_ETW_BUFFER_CONTEXT.h>
#include <_ETW_BUFFER_STATE.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_WMI_BUFFER_HEADER.h>

//0x48 bytes (sizeof)
struct _WMI_BUFFER_HEADER
{
    union
    {
        struct _WNODE_HEADER Wnode;                                         //0x0
        struct
        {
            ULONG BufferSize;                                               //0x0
            ULONG SavedOffset;                                              //0x4
            volatile ULONG CurrentOffset;                                   //0x8
            volatile LONG ReferenceCount;                                   //0xc
            union
            {
                union _LARGE_INTEGER TimeStamp;                             //0x10
                union _LARGE_INTEGER StartPerfClock;                        //0x10
            };
            LONGLONG SequenceNumber;                                        //0x18
            ULONG Spare0;                                                   //0x20
            ULONG Spare1;                                                   //0x24
            struct _ETW_BUFFER_CONTEXT ClientContext;                       //0x28
            union
            {
                enum _ETW_BUFFER_STATE State;                               //0x2c
                ULONG Flags;                                                //0x2c
            };
        };
    };
    ULONG Offset;                                                           //0x30
    USHORT BufferFlag;                                                      //0x34
    USHORT BufferType;                                                      //0x36
    union
    {
        ULONG Padding1[4];                                                  //0x38
        union _LARGE_INTEGER StartTime;                                     //0x38
        struct _LIST_ENTRY Entry;                                           //0x38
        struct _SINGLE_LIST_ENTRY SlistEntry;                               //0x38
        struct
        {
            struct _WMI_BUFFER_HEADER* NextBuffer;                          //0x38
            struct _SINGLE_LIST_ENTRY GlobalEntry;                          //0x3c
        };
    };
};
/* Used in */
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT

