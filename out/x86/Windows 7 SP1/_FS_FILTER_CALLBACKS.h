#pragma once
/* ------------------ */

#include <_FS_FILTER_CALLBACK_DATA.h>

//0x38 bytes (sizeof)
struct _FS_FILTER_CALLBACKS
{
    ULONG SizeOfFsFilterCallbacks;                                          //0x0
    ULONG Reserved;                                                         //0x4
    LONG (*PreAcquireForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x8
    VOID (*PostAcquireForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0xc
    LONG (*PreReleaseForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x10
    VOID (*PostReleaseForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x14
    LONG (*PreAcquireForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x18
    VOID (*PostAcquireForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x1c
    LONG (*PreReleaseForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x20
    VOID (*PostReleaseForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x24
    LONG (*PreAcquireForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x28
    VOID (*PostAcquireForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x2c
    LONG (*PreReleaseForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x30
    VOID (*PostReleaseForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x34
};
/* Used in */
// _DRIVER_EXTENSION

