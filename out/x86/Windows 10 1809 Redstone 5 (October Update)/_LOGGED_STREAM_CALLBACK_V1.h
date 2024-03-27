#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x8 bytes (sizeof)
struct _LOGGED_STREAM_CALLBACK_V1
{
    VOID* LogHandle;                                                        //0x0
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0x4
};
/* Used in */
// _SHARED_CACHE_MAP

