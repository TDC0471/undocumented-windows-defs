#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>
#include <_KEVENT.h>
#include <_SLIST_HEADER.h>

//0x60 bytes (sizeof)
struct _PF_KERNEL_GLOBALS
{
    ULONGLONG AccessBufferAgeThreshold;                                     //0x0
    struct _EX_RUNDOWN_REF AccessBufferRef;                                 //0x8
    struct _KEVENT AccessBufferExistsEvent;                                 //0x10
    ULONG AccessBufferMax;                                                  //0x28
    union _SLIST_HEADER AccessBufferList;                                   //0x40
    LONG StreamSequenceNumber;                                              //0x50
    ULONG Flags;                                                            //0x54
    LONG ScenarioPrefetchCount;                                             //0x58
};
