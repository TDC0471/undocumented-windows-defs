#pragma once
/* ------------------ */

#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _CACHE_UNINITIALIZE_EVENT
{
    struct _CACHE_UNINITIALIZE_EVENT* Next;                                 //0x0
    struct _KEVENT Event;                                                   //0x8
};
/* Used in */
// _CACHE_UNINITIALIZE_EVENT
// _SHARED_CACHE_MAP

