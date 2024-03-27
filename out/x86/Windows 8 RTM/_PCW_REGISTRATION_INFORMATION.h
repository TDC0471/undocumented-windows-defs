#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_PCW_COUNTER_DESCRIPTOR.h>
#include <_PCW_CALLBACK_TYPE.h>
#include <_PCW_CALLBACK_INFORMATION.h>

//0x18 bytes (sizeof)
struct _PCW_REGISTRATION_INFORMATION
{
    ULONG Version;                                                          //0x0
    struct _UNICODE_STRING* Name;                                           //0x4
    ULONG CounterCount;                                                     //0x8
    struct _PCW_COUNTER_DESCRIPTOR* Counters;                               //0xc
    LONG (*Callback)(enum _PCW_CALLBACK_TYPE arg1, union _PCW_CALLBACK_INFORMATION* arg2, VOID* arg3); //0x10
    VOID* CallbackContext;                                                  //0x14
};
