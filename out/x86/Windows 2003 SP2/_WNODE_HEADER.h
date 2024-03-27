#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_GUID.h>

//0x30 bytes (sizeof)
struct _WNODE_HEADER
{
    ULONG BufferSize;                                                       //0x0
    ULONG ProviderId;                                                       //0x4
    union
    {
        ULONGLONG HistoricalContext;                                        //0x8
        struct
        {
            ULONG Version;                                                  //0x8
            ULONG Linkage;                                                  //0xc
        };
    };
    union
    {
        ULONG CountLost;                                                    //0x10
        VOID* KernelHandle;                                                 //0x10
        union _LARGE_INTEGER TimeStamp;                                     //0x10
    };
    struct _GUID Guid;                                                      //0x18
    ULONG ClientContext;                                                    //0x28
    ULONG Flags;                                                            //0x2c
};
/* Used in */
// _WMI_BUFFER_HEADER

