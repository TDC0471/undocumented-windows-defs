#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>
#include <_KEVENT.h>
#include <_SLIST_HEADER.h>

//0x40 bytes (sizeof)
struct _PF_KERNEL_GLOBALS
{
    ULONGLONG AccessBufferAgeThreshold;                                     //0x0
    struct _EX_RUNDOWN_REF AccessBufferRef;                                 //0x8
    struct _KEVENT AccessBufferExistsEvent;                                 //0xc
    ULONG AccessBufferMax;                                                  //0x1c
    union _SLIST_HEADER AccessBufferList;                                   //0x20
    LONG StreamSequenceNumber;                                              //0x28
    ULONG Flags;                                                            //0x2c
    LONG ScenarioPrefetchCount;                                             //0x30
};
