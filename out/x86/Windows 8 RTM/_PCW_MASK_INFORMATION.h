#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_PCW_BUFFER.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _PCW_MASK_INFORMATION
{
    ULONGLONG CounterMask;                                                  //0x0
    struct _UNICODE_STRING* InstanceMask;                                   //0x8
    ULONG InstanceId;                                                       //0xc
    UCHAR CollectMultiple;                                                  //0x10
    struct _PCW_BUFFER* Buffer;                                             //0x14
    struct _KEVENT* CancelEvent;                                            //0x18
};
/* Used in */
// _PCW_CALLBACK_INFORMATION

