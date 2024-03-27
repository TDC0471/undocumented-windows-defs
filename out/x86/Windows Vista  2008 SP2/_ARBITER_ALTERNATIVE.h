#pragma once
/* ------------------ */

#include <_IO_RESOURCE_DESCRIPTOR.h>

//0x38 bytes (sizeof)
struct _ARBITER_ALTERNATIVE
{
    ULONGLONG Minimum;                                                      //0x0
    ULONGLONG Maximum;                                                      //0x8
    ULONGLONG Length;                                                       //0x10
    ULONGLONG Alignment;                                                    //0x18
    LONG Priority;                                                          //0x20
    ULONG Flags;                                                            //0x24
    struct _IO_RESOURCE_DESCRIPTOR* Descriptor;                             //0x28
    ULONG Reserved[3];                                                      //0x2c
};
/* Used in */
// _ARBITER_ALLOCATION_STATE

