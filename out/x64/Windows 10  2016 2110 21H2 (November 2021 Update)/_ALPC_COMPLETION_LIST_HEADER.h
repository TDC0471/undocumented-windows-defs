#pragma once
/* ------------------ */

#include <_ALPC_COMPLETION_LIST_STATE.h>
#include <_RTL_SRWLOCK.h>

//0x180 bytes (sizeof)
struct _ALPC_COMPLETION_LIST_HEADER
{
    ULONGLONG StartMagic;                                                   //0x0
    ULONG TotalSize;                                                        //0x8
    ULONG ListOffset;                                                       //0xc
    ULONG ListSize;                                                         //0x10
    ULONG BitmapOffset;                                                     //0x14
    ULONG BitmapSize;                                                       //0x18
    ULONG DataOffset;                                                       //0x1c
    ULONG DataSize;                                                         //0x20
    ULONG AttributeFlags;                                                   //0x24
    ULONG AttributeSize;                                                    //0x28
    volatile struct _ALPC_COMPLETION_LIST_STATE State;                      //0x40
    volatile ULONG LastMessageId;                                           //0x48
    volatile ULONG LastCallbackId;                                          //0x4c
    volatile ULONG PostCount;                                               //0x80
    volatile ULONG ReturnCount;                                             //0xc0
    volatile ULONG LogSequenceNumber;                                       //0x100
    struct _RTL_SRWLOCK UserLock;                                           //0x140
    ULONGLONG EndMagic;                                                     //0x148
};
/* Used in */
// _ALPC_COMPLETION_LIST

