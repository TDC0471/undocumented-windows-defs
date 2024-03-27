#pragma once
/* ------------------ */

#include <_IO_RESOURCE_DESCRIPTOR.h>

//0x38 bytes (sizeof)
struct _ARBITER_ALTERNATIVE
{
    ULONGLONG Minimum;                                                      //0x0
    ULONGLONG Maximum;                                                      //0x8
    ULONG Length;                                                           //0x10
    ULONG Alignment;                                                        //0x14
    LONG Priority;                                                          //0x18
    ULONG Flags;                                                            //0x1c
    struct _IO_RESOURCE_DESCRIPTOR* Descriptor;                             //0x20
    ULONG Reserved[3];                                                      //0x28
};
/* Used in */
// _ARBITER_ALLOCATION_STATE

