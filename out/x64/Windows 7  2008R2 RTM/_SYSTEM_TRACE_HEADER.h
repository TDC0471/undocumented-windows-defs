#pragma once
/* ------------------ */

#include <_WMI_TRACE_PACKET.h>
#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _SYSTEM_TRACE_HEADER
{
    union
    {
        ULONG Marker;                                                       //0x0
        struct
        {
            USHORT Version;                                                 //0x0
            UCHAR HeaderType;                                               //0x2
            UCHAR Flags;                                                    //0x3
        };
    };
    union
    {
        ULONG Header;                                                       //0x4
        struct _WMI_TRACE_PACKET Packet;                                    //0x4
    };
    ULONG ThreadId;                                                         //0x8
    ULONG ProcessId;                                                        //0xc
    union _LARGE_INTEGER SystemTime;                                        //0x10
    ULONG KernelTime;                                                       //0x18
    ULONG UserTime;                                                         //0x1c
};
