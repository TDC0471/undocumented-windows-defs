#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x28 bytes (sizeof)
struct _NAMED_PIPE_CREATE_PARAMETERS
{
    ULONG NamedPipeType;                                                    //0x0
    ULONG ReadMode;                                                         //0x4
    ULONG CompletionMode;                                                   //0x8
    ULONG MaximumInstances;                                                 //0xc
    ULONG InboundQuota;                                                     //0x10
    ULONG OutboundQuota;                                                    //0x14
    union _LARGE_INTEGER DefaultTimeout;                                    //0x18
    UCHAR TimeoutSpecified;                                                 //0x20
};
/* Used in */
// _IO_STACK_LOCATION

