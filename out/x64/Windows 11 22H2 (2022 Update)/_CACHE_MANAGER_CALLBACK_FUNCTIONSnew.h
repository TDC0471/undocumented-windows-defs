#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _CACHE_MANAGER_CALLBACK_FUNCTIONS
{
    UCHAR (*AcquireForLazyWriteEx)(VOID* arg1, ULONG arg2, ULONG* arg3);    //0x0
    VOID (*ReleaseFromLazyWrite)(VOID* arg1);                               //0x8
    UCHAR (*AcquireForReadAhead)(VOID* arg1, UCHAR arg2);                   //0x10
    VOID (*ReleaseFromReadAhead)(VOID* arg1);                               //0x18
};
/* Used in */
// _CACHE_MANAGER_CALLBACKS_EX

