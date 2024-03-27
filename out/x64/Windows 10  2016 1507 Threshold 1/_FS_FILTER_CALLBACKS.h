#pragma once
/* ------------------ */

#include <_FS_FILTER_CALLBACK_DATA.h>

//0x68 bytes (sizeof)
struct _FS_FILTER_CALLBACKS
{
    ULONG SizeOfFsFilterCallbacks;                                          //0x0
    ULONG Reserved;                                                         //0x4
    LONG (*PreAcquireForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x8
    VOID (*PostAcquireForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x10
    LONG (*PreReleaseForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x18
    VOID (*PostReleaseForSectionSynchronization)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x20
    LONG (*PreAcquireForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x28
    VOID (*PostAcquireForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x30
    LONG (*PreReleaseForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x38
    VOID (*PostReleaseForCcFlush)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x40
    LONG (*PreAcquireForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x48
    VOID (*PostAcquireForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x50
    LONG (*PreReleaseForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, VOID** arg2); //0x58
    VOID (*PostReleaseForModifiedPageWriter)(struct _FS_FILTER_CALLBACK_DATA* arg1, LONG arg2, VOID* arg3); //0x60
};
/* Used in */
// _DRIVER_EXTENSION

