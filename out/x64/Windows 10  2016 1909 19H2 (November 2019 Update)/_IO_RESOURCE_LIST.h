#pragma once
/* ------------------ */

#include <_IO_RESOURCE_DESCRIPTOR.h>

//0x28 bytes (sizeof)
struct _IO_RESOURCE_LIST
{
    USHORT Version;                                                         //0x0
    USHORT Revision;                                                        //0x2
    ULONG Count;                                                            //0x4
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];                          //0x8
};
/* Used in */
// _IO_RESOURCE_REQUIREMENTS_LIST

