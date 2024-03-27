#pragma once
/* ------------------ */

#include <_WNODE_HEADER.h>
#include <_LARGE_INTEGER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_GUID.h>
#include <_WMI_CLIENT_CONTEXT.h>
#include <_WMI_BUFFER_STATE.h>

//0x48 bytes (sizeof)
struct _WMI_BUFFER_HEADER
{
    union
    {
        struct _WNODE_HEADER Wnode;                                         //0x0
        struct
        {
            ULONGLONG Reserved1;                                            //0x0
            ULONGLONG Reserved2;                                            //0x8
            union _LARGE_INTEGER Reserved3;                                 //0x10
            union
            {
                struct
                {
                    VOID* Alignment;                                        //0x18
                    struct _SINGLE_LIST_ENTRY SlistEntry;                   //0x20
                };
                struct _LIST_ENTRY Entry;                                   //0x18
            };
        };
        struct
        {
            LONG ReferenceCount;                                            //0x0
            ULONG SavedOffset;                                              //0x4
            ULONG CurrentOffset;                                            //0x8
            ULONG UsePerfClock;                                             //0xc
            union _LARGE_INTEGER TimeStamp;                                 //0x10
            struct _GUID Guid;                                              //0x18
            struct _WMI_CLIENT_CONTEXT ClientContext;                       //0x28
            union
            {
                struct _WMI_BUFFER_STATE State;                             //0x2c
                ULONG Flags;                                                //0x2c
            };
        };
    };
    ULONG Offset;                                                           //0x30
    USHORT BufferFlag;                                                      //0x34
    USHORT BufferType;                                                      //0x36
    union
    {
        struct _GUID InstanceGuid;                                          //0x38
        struct
        {
            VOID* LoggerContext;                                            //0x38
            struct _SINGLE_LIST_ENTRY GlobalEntry;                          //0x40
        };
    };
};
/* Used in */
// _WMI_LOGGER_CONTEXT

