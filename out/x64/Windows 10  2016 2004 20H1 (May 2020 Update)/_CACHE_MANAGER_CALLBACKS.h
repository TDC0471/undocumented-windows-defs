#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _CACHE_MANAGER_CALLBACKS
{
    UCHAR (*AcquireForLazyWrite)(VOID* arg1, UCHAR arg2);                   //0x0
    VOID (*ReleaseFromLazyWrite)(VOID* arg1);                               //0x8
    UCHAR (*AcquireForReadAhead)(VOID* arg1, UCHAR arg2);                   //0x10
    VOID (*ReleaseFromReadAhead)(VOID* arg1);                               //0x18
};
/* Used in */
// _SHARED_CACHE_MAP

