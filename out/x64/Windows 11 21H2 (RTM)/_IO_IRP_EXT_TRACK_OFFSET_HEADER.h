#pragma once
/* ------------------ */

#include <_IO_IRP_EXT_TRACK_OFFSET_HEADER.h>

//0x10 bytes (sizeof)
struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
{
    USHORT Validation;                                                      //0x0
    USHORT Flags;                                                           //0x2
    VOID (*TrackedOffsetCallback)(struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* arg1, struct _IO_IRP_EXT_TRACK_OFFSET_HEADER* arg2, LONGLONG arg3); //0x8
};
/* Used in */
// _IOP_IRP_EXTENSION
// _IO_IRP_EXT_TRACK_OFFSET_HEADER

