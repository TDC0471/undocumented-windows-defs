#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _ECP_LIST
{
    ULONG Signature;                                                        //0x0
    ULONG Flags;                                                            //0x4
    struct _LIST_ENTRY EcpList;                                             //0x8
};
/* Used in */
// _IO_DRIVER_CREATE_CONTEXT

